#include <iostream>
#include <iomanip>

int main(){
    int int_data{33};
    double double_data{10.33};

    //Referencing
    int& ref_int_data{int_data};
    double& ref_double_data{double_data};
    std::cout<<"int data "<<int_data<<std::endl;
    std::cout<<"double data "<<double_data<<std::endl;
    std::cout<<"ref int data "<<ref_int_data<<std::endl;
    std::cout<<"ref double data "<<ref_double_data<<std::endl;
    
    //Changing reference will also change original data because technically they point to the same location in memory.

    return 0;
}