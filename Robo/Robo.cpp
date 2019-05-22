#include "Robo.h"

Robo::Robo()
{
   cout << "Entrei no construtor da classe Robo" << endl; 
}

Robo::~Robo()
{
    cout << "Entrei no destrutor da classe Robo" << endl;
}

void Robo::setNome(string n)
{
    nome = n;
}

void Robo::setProgramacao()
{
    cout << "Voce entrou na funcao que seta a programacao do robo... " << endl;
    cout << "Digite a programacao do robo: ";
    getline(cin, programacao);
}

void Robo::setNumPecas(int num)
{
    pecas = num;
}

void Robo::setDimensoes(float a, float p)
{
    altura = a;
    peso = p;
}

string Robo::getNome()
{
    return nome;
}

void Robo::getProgramacao()
{
    cout << "Eu sou programado na linguagem " << programacao << endl;
}

int Robo::getNumPecas()
{
    return pecas;
}

float Robo::getAltura()
{
    return altura;
}

float Robo::getPeso()
{
    return peso;
}

void Robo::mover(string tipo)
{
    tipoDeLocomocao = tipo;
    cout << "Eu me locomovo ovo ovo utilizando: " << tipoDeLocomocao << endl;
}

void Robo::comunicar()
{
    cout << "lalalalalalalal" << endl;
}
