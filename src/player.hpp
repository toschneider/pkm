#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "MainWindow.hpp"
#include "Vector.hpp"
#include "pokemon.hpp"
#include "item.hpp"
#include <vector>
#include <string>
#include "AnimatedRenderable.hpp"
using std::vector;
class Player: public AnimatedRenderable
{
public:
    ~Player();
    Player(SDL_Renderer* renderer,std::string name,std::string filename);
    vector<Pokemon*> getPokemons();
    void setPokemon(Pokemon *pkm, int pos);
    vector<Item*> getItems();
    void setItem(Item *item);
    void render();




    vector<Pokemon*> m_pokemons;
    vector<Item*> m_items;
    Vector2f m_pos;
    std::string m_name;
};

#endif // PLAYER_HPP
