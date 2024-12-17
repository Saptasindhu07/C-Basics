#include <iostream>

int addNumbers(int firstNum, int SecondNum){
    int result= firstNum+SecondNum;
    return result;
}
int main(){
    std::cout << "Hello WOrld!" << std::endl;
    int firstNum=3;
    int secondNum=7;
    std::cout<<"The sum of "<<firstNum<<" and "<<secondNum<<" is "<<addNumbers(firstNum,secondNum)<<std::endl;
    return 0;
}