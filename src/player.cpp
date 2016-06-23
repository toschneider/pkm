#include "player.hpp"
#include "Vector.hpp"
#include "pokemon.hpp"
#include "item.hpp"
#include <vector>
#include <stdexcept>
#include <iostream>
using std::vector;


Player::Player(SDL_Renderer* renderer,std::string name,std::string filename)
    : AnimatedRenderable(renderer, filename)
{
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

vector<Item*> Player::getItems()
{

}

void Player::setItem(Item *item)
{

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
            getRenderer(), m_texture, &m_sourceRect, &target, 0, NULL, SDL_FLIP_NONE);
}

Player::~Player()
{

}

