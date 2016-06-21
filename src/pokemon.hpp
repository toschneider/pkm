#ifndef POKEMON_HPP
#define POKEMON_HPP

#include "attack.hpp"
#include <vector>
class Pokemon
{
public:
    Pokemon(std::string name, std::string filenames);
    Vector<Attack*> m_attacks;
    std::string m_name;
};

#endif // POKEMON_HPP
