#include<iostream>
#include<string>

struct CampeonatosCopa{
    int ano;
    std::string campeao;
};

int main(){
    CampeonatosCopa copa[6] = {
        {2022, "Argentina"},
        {2018, "França"},
        {2014, "Alemanha"},
        {2010, "Espanha"},
        {2006, "Itália"},
        {2002, "Brasil"}
};

    std::cout<<"========== CAMPEÕES DA COPA =========="<<std::endl;
    std::cout<<std::endl;

    for(int i = 0; i < 6; i++){
        std::cout<<copa[i].ano<<" - Campeão: "<<copa[i].campeao<<std::endl;
    }
    return 0;
}