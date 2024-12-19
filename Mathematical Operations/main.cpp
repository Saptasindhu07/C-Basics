#include <iostream>
#include <iomanip>

int addNumbers(int firstNum, int SecondNum){
    int result= firstNum+SecondNum;
    return result;
}
int subtractNumber(int firstNum, int SecondNum){
    int result= firstNum-SecondNum;
    return result;
}
int multiplyNumber(int firstNum, int SecondNum){
    int result= firstNum*SecondNum;
    return result;
}
float divideNumber(float firstNum, float SecondNum){
    float result= firstNum/SecondNum;
    return result;
}
int moduloNumber(int firstNum, int SecondNum){
    int result= firstNum%SecondNum;
    return result;
}
int main(){
    int a;
    int b;
    std::cout << "Hello WOrld! Enter the 2 integers:" << std::endl;
    std::cin>>a;
    std::cin>>b;
    float deci=divideNumber(a,b);
    std::cout<<"The sum of "<<a<<" and "<<b<<" is "<<addNumbers(a,b)<<std::endl;
    std::cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<subtractNumber(a,b)<<std::endl;
    std::cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<multiplyNumber(a,b)<<std::endl;
    std::cout<<std::fixed<<std::setprecision(2)<<"The division of "<<a<<" and "<<b<<" is "<<deci<<std::endl;
    std::cout<<"The modulo of "<<a<<" and "<<b<<" is "<<moduloNumber(a,b)<<std::endl;
    return 0;
}