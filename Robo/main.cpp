#include "Robo.h"

int main()
{
    Robo nao;
    nao.setNome("Arlindo");
    cout << "O nome do robo e " << nao.getNome() << endl;
    nao.setProgramacao();
    nao.getProgramacao();
    return 0;
}