#include<iostream>

int main(){

    int num1, num2, soma, subt, mult;
    float div;

    std::cout<<"Digite aqui o valor para numero 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite aqui o valor para numero 2: "<<std::endl;
    std::cin>>num2;

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    std::cout<<"O resultado da soma e: "<<soma<<std::endl;
    std::cout<<"O resultada da subtracao e: "<<subt<<std::endl;
    std::cout<<"O resultado da multiplicacao e: "<<mult<<std::endl;
    std::cout<<"O resultado da divisao e: "<<div<<std::endl;

    return 0;
}