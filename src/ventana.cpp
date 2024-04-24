#include <iostream>
#include <ftxui/component/component.hpp>
#include<ftxui/component/screen_interactive.hpp>

using namespace std;
using namespace ftxui;


int main(int argc, char const *argv[])
{
    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Fixed(10));
    Render(Pantalla, border(text("Hola")));
    Pantalla.PixelAt(5, 5).character = 'm';

    string prueba = "Otro";
    int posicionX = 6;
    int posicionY = 4;
    for (auto &&letra : prueba)
    {
        Pantalla.PixelAt(posicionX, posicionY).character = letra;
        posicionX++;
    }
    Pantalla.Print();
    return 0;
}