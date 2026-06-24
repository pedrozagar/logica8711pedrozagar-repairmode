#include<iostream>

int main(){

    int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int tamanho = 8;
    int buscado;

    std::cout<<"========= Buscar numero =========="<<std::endl;
    std::cout<<std::endl;

    std::cout<<"array: ";
    for(int i = 0; i < tamanho; i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"digite o numero a buscar: ";
    std::cin>>buscado;

    int posicao = - 1;

    for(int i = 0; i < tamanho; i++){
        if(numeros[i] == buscado){
            posicao = i;
            break;
        }
    }

    std::cout<<std::endl;
    if(posicao != - 1){
        std::cout<<"encontrado na posicao "<<posicao<<std::endl;
    }else{
        std::cout<<"nao encontrado!"<<std::endl;
    }
    
    return 0;
}