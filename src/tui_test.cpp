#include<ftxui/dom/elements.hpp>
#include <ftxui/scree/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <iostream>
using namespace ftxui;
int main (){
    Element label = text("Hola mundo");
    Element container = hbox ({label});

    //crea la pantalla y establece el contenido.
    auto screen = Screen::Create(
        Dimension::Full (),
        Dimension::Fit(container)
    );
    Render(screen,container);
    screen.Print();
    return 0;
}