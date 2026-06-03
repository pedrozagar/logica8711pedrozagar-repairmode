#include<iostream>
#include<string>

struct Aluno{
    std::string nome;
    float nota1;
    float nota2;
};

float calcularMedia(Aluno a){
    return (a.nota1 + a.nota2) / 2;
}

int main(){

    std::string nome;
    float nota1;
    float nota2;

    std::cout<<"digite o seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"digite a sua primeira nota: "<<std::endl;
    std::cin>>nota1;    

    std::cout<<"digite a sua segunda nota: "<<std::endl;
    std::cin>>nota2;

    Aluno aluno = {"Pedro", 8.0, 9.5};

    float media = calcularMedia(aluno);

    std::cout<<aluno.nome<<" - media: "<<media<<std::endl;

    return 0;

}