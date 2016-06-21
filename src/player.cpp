#include "player.hpp"
#include "Vector.hpp"
#include "pokemon.hpp"
#include "item.hpp"
#include <vector>

Player::Player(Vector2f pos)
{
    m_pos = pos;

}

Player::Player(std::string name,std::string filename)
{
    m_name = name;
}

Vector<Pokemon*> getPokemons()
{
    return m_pokemons;
}

void setPokemon(Pokemon *pkm, int pos)
{

}

Vector<Item*> getItems()
{

}

void setItem(Item *item)
{

}

Player::~Player()
{

}

