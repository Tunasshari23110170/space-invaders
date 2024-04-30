#include <iostream>
#include <ftxui/component/component.hpp>
#include<ftxui/component/screen_interactive.hpp>

using namespace std;
using namespace ftxui;


int main(int argc, char const *argv[])
{
    string palabra= "Shari";
    string palabra2 = "Itzel";

    int posicionInicialX = 0;
    int posicionInicialY = 0;

     int posicionInicial2X = 8;
    int posicionInicial2Y = 0;

    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    while (true){
        this_thread::sleep_for(0.1s);
       
        int posicionPalabraX = 0;
        int posicionPalabraY = 0;

        int posicionPalabra2X = 8;
        int posicionPalabra2Y = 0;
        for (auto &&letra : palabra)
        {
            int posicionFinalX = posicionInicialX + posicionPalabraX;
            int posicionFinalY = posicionInicialY + posicionPalabraY;

            Pantalla.PixelAt(
                posicionFinalX,
                posicionFinalY
            ).character = letra;
            posicionPalabraX++;
        }
        for (auto &&letra : palabra2)
        {
           int posicionFinal2X = posicionInicial2X + posicionPalabra2X;
            int posicionFinal2Y = posicionInicial2Y + posicionPalabra2Y;

            Pantalla.PixelAt(
                posicionFinal2X,
                posicionFinal2Y
            ).character = letra;
            posicionPalabra2X++; 
        }
    
    Pantalla.Print();
    Pantalla.Clear();
    cout << Pantalla.ResetPosition();

    posicionInicialX++;
    posicionInicialY++;

    posicionInicial2X++;
    posicionInicial2Y++;
    }
    return 0;
}