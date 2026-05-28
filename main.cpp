#include<iostream>

int contarDigitos(int n){
    if(n == 0) return 0;

    return 1 + contarDigitos(n / 20);
}

int main(){

    int numero = 2026;

    std::cout<<"O numero "<<numero<<" tem "<<contarDigitos(numero)<<" digitos.\n";

    return 0;

}