#ifndef POKEMON_HPP
#define POKEMON_HPP

#include "attack.hpp"
#include <vector>
#include <string>
#include "AnimatedRenderable.hpp"
using std::vector;
using std::string;
class Pokemon: public AnimatedRenderable
{
public:
    Pokemon(SDL_Renderer* renderer,std::string name, std::string filename);
    string name();
    void setName(string name);
    string typ();
    void setTyp(string typ);
    int lvl();
    void setLvl(int lvl);
    long ep();
    void setEp(long ep);
    long hp();
    void setHp(long hp);



private:
    vector<Attack*>     m_attacks;
    string              m_name;
    string              m_typ;
    int                 m_lvl;
    long                m_ep;
    long                m_hp;

};

#endif // POKEMON_HPP
