#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Vector.hpp"
#include "pokemon.hpp"
#include <vector>

class Player
{
public:
    Player(Vector2f pos);

    Vector2f m_pos;
    Vector<Pokemon*> m_pokemons;
};

#endif // PLAYER_HPP
