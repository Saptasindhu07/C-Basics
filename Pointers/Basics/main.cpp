#include <iostream>
#include <iomanip>

int main(){
    //Declaring and Using Pointers

    int *a {};
    int b=50;
    a=&b;
    std::cout<<a<<std::endl;
    std::cout<<*a<<std::endl; //Dereferencing the Pointer

    //Pointers Using Characters

    const char *c{"Hello World!"};
    std::cout<<c<<std::endl;
    std::cout<<*c<<std::endl;

    char d[]{"Fello there!"};
    std::cout<<d[0]<<std::endl;

    //Different types of constant pointers and pointers to constant.
    //const keyword before int* specify that the variable is constant.
    //const keyword after int* specify that the pointer is constant.

    //constant pointers to non-constant and constant values. non constant values cant be modified through a constant pointer
    const int x{40};
    const int* const p_x{&x};

    //non constant pointers. These pointers can be used to point to any other value at any time

    const int t{20};
    const int h{5};
    const int* p_t{&t};
    std::cout<<p_t<<std::endl;
    p_t=&h;
    std::cout<<p_t<<std::endl;

    //array names

    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    int * p_arr=arr; //Will depoint to only the 1st element of the array
    std::cout<<*p_arr<<std::endl;

    //Using array Names to swap 2 arrays.

    int array2[]{1,2,3,4,5,6,7,8,9,10};
    int array3[]{10,20,30,40,50,60,70,80,90,100};
    int sizeArray2=sizeof(array2);
    int sizeArray3=sizeof(array3);
    std::cout<<"The size of 1st array is: "<<sizeArray2<<std::endl;
    std::cout<<"The 1st array is: "<<std::endl;
    for(int i: array2){
        std::cout<<i<<"  ";
    }
    std::cout<<""<<std::endl;
    std::cout<<"The 2nd array is: "<<std::endl;
    for(int i: array3){
        std::cout<<i<<" ";
    }
    std::cout<<""<<std::endl;
    int* p_array2{array2};
    int* p_array3{array3};
    int* temp;
    temp=p_array2;
    p_array2=p_array3;
    p_array3=temp;
    std::cout<<"The swapped 1st array is: "<<std::endl;
    for(int i=0;i<10;i++){
        std::cout<<p_array2[i]<<"  ";
    }
    std::cout<<""<<std::endl;
    std::cout<<"The swapped 2nd array is: "<<std::endl;
    for(int i=0;i<10;i++){
        std::cout<<p_array3[i]<<" ";
    }
    std::cout<<""<<std::endl;

    //EXPLORING BIT OF POINTER ARITHMETIC
    int l=5;
    int* p_l=&l;
    std::cout<<*p_l<<std::endl;
    std::cout<<*(p_l+1)<<std::endl;
}