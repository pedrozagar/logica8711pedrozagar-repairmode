#include<iostream>

int main(){

    int num1;

    std::cout<<"Digite num 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"\n\nO num 1 é "<<num1<<"\n";
    // std::cout<<"\n\n\n;"

    // New Line: Apenas insere o caractere de nova linha.
    // É como apertar o enter em um editor de texto. 
    // O computador guarda essa informação em um espaço temporário (chamado buffer) e só mostra
    // na tela quando esse espaço enche ou o programa acaba.

    // std::endl Insere a nova linha E foraça o esvaziamento do buffer (operação chamada de flush). 
    // Ele obriga o computador a exibir tudo o que está guardado na memória imediatamente na tela.
    
     return 0;
}