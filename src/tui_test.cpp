#include<ftxui/dom/elements.hpp>
#include <ftxui/scree/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <iostream>
int main(void){

using namespace ftxui;
Element document =
hbox({
    text("left") | border,
    text("middle") | border | flex,
    text("right") | border,
});

    //crea la pantalla y establece el contenido.
    auto screen = Screen::Create(
        Dimension::Full (),
        Dimension::Fit(container)
    );
    Render(screen,container);
    screen.Print();
    return EXIT_SUCCESS;
}