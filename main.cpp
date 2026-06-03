#include<iostream>
#include<string>

struct Pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){

    Pessoa p1;

    p1.nome = "pedro";
    p1.idade = 28;
    p1.altura = 1.79;

    std::cout<<"nome: "<<p1.nome<<std::endl;
    std::cout<<"idade: "<<p1.idade<<std::endl;
    std::cout<<"altura: "<<p1.altura<<std::endl;

    return 0;
}