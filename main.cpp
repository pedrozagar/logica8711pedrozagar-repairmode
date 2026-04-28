#include<iostream>

void verificarAprovacao(float nota){
    if(nota <= 5){
        std::cout<<"Status: Reprovado!"<<std::endl;
    }else{
        std::cout<<"Status: Aprovado!"<<std::endl;
    }
}

int main(){

    float minhaNota = 4.8;

    verificarAprovacao(minhaNota);

    return 0;

}