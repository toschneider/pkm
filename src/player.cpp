#include "player.hpp"
#include "Vector.hpp"
#include "pokemon.hpp"
#include "item.hpp"
#include <vector>
using std::vector;
Player::Player()
{

}

Player::Player(Vector2f pos)
{
    m_pos = pos;

}

Player::Player(SDL_Renderer* player,std::string name,std::string filename)
{
    m_name = name;
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

Player::~Player()
{

}

