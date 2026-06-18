#include<iostream>

int main(){
    int jogos;

    std::cout<<"===== CALCULADOR DE PUBLICO ======"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Quantos jogos? ";
    std::cin>>jogos;

    int somaPublico = 0;

    for(int i = 1; i <= jogos; i++){
        int publico;
        std::cout<<"Publico jogo "<<i<<": ";
        std::cin>>publico;
        somaPublico += publico;
    }
    int media = somaPublico / jogos;

    std::cout<<std::endl;
    std::cout<<"==== RESULTADO ===="<<std::endl;
    std::cout<<"Media de publico: "<<media<<" pessoas"<<std::endl;
    std::cout<<"Total de publico: "<<somaPublico<<" pessoas"<<std::endl;

    return 0;
}