#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Vector.hpp"
#include "pokemon.hpp"
#include "item.hpp"
#include <vector>

class Player
{
public:
    Player(Vector2f pos);
    ~Player();
    Player(std::string name,std::string filename);
    Vector2f m_pos;
    Vector<Pokemon*> m_pokemons;
    Vector<Item*> m_items;

    Vector<Pokemon*> getPokemons();
    void setPokemon(Pokemon *pkm, int pos);

    Vector<Item*> getItems();
    void setItem(Item *item);



    std::string m_name;
};

#endif // PLAYER_HPP
