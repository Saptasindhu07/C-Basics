#include <sstream>
#include <iostream>
#include <string>
#include <cstdio>

int main(){
    int a=0;
    std::string b;
    std::cout<<"Please enter your age: ";
    std::cin>>a;
    if(a>18){
        std::cout<<"Do you have Learner's License?: ";
        std::cin>>b;
        if(b=="Yes" || b=="yes" || b=="YES"){
            std::cout<<"Congrats! You are Eligible for DL"<<std::endl;
        }
        else{
            std::cout<<"Sorry please get a learner license first"<<std::endl;
        }
    }
    else if(a==18){
        std::cout<<"You will need to get a learner license and apply for DL after you turn 18."<<std::endl;
    }
    else{
        std::cout<<"You are a minor and not eligible for a DL now. Please apply after turning 18 years"<<std::endl;
    }
    return 0;
}