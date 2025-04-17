#include <iostream>
void checkAge(int age){
    if(age>18){
        std::cout<<"Eligible to enter"<<std::endl;
    }
    else{
        std::cout<<"Not eligible to enter"<<std::endl;
    }
}