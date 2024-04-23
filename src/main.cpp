#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>
#include <fstream>
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;

int (int argc, char const *argv[])
{
    Dibujo dTanque("./assets/images/canon.txt");
    Dibujo dAlien("./assets/images/alien.txt");
    Dibujo dBloque("./assets/images/canon.txt");

    int fotograma =0;
    while(true)
    {
        fotograma++;
        Element personaje=spinner(21,fotograma) | bold
    }


}