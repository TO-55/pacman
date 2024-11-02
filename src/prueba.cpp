#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    
    
    while (true)
    {
        int x=frame;
        auto can = Canvas(500,500);
        can.DrawBlockCircleFilled(60+x,60,10);

        can.DrawBlockLine(200,120,1,120);
        can.DrawBlockLine(80,119,80,99);
        can.DrawPointCircleFilled(80,99,8);
        can.DrawPointCircleFilled(73,92,5);
        can.DrawPointCircleFilled(90,99,4);
        can.DrawPointCircleFilled(65,98,2);
        can.DrawPointLine(65,95,80,90);
       
        

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        //Element personaje = spinner(22, frame);
        Element lienzo = bgcolor(Color::Black, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}