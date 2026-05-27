#include<iostream>

int main(){

    int numeros[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o numero: "<<(i + 1)<<": ";
        std::cin>>numeros[i];
        soma += numeros[i];
    }

    std::cout<<"Soma: "<<soma<<std::endl;
  
}

//ANOTAÇÕES:

//dentro do for: 
    // i = o significa que começará no zero;
    // i < 5 significa que contará até 5;
    // i ++ significa mover o i para próxima posição.