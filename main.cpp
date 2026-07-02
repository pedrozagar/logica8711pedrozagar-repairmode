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
    std::cout<<std::endl;

    std::cout<<"tamanho: "<<numeros.size()<<std::endl;

    int posicao;
    std::cout<<"digite uma posicao: "<<std::endl;
    std::cin>>posicao;
    numeros.erase(numeros.begin() + posicao);

    //numeros.pop_back();

    std::cout<<"apos remover o ultimo: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }

    return 0;

}