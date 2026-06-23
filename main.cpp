#include<iostream>

int main(){
    int fila[10];
    int inicio = 0;
    int fim = 0;
    int opcao;

    std::cout<<"============FILA COM MENU============"<<std::endl;
    
    std::cout<<std::endl;

    while(true){
        std::cout<<"1. enfileirar"<<std::endl;
        std::cout<<"2. desenfileirar"<<std::endl;
        std::cout<<"3. exibir fila"<<std::endl;
        std::cout<<"4. sair"<<std::endl;

        std::cout<<std::endl;

        std::cout<<"escolha: ";
        std::cin>>opcao;

        std::cout<<std::endl;

        if(opcao == 1){
            if(fim < 10){
                int valor;
                std::cout<<"digite o valor: ";
                std::cin>>valor;
                fila[fim] = valor;    
                fim++;

                std::cout<<std::endl;

                std::cout<<"enfileirado!"<<std::endl;
                std::cout<<std::endl;
            }else{
                std::cout<<"fila cheia!"<<std::endl;
            }
        }
        else if(opcao == 2){
            if(inicio < fim){
                std::cout<<"removido: "<<fila[inicio]<<std::endl;
                std::cout<<std::endl;
                inicio++;
            }else{
                std::cout<<"fila vazia!"<<std::endl;
            }
        }
        else if(opcao == 3){
            if(inicio < fim){
                std::cout<<"fila: ";
                for(int i = inicio; i < fim; i++){
                    std::cout<<fila[i]<<" ";
                }
                std::cout<<std::endl;
            }else{
                std::cout<<"fila vazia!"<<std::endl;
                std::cout<<std::endl;
            }
        }
        else if(opcao == 4){
            std::cout<<"saindo..."<<std::endl;
            break;
        }
    }
    return 0;
}