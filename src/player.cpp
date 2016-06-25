
#include "Vector.hpp"
#include "pokemon.hpp"
#include "item.hpp"
#include <vector>
#include <stdexcept>
#include <iostream>
#include "player.hpp"

using std::vector;


Player::Player(SDL_Renderer* renderer,std::string name,std::string filename)
    : AnimatedRenderable(renderer, filename)
{
    m_dir = 0;
    m_name = name;
    m_pos = Vector2f(0,0);
}

vector<Pokemon*> Player::getPokemons()
{
    return m_pokemons;
}

void Player::setPokemon(Pokemon *pkm, int pos)
{

}
/*
vector<Item*> Player::getItems()
{

}
*/
void Player::setItem(Item *item)
{

}
Vector2f Player::position()
{
    return m_pos;
}

void Player::setPosition(Vector2f pos)
{
    m_pos = pos;
}

void Player::setDir(int dir)
{
    m_dir = dir;
}

int Player::dir()
{
    return m_dir;
}

void Player::render()
{
    if (m_numFrames == 0)
    {
        //throw runtime_error("attempted to render animation with 0 frames");
        std::cout << "bla\n"<<std::endl;
    }
    SDL_Rect target;

    target.x = m_pos.x();
    target.y = m_pos.y();
    target.w = m_frameWidth;
    target.h = m_frameHeight;
    SDL_RenderCopyEx(
            getRenderer(), m_textures[m_dir][m_currentFrame], &m_sourceRect, &target, 0, NULL, SDL_FLIP_NONE);
}

Player::~Player()
{

}

