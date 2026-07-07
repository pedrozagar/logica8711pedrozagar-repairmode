#include<iostream>
#include<vector>
 
int main(){
 
    std::vector<int>numeros;
    int quantidade;
 
    std::cout<<"adicionar usuario:"<<std::endl<<std::endl;

    std::cout<<"quantos numeros?"<<std::endl;
    std::cin>>quantidade;
   
    for(int i = 0; i < quantidade; i++){
        int numero;
        std::cout<<"digite o numero "<<(i + 1)<<": ";
        std::cin>>numero;
        numeros.push_back(numero); 
    }


    std::cout<<"numeros adicionados: ";
        for(int i = 0; i < numeros.size(); i++){
            std::cout<<numeros[i]<<" ";
        }
 
    return 0;
}