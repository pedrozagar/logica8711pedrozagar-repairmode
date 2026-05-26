#include<iostream> //biblioteca
#include<string> //biblioteca

//long long é uma nova função que iremos aprender

long long calcularFatorial(int n){
    long long resultado = 1;

    for(int i = 1; i <= n; i++){
        resultado *= i;
    }

    return resultado;
}

int main(){
    int numero;

    std::cout<<"Digite um numero para calcular fatorial: "<<std::endl; //aqui é importante entender o que significa FATORIAL.
    std::cin>>numero;

    if(numero < 0){
        std::cout<<"Erro: fatorial de numero negativo nao existe!"<<std::endl;
    }else{
        long long fatorial = calcularFatorial(numero);
        std::cout<<"! = "<<fatorial<<std::endl;
    }
}