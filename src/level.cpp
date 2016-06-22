#include "level.hpp"
#include <string>
#include "player.hpp"
Level::Level(SDL_Renderer* renderer,std::string filename)
{
}

void Level::setPlayer(Player *player)
{
    m_player = player;
}
