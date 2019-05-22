#ifndef _ROBO_H_
#define _ROBO_H_
#include <string>
#include <iostream>

using namespace std;

class Robo
{
private:
    string nome;
    string programacao;
    int pecas;
    float altura, peso;
    string tipoDeLocomocao;
public:
    Robo();
    ~Robo();
    void setNome(string);
    void setProgramacao();
    void setNumPecas(int);
    void setDimensoes(float, float);

    string getNome();
    void getProgramacao();
    int getNumPecas();
    float getPeso();
    float getAltura();

    void mover(string);
    void comunicar();
};


#endif
