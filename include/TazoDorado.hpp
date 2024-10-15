class TazoDorado
{
private:
       bool Flotando;
public:
    TazoDorado() 
    {
     this->Flotando=false;
    }
    ~TazoDorado(){}
    void Flotar()
    {
     this->Flotando=true;
    }
};