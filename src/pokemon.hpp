#ifndef POKEMON_HPP
#define POKEMON_HPP

#include "attack.hpp"
#include <vector>
#include <string>
using std::vector;
using std::string;
class Pokemon
{
public:
    Pokemon(std::string name, std::string filenames);
    vector<Attack*> m_attacks;
    std::string m_name;
};

#endif // POKEMON_HPP
