#include "pokemon.hpp"
#include "attack.hpp"
using std::vector;
using std::string;
Pokemon::Pokemon(SDL_Renderer* renderer,std::string name, std::string filename)
    : AnimatedRenderable(renderer, filename)
{
    m_name = name;
}

string Pokemon::name()
{
    return m_name;
}

void Pokemon::setName(string name)
{
    m_name = name;
}
string Pokemon::typ()
{
    return m_typ;
}
void Pokemon::setTyp(string typ)
{
    m_typ = typ;
}
int Pokemon::lvl()
{
    return m_lvl;
}
void Pokemon::setLvl(int lvl)
{
    m_lvl = lvl;
}
long Pokemon::ep()
{
    return m_ep;
}
void Pokemon::setEp(long ep)
{
    m_ep = ep;
}
long Pokemon::hp()
{
    return m_hp;
}
void Pokemon::setHp(long hp)
{
    m_hp = hp;
}
