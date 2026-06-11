#include<iostream>
#include<string>

void torreDeHanoi(int n, std::string origem, std::string destino, std::string...){
    if(n == 1){
        std::cout<<"mover disco "<<origem<<" para "<<destino<<std::endl;
        return;
    }
    torreDeHanoi(n -1, origem, auxiliar, destino;
    std::cout<<"mover disco "<<n<<" de "<<origem<<" para "<<destino<<std::endl;
    torreDeHanoi(n -1, auxiliar, destino, origem);
}
int main(){
    int numDiscos;
    std::cout<<"quantos discos: ";
    std::cin>>numDiscos;

    std::cout<<"\nsequencia de movimentos: "<<std::endl;
    torreDeHanoi(numDiscos, "A", "C", "B");

    std::cout<<"\ntotal de movimento: "<<(1<<numDiscos) - 1<<std::endl;
}

