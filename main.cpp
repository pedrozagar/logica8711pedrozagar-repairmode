#include<iostream>

int main(){

    int pilha[10];
    int topo = -1;
    int opcao;

    std::cout<<"=========PILHA COM MENU========="<<std::endl;
    
    while(true){
        std::cout<<std::endl;
        std::cout<<"1. empilhar"<<std::endl;
        std::cout<<"2. desempilhar"<<std::endl;
        std::cout<<"3. exibir pilha"<<std::endl;
        std::cout<<"4. sair"<<std::endl;
        std::cin>>opcao;

        if(opcao == 1){
            if(topo < 9){
                int valor;
                std::cout<<"digite o valor: ";
                std::cin>>valor;
                topo++;
                pilha[topo];
                std::cout<<"empilhado!"<<std::endl;
            }else{
                std::cout<<"pilha cheia!"<<std::endl;
        }
    }
    else if(opcao == 2){
        if(topo >=0){
            std::cout<<"removido: "<<pilha[topo]<<std::endl;
            topo--;
        }else{
            std::cout<<"pilha vazia!"<<std::endl;
        }
    }
    else if(opcao == 3){
        if(topo >= 0){
            std::cout<<"pilha: ";
            for(int i = 0; i <= topo; i++){
                std::cout<<pilha[i]<<" ";
            }
            std::cout<<std::endl;
        }else{
            std::cout<<"pilha vazia!"<<std::endl;
        }
    }
    else if(opcao == 4){
        std::cout<<"saindo..."<<std::endl;
        break;
    }
}
    return 0;
}