#include<iostream>
#include<string>

int main(){

    int opcao;
    std::string nome;
    int idade;

    std::cout<<"Escolha a opcao adequada: "<<std::endl<<std::endl;
    std::cout<<"Digite 1 para cadastrar ou 2 para sair: "<<std::endl;
    std::cin>>opcao;

if(opcao == 1){
    std::cout<<"Digite o nome: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Digite a idade: "<<std::endl;
    std::cin>>idade;

    std::cout<<"Seu nome e: "<<nome<<std::endl;
    std::cout<<"Sua idade e: "<<idade<<std::endl;
    std::cout<<"Certo, este e seria o if quando voce apertou o 1, parabens."<<std::endl;
}else{
    std::cout<<"Ate a proxima!"<<std::endl;
}

    return 0;

}