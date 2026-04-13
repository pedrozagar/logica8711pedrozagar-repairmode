#include<iostream>
#include<string> 

int main(){

    int idade;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade <= 0){
    std::cout<<"Idade invalida!"<<std::endl;
    }

    return 0;
}


