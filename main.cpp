#include<iostream>
#include<string>

int main(){

    //solicitar ao usuário para ele digitar nome (primeiro nome)
    //colocar a idade
    //fazer um calculo para que diga que ano nasceu
    //no final mostre o nome da pessoa..voce nasceu no ano..
    //vamos tentar SEM IA?? 

    std::string nome;
    int idade;
    int anoAtual = 2026;
    int anoNascimento = 1998;

    std::cout<<"digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"digite sua idade: "<<std::endl;
    std::cin>>idade;

    anoNascimento = anoAtual - idade;
    
    std::cout<<"seu nome e "<<nome<<"!!"<<std::endl;
    std::cout<<"voce nasceu em: "<<anoNascimento<<"."<<std::endl;

     return 0;
}