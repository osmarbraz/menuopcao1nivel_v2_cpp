#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    //Variável que define as opções do menu
    int opcao1 = -1;
    while (opcao1 != 9) {
        //Escreve o menu de opções
        cout << endl <<">> Menu Nível 0 <<"
             << endl << " 1 - Opção 1"
             << endl << " 2 - Opção 2"
             << endl << " 3 - Opção 3"
             << endl << " 9 - Sair" 
             << endl << " Digite uma opção:";
        //Lê a opção de entrada
        cin >> opcao1;
        switch (opcao1) {
            case 1:
                cout << endl << "Executando opção 1";
                break;
            case 2:
                cout << endl << "Executando opção 2";
                break;
            case 3:
                cout << endl << "Executando opção 3";
                break;

                //Outras opções vão aqui

            case 9:
                cout << endl << "Saindo do sistema";
                break;
            default:
                cout << endl << "Opção inválida";
        }
    }
    return EXIT_SUCCESS;
}
