#include<iostream>

//aqui vamos usar a função FOR. o FOR tem início, condição e incremento.

void imprimirAteN(int n){
    for(int i = 1; i <= n; i++){
        std::cout<<i<<" ";
    }       
}

int main(){

    int numero;

    std::cout<<"Digite um numero: "<<std::endl;
    std::cin>>numero;

    imprimirAteN(numero);

    return 0;    
}