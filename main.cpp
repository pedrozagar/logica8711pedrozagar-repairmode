#include<iostream>
#include<string>

struct Pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){   

    Pessoa p1 = {"pedro", 20, 1.80};
    Pessoa p2 = {"junior", 30, 1.70};
    
    std::cout<<p1.nome<<" tem "<<p1.idade<<" anos "
    <<"e mede "<<p1.altura<<"m"<<std::endl;

    return 0;
}