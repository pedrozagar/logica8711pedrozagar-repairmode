#include<iostream> //biblioteca aqui
#include<format> //biblioteca aqui
#include<string> //biblioteca aqui

int main(){

    std::string nome = "Pedro";

    std::string mensagem = std::format("Ola, {}! Voce tem {} anos.\n", nome);
    std::cout<<mensagem;

    return 0;
}