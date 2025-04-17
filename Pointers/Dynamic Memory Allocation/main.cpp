#include <sstream>
#include <iostream>
#include <string.h>
#include <cstdio>
#include <vector>

//Allocating Memory Dynamically

int main(){
    int test_a{22};
    int* pointer_test_a{new int};
    *pointer_test_a=test_a;
    std::cout<<"The Heap memory oppupied has value: "<<pointer_test_a<<" : "<<*pointer_test_a<<std::endl;
    
    //Deallocating Memory

    delete pointer_test_a;
    pointer_test_a=nullptr;
    return 0;
}
