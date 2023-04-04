//chamando uma blioteca
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

//colocando uma variavel
int main() {
    char continuar='s';
    while (continuar=='s'||continuar=='S'){
        string nome, RA;
         //colocando as variaveis
        double ac1, ac2, acf,ag, nota1, nota2, nota3, nota4;
        cout<<"digite o nome do aluno >>> ";
        cin>>nome;
        cout<<"digite o RA do aluno >>> ";
        cin>>RA;
        //interface do usuario da nota da ac1
        cout << "digite a sua primeira nota da ac1 >>> ";
        //o valor definido para ac1
        cin >> ac1;
        //interface de usuario da nota ac2
        cout << "digite a sua segunda nota da ac2 >>> ";
        //o valor atribuido para ac2
        cin >> ac2;
        //interface de usuario da nota da af
        cout << "digite a sua terceira nota da af >>> ";
        // o valor atribuido a af
        cin >> acf;
        cout<<"digite a sua quarta nota da ag >>> ";
        cin>>ag;

        //equacoes para definir a notas de cada ac
         nota1 = ac1 * 0.15;
         nota2 = ac2 * 0.35;
         nota3 = acf * 0.40;
         nota4 = ag * 0.10;
         //equacao da soma de todas as notas de cada ac
        double soma = (nota1 + nota2 + nota3+nota4);
        //o que aparecera para o usuario resultado da sua media
        cout<<nome<<endl;
        cout<<RA<<endl;
        cout << "a sua media no semestre foi: " << soma << endl << endl;
        switch((int)soma){
            case 10:
            cout<<"VOCE E FODA!"<<endl;
            break;
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            cout<<"voce passou de ano!"<<endl;
            break;
            case 4:
            case 3:
            cout<<"voce esta em recuperacao"<<endl;
            break;
            default:
            cout<<"voce foi reprovado!!!"<<endl;
            break;
        }
        cout<<"deseja continuar?(s/n) >>> ";
        cin>>continuar;
       
    }
    return 0;
}