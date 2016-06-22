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
    Level level(window.getRenderer(), window.getCam(), (string)"../res/test2.lvl");
    //Level level(window.getRenderer(), "../res/test2.lvl");
    Player player(window.getRenderer(),"fd", "../res/test.spr");
    level.setPlayer(&player);
    window.setLevel(&level);
	window.run();
}
