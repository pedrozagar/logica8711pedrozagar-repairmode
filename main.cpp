#include<iostream>

int main(){

    int fila[5];
    int inicio = 0;
    int fim = 0;

    std::cout<<"========FILA======="<<std::endl;
    std::cout<<std::endl;

    fila[0] = 100;
    fila[1] = 200;
    fila[2] = 300;
    fim = 3;

    std::cout<<"elementos enfileirados: 100, 200, 300"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"desenfileirando..."<<std::endl;
    while(inicio < fim){
        std::cout<<"removido: "<<fila[inicio]<<std::endl;
        inicio++;
    }
    return 0;
}