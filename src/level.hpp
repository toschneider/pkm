#ifndef LEVEL_HPP
#define LEVEL_HPP
#include "player.hpp"
#include <vector>
using std::vector;
class Player;
class MainWindow;
class Level
{
public:
    Level(SDL_Renderer *renderer,std::string filename);
    void setPlayer(Player* player);



    Player *m_player;
};

#endif // LEVEL_HPP
