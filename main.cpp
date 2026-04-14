#include<iostream>
#include<string> 

int main(){

    std::string nome;
    float altura;
    int idade;

    std::cout<<"ola, bem-vindo.\n"<<std::endl;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Digite sua altura: "<<std::endl;
    std::cin>>altura;

    std::cout<<"Digite sua idade: "<<std::endl;
    std::cin>>idade;

    if (idade < 0){
        std::cout<<"Idade invalida!"<<std::endl;
    }else if(idade <=10){
        std::cout<<"Voce e infantil."<<std::endl;
    }else if(idade <=18){
        std::cout<<"Voce e adolescente."<<std::endl;
    }else if(idade <=60){
        std::cout<<"Voce e adulto."<<std::endl;
    }

    return 0;
}