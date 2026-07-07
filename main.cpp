#include<iostream>
#include<vector>
 
int main(){
 
    std::vector<int>numeros;
 
    std::cout<<"Buscar elemento:"<<std::endl<<std::endl;
   
    numeros.push_back(100);
    numeros.push_back(200);
    numeros.push_back(300);
    numeros.push_back(400);
     
    std::cout<<"vector: "; 
        for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" "; 
    }

    std::cout<<"\n";

    int buscado = 300;
    int posicao = -1; //aqui é -1 porque se fosse 0 seria o números.push_back(100). o 0 faz parte dos numeros lá em cima. o 100 é 0, o 200 é 1, o 300 é 2 e o 400 é 3.

    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] == buscado){
            posicao = i;
            break;
            }
        }
        if(posicao != -1){
            std::cout<<"\nNumero "<<buscado<<" encontrado na posicao "<<posicao<<std::endl;
        }else{
            std::cout<<"numero nao encontrado"<<std::endl;
        }
 
    return 0;
}