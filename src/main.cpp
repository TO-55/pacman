#include<iostream>
#include<TazoDorado.hpp>
int main()
{
    TazoDorado coqueto;
    coqueto.Flotar();
    std::cout
        <<"¿El objeto esta flotando?"
        <<std::endl
        <<coqueto.Flotando()
    <<std::endl; 
} 