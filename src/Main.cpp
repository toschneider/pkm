#include "MainWindow.hpp"
#include "level.hpp"
#include <string>
#include <iostream>
using std::string;


int main(int argc, char** argv)
{
    /*if(argc != 3)
	{
		std::cout << "Please specify a level to render" << std::endl;
		return -1;
    }*/

    MainWindow window("Pokemon", 800, 600);
    Level level(window.getRenderer(), (string)"../res/test2.lvl", window.getCam());
    //Level level(window.getRenderer(), "../res/test2.lvl");
    Player player(window.getRenderer(),"fd", "../res/player_female.spr","female");
    level.setPlayer(&player);
    window.setLevel(&level);
	window.run();
}
