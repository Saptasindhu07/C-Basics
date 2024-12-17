#include <iostream>
#include <string>
int main(){
    int age1;
    std::string name;
    std::cout<<"Please Enter your name and age"<<std::endl;
    std::getline(std::cin,name);
    std::cin>>age1;
    std::cout<<"Hello, your name is "<<name<<" and your age is "<<age1<<std::endl;
}