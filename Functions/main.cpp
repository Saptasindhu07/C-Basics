#include <iostream>
#include <iomanip>
#include "check_age.h"

int main(){
    int age{};
    std::cout<<"Enter your age: ";
    std::cin>>age;
    checkAge(age);
    return 0;
}