#include<iostream>

int main(){

    int myNumbers[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    //for(int num: myNumbers){
    //      std::cout<<num<<std::endl;
   
    for(int i = 0; i < 9; i++){
        std::cout<<myNumbers[i]<<std::endl;
    }
    

    return 0;
}