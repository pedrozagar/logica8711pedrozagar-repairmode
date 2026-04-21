#include<iostream>

int main(){

    int num;

    do{
        std::cout<<"Digite um valor para num: "<<std::endl;
        std::cin>>num;

        if(num < 1 || num > 10){
            std::cout<<"Entrada invalida!"<<std::endl;
        }
    }while(num < 1 || num > 10);{
        std::cout<<"Obrigado! Voce escolheu o numero: "<<num<<std::endl;
    }

  
    return 0;

}


