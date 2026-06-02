#include<iostream>

int main(){

    int numero = 42;
    double numero1 = 4.33;

    std::cout<<"Numero: "<<numero1<<std::endl;
    std::cout<<"Endereço: "<<&numero1<<std::endl;

    std::cout<<"Numero: "<<numero<<std::endl;
    std::cout<<"Endereço: "<<&numero<<std::endl;

return 0;
}