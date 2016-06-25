/*
 * AnimatedRenderable.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: twiemann
 */

#include "AnimatedRenderable.hpp"
#include <vector>
#include <fstream>

using std::string;
using std::cout;
using std::endl;

AnimatedRenderable::AnimatedRenderable(SDL_Renderer* renderer, std::string filename)
	: Renderable(renderer), m_numFrames(0), m_currentFrame(0), m_frameWidth(0), m_frameHeight(0)
{
	std::ifstream ifs(filename.c_str());
	std::string textureFileName;
	if(ifs.good())
	{
		ifs >> textureFileName >> m_frameWidth >> m_frameHeight >> m_numFrames;
        textureFileName = "../res/" + textureFileName;
        const char white = 255;
        m_texture = loadTexture(textureFileName,white,white,white);
        string arr[4] = {"up","down","left","right"};
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {

                string tex = textureFileName.substr (0,textureFileName.length()-4)+"_" + arr[i]+(std::to_string(j))+".png";
                m_textures[i][j] = loadTexture(tex,white,white,white);
            }
        }
    }
	else
	{
		std::cout << "Unable to open file " << filename << std::endl;
	}

	// Initialize source recnt
	m_sourceRect.x = 0;
	m_sourceRect.y = 0;
	m_sourceRect.w = m_frameWidth;
	m_sourceRect.h = m_frameHeight;

}

AnimatedRenderable::~AnimatedRenderable() {}

void AnimatedRenderable::direction(int dir)
{

    //lor
    if(dir == 10)
    {
        //down 0
        m_sourceRect.y = m_frameHeight * 2;
    }
    else if(dir == -10)
    {
        //up 3
        m_sourceRect.y = m_frameHeight * 1;
    }
    else if(dir == 1)
    {
        //right 2
        m_sourceRect.y = m_frameHeight * 0;
    }
    else if(dir == -1)
    {
        //left 1
        m_sourceRect.y = m_frameHeight * 3;
    }
    else
    {
        //no movement 0
        m_sourceRect.y = m_frameHeight * 3;
    }
}

void AnimatedRenderable::nextFrame()
{
	// Check and increase frame counter
	if(m_currentFrame + 1 < m_numFrames)
	{
		m_currentFrame++;
	}
	else
	{
		m_currentFrame = 0;
	}

	// Setup source rect
	m_sourceRect.x = m_currentFrame * m_frameWidth;
}

