#include <iostream>
#include <iomanip>

bool greater(int firstNum, int SecondNum){
    bool result= firstNum>SecondNum;
    return result;
}
bool lesser(int firstNum, int SecondNum){
    bool result= firstNum<SecondNum;
    return result;
}
bool equals(int firstNum, int SecondNum){
    bool result= firstNum==SecondNum;
    return result;
}
bool notequals(int firstNum, int SecondNum){
    bool result= firstNum!=SecondNum;
    return result;
}
int main(){
    int a;
    int b;
    std::cout << "Hello WOrld! Enter the 2 integers:" << std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cout<<std::boolalpha<<"The greater test of "<<a<<" and "<<b<<" is "<<greater(a,b)<<std::endl;
    std::cout<<std::boolalpha<<"The lesser of "<<a<<" and "<<b<<" is "<<lesser(a,b)<<std::endl;
    std::cout<<std::boolalpha<<"The equality of "<<a<<" and "<<b<<" is "<<equals(a,b)<<std::endl;
    std::cout<<std::boolalpha<<"The not-equality of "<<a<<" and "<<b<<" is "<<notequals(a,b)<<std::endl;
    return 0;
}