//LISTA DE EXERCÍCIOS C++//

/*
1. Ler e exibir
Crie um programa que leia 5 números e exiba-os na tela.

#include<iostream>

int main(){
    int numeros[5] = {10, 20, 30, 40, 50};

    std::cout<<"======1. exibir valores predefinidos ======="<<std::endl<<std::endl;

    std::cout<<"numeros armazenados: "<<std::endl<<std::endl;
    for(int i = 0; i < 5; i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
*/

/*
2. Soma simples
Leia 5 números e calcule a soma total.

#include<iostream>

int main(){
    int numeros[5];
    int soma = 0;

    std::cout<<"======2. exibir soma total ========"<<std::endl<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<"digite o numero "<<(i + 1)<<": ";
        std::cin>>numeros[i];
        soma += numeros[i];
    }

    std::cout<<std::endl;
    std::cout<<"a soma total seria: "<<soma<<std::endl;
    return 0;
}

*/

/*
3. Encontrar maior
Leia 5 números e encontre o maior deles.


#include<iostream>

int main(){
    int numeros[5];
    int maior = 0;

    std::cout<<"========3. encontrar o maior numero========="<<std::endl<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<"digite o numero: "<<(i+1)<<": ";
        std::cin>>numeros[i];
    }
    maior = numeros[0];
    for(int i = 0; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }

    std::cout<<std::endl;

    std::cout<<"o maior numero foi o "<<maior<<std::endl;

    return 0;
}
*/

/*
4. Encontrar menor
Leia 5 números e encontre o menor deles.


#include<iostream>

int main(){
    int numeros[5];
    int menor = 0;

    std::cout<<"==========4. encontrar o menor numero========="<<std::endl<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<"digite o numero: "<<(i+1)<<": ";
        std::cin>>numeros[i];
    }
    menor = numeros[0];
    for(int i = 0; i < 5; i++){
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    std::cout<<std::endl;

    std::cout<<"o menor numero foi o "<<menor<<std::endl;

    return 0;
}
*/

/*
5. Calcular média
Leia 5 números, calcule a média e exiba.

#include<iostream>

int main(){
    int numeros[5];
    int soma = 0;
    float media;

    for(int i = 0; i < 5; i++){
        std::cout<<"digite um numero: "<<std::endl;
        std::cin>>numeros[i];
        soma = soma + numeros[i];
    }

    media = soma /5.0;

    std::cout<<"a media do valor e: "<<media<<std::endl;

    return 0;
}
*/

/*
6. Contar elementos
Leia um array com 10 números e exiba quantos elementos tem.

#include<iostream>

int main(){

    int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(int i = 0; i < 10; i++){
        std::cout<<numeros[i]<<std::endl;
    }

    return 0;
}
*/

/*
7. Exibir pares
Leia 10 números e exiba apenas os pares.

#include<iostream>

int main(){

    int numeros[10] = {2, 3, 5, 8, 11, 15, 14, 16, 18, 20};

    for(int i = 0; i < 10; i++){
        if(numeros[i] % 2 == 0){
            std::cout<<numeros[i]<<std::endl;
        }
    }

    return 0;
}
*/

/*
8. Exibir ímpares
Leia 10 números e exiba apenas os ímpares.

#include<iostream>

int main(){

    int numeros[10] = {2, 3, 5, 8, 11, 15, 14, 16, 18, 20};

    for(int i = 0; i < 10; i++){
        if(numeros[i] % 2 != 0){
            std::cout<<numeros[i]<<std::endl;
        }
    }

    return 0;
}
*/

/*
9. Inverter array
Leia 5 números e exiba-os em ordem inversa.

#include<iostream>

int main(){

    int numeros[5] = {1, 2, 3, 4, 5};

    for(int i = 4; i >= 0; i--){
        std::cout<<numeros[i]<<std::endl;
    }


    return 0;
}
*/

/*
10. Contar ocorrências
Leia 10 números e conte quantas vezes aparece o número 5.

//PAREI AQUI NO 10!

#include<iostream>

int main(){

    int numeros[10] = {2, 5, 7, 5, 5, 9, 4, 5, 1, 5}

}
*/

/*
11. Buscar elemento
Leia 10 números e procure por um número específico. Se encontrar, exiba a posição.
*/

/*
12. Números acima da média
Leia 8 números, calcule a média e exiba quais estão acima dela.
*/

/*
13. Maior e menor
Leia 10 números e encontre tanto o maior quanto o menor em um mesmo programa.
*/

/*
14. Soma de pares
Leia 10 números e some apenas os números pares.
*/

/*
15. Contar positivos e negativos
Leia 10 números e conte quantos são positivos e quantos são negativos.
*/

#include<iostream>
#include<vector>

int main(){

    std::vector<int>numeros;

    std::cout<<"===== VECTOR (Arraylist em C++) ======"<<std::endl<<std::endl;

    numeros.push_back(10); //empurra o numero para o final;
    numeros.push_back(20); //empurra o numero para o final;
    numeros.push_back(30); //empurra o numero para o final;
    
    std::cout<<"numeros: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }

    return 0;

}