#include <iostream>
#include <TazoDorado.hpp>
using namespace std;


int main(int argc, char const *argv[])
{
    // int   entero=0;
    // bool  booleano=true;
    // char  letra='A';
    // float decimal=0.5;

    // cout<<"Tamaño entero "<<sizeof(entero)<<endl;
    // cout<<"Tamaño booleano "<<sizeof(booleano)<<endl;
    // cout<<"Tamaño letra "<<sizeof(letra)<<endl;
    // cout<<"Tamaño decimal "<<sizeof(decimal)<<endl;
    // cout<<"Tamaño decimal"<<sizeof(decimal)<<endl;
    // cout<<"Tamaño de Tazo "<<sizeof(TazoDorado)<<endl;
    // cout<<endl;

    // TazoDorado Tazo;
    // TazoDorado Tazo2;
    // cout<<"direccion de Tazo "<<&Tazo<<endl;
    // cout<<"direccion de Tazo2 "<<&Tazo2<<endl;

    // TazoDorado Tazos [16];
    // for ( size_t i = 0; i < 16; i++)
    // {
    //  cout<<"direccion de Tazos"<<i<<":"<<&Tazos[i]<<endl;
    // }
    //------------------Vercion en c -----------------------//
    TazoDorado* direccion;
    cout<<"direccion de direccion: "<<&direccion<<endl;
    direccion=(TazoDorado*)malloc(sizeof(TazoDorado));
    cout<<"direccion dinamica0: "<<direccion<<endl;
    cout<<"direccion dinamica0: "<<direccion+1<<endl;
    
    direccion->Inicializar();
    cout<<"valor en direccion: "<<direccion->Flotando()<<endl;

    //------------------- Version c++ -----------------------//
    TazoDorado* direccion2;
    direccion2=new TazoDorado()
    cout<<"valor en direccion2: "<<direccion2->Flotando()<<endl;
    
    return 0;
}
