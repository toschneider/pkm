#include "level.hpp"
#include <string>
Level::Level(SDL_Renderer* renderer,std::string filename)
{
}

void Level::setPlayer(Player *player)
{
    m_player = player;
}
