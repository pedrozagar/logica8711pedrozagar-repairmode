#include<iostream>

int main(){

    int a;
    int b;
    //int a, b;

    std::cout<<"digite um valor para A: "<<std::endl;
    std::cin>>a;

    std::cout<<"digite um valor para B: "<<std::endl;
    std::cin>>b;

    std::cout<<(a > b)<<std::endl;
    //aqui a pergunta é a é maior que b? se for a maior que b sera true, ou seja, 1, que é linguagem de maquina. se a é maior que b, daí vai ser falso, será 0, ou seja, a linguagem de maquina especifica por binario 0 e 1;

    std::cout<<(a >= b)<<std::endl; 
    // a é igual ou maior que b?;
    std::cout<<(a != b)<<std::endl;
    // a é se o valor é diferente;
     return 0;
}