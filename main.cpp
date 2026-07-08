#include<iostream>
#include<vector>
 
int main(){
 
    std::vector<int>numeros;

    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);

    //apresente o vector, mostre os numeros...depois mostre só os pares e depois só os ímpares.

    std::cout<<"numeros pares e impares:""\n\n";

    for(int i = 0; i < numeros.size(); i++){
        int numero;
        std::cout<<numeros[i]<<", ";
    }

    std::cout<<"\n\n";

    std::cout<<"mostre so os numeros pares: ";
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] % 2 == 0){
            std::cout<<numeros[i]<<" ";
        }

    }


    std::cout<<"\nmostre so os numeros impar: ";
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] % 2 != 0){
            std::cout<<numeros[i]<<" ";
        }

    }


    return 0;
}