#include <sstream>
#include <iostream>
#include <string.h>
#include <cstdio>

int main(){
    //Initialising using a single variable

    int sum=0; 
    for(int i{1}; i<100; i++){
        sum+=i;
    }
    std::cout<<"The sum of integers upto 99 is "<<sum<<std::endl;

    // We can also initialise for loop using multiple variables

    for(int i{0},j{10}, k{20}; i<10;i++,j+=10,k-=10){
        std::cout<<"i= "<<i<<"    ";
        std::cout<<"j= "<<j<<"    ";
        std::cout<<"k= "<<k<<"    "<<std::endl;
    }
    while(sum>4900){
        std::cout<<sum<<std::endl;
        sum--;
    }
}