#include <iostream>
using namespace std;

#define CONSELHEIROS 10

enum Registro
{
    BRANCO,
    CANDIDATO1,
    CANDIDATO2,
    CANDIDATO3,
    CANDIDATO4,
    NULO,
    QUALQUER,
    EMPATE
};

int ComputaVotos(int votos[CONSELHEIROS])
{
    int numDeVotos = 0;
    cout << "    ->>> BEM VINDO AO COMPUTADOR DE VOTOS GALACTICOS <<<-" << endl
         << endl;

    for (int i = 0; i < CONSELHEIROS; i++)
    {
        cout << "\tVoto do conselheiro " << i + 1 << ":" << endl;
        cout << "0-BRANCO\n1-CANDIDATO 1\n2-CANDIDATO 2\n3-CANDIDATO 3\n4-CANDIDATO\nQUALQUER OUTRO VALOR POSITIVO - VOTO NULO" << endl;
        cin >> votos[i];
        if (votos[i] < 0)
        {
            cout << "Valor menor que zero detectado, computacoes encerradas!" << endl;
            return numDeVotos;
        }
        else
            numDeVotos++;
    }
    cout << "\t  COMPUTACOES ENCERRADAS" << endl;
    return numDeVotos;
}

void ApuraEleicao(int numVotos, int votos[CONSELHEIROS])
{
    int brancos = 0, canditato1 = 0, canditato2 = 0, canditato3 = 0, canditato4 = 0, nulos = 0, vencedor;
    if (numVotos < CONSELHEIROS)
        for (int invalidados = numVotos; invalidados < CONSELHEIROS; invalidados++)
            votos[invalidados] = QUALQUER;
    for (int i = 0; i < CONSELHEIROS; i++)
    {
        if (votos[i] == BRANCO)
            brancos++;
        else if (votos[i] == CANDIDATO1)
            canditato1++;
        else if (votos[i] == CANDIDATO2)
            canditato2++;
        else if (votos[i] == CANDIDATO3)
            canditato3++;
        else if (votos[i] == CANDIDATO4)
            canditato4++;
        else if (votos[i] == NULO)
            nulos++;
    }

    if (canditato1 > canditato2 && canditato1 > canditato3 && canditato1 > canditato4)
        vencedor = CANDIDATO1;
    else if (canditato2 > canditato1 && canditato2 > canditato3 && canditato2 > canditato4)
        vencedor = CANDIDATO2;
    else if (canditato3 > canditato1 && canditato3 > canditato2 && canditato3 > canditato4)
        vencedor = CANDIDATO3;
    else if (canditato4 > canditato1 && canditato4 > canditato2 && canditato4 > canditato3)
        vencedor = CANDIDATO4;
    else
        vencedor = EMPATE;

    cout << "\t!!RESULTADO DAS ELEICOES!!" << endl;
    cout << "VOTOS BRANCOS = " << brancos << endl;
    cout << "VOTOS CANDIDATO 1 = " << canditato1 << endl;
    cout << "VOTOS CANDIDATO 2 = " << canditato2 << endl;
    cout << "VOTOS CANDIDATO 3 = " << canditato3 << endl;
    cout << "VOTOS CANDIDATO 4 = " << canditato4 << endl;
    cout << "VOTOS NULOS = " << nulos << endl
         << endl;
    if(vencedor != EMPATE)
        cout << "!!! O VENCEDOR DAS ELEICOES FOI O CANDIDATO " << vencedor << " !!!" << endl;
    else
        cout << "\nHOUVE EMPATE! ELEICAO ENCERRADAS! " << endl;
    
}

int main(int argc, char *argv[])
{
    cout << "---- Povo de Citadela, eis o inicio de uma nova eleição! ----" << endl;
    int votos[CONSELHEIROS], numDeVotos;
    numDeVotos = ComputaVotos(votos);
    ApuraEleicao(numDeVotos, votos);
    return 0;
}