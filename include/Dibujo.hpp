#pragma once
#include <string>
#include <ftxui/screen/screen.hpp>
class Dibujo
{
    private:
    int posicionX;
    int posicionX;
    string palabra;
    public:
    Dibujo(){
        this->posicionX = 0;
        this->posicionY = 0;
    }
    Dibujo(int posicionX, int posicionY){
        this->posicionX;
        this->posicionY;
    }
    Dibujo(string palabra, int posicionX, int posicionY){
        this->palabra = palabra;
        this->posicionX = posicionX
        this->posicionY = posicionY
    }    
    void Dibujar(ftxui::Screen Pantalla){
     int posicionPalabraX = 0;
        int posicionPalabraY = 0;
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

    }
    ~Dibujo(){}
}