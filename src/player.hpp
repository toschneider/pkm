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
    Player(SDL_Renderer* renderer,std::string name,std::string filename,std::string gender);
    vector<Pokemon*> getPokemons();
    void setPokemon(Pokemon *pkm, int pos);
    //vector<Item*> getItems();
    void setItem(Item *item);
    void render();
    Vector2f position();
    void setPosition(Vector2f pos);
    void setDir(int dir);
    int dir();
    std::string gender();

private:

    vector<Pokemon*> m_pokemons;
    vector<Item*> m_items;
    Vector2f m_pos;
    std::string m_name;
    int m_dir;
    std::string m_gender;
};

#endif // PLAYER_HPP
