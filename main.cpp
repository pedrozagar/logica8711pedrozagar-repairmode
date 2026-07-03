#include<iostream>
#include<vector>

int main(){

    std::vector<int>numeros;

    std::cout<<"======= Acessar elemento ========"<<std::endl;

    numeros.push_back(100);
    numeros.push_back(200);
    numeros.push_back(300);
    numeros.push_back(400);

    std::cout<<"antes: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    numeros.erase(numeros.begin() + 1);

    std::cout<<"depois: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }

    return 0;

}