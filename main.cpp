#include<iostream>
#include<vector>
 
int main(){
 
    std::vector<int>numeros;
 
    std::cout<<"==== Soma dos numeros de um Vector ===="<<std::endl;
   
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
     
    int soma = 0;
 
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<std::endl;
        soma += numeros[i];
    }
    std::cout<<"A soma dos numeros e: "<<soma<<std::endl;
 
    return 0;
}