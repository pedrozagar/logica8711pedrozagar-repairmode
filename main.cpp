#include<iostream>

int main(){

    int num;

    std::cout<<"Digite um numero: "<<std::endl;
    std::cin>>num;

    std::cout<<"\n";

    if(num % 2 == 0){
        std::cout<<"e par!"<<std::endl;
    }else{
        std::cout<<"e impar!"<<std::endl;
    }
    
    return 0;

}