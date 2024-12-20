#include <sstream>
#include <iostream>
#include <string.h>
#include <cstdio>
#include <vector>



int main(){
    int array_[]{1,2,3,4,5,6,7};
    for(auto x : array_){
        std::cout<<x<<" , ";
    }

    //modifying the data
    std::cout<<""<<std::endl;
    array_[1]=1;
    std::cout<<array_[1]<<std::endl;

    //Using vectors to create dynamic array and finding unique values in a given array and checking it's size;

    int input_count;
    std::cout<<"Enter the number of inputs: ";
    std::cin>>input_count;

    std::vector<int> numbers;
    for(int i=0;i<input_count;i++){
        int l;
        std::cout<<"Please enter the number: ";
        std::cin>>l;
        numbers.push_back(l);
    }
    std::vector<int> myArray;
    int count=0;
    for(int x:numbers){
        int match=0;
        for(int z:myArray){
            if(z==x){
                match+=1;
                break;
            }
        }
        if(match==0){
            myArray.push_back(x);
            count+=1;
        }
    }
    std::cout<<"The collection contains "<<count<<" unique numbers, they are : ";
    for(int x=0; x<count;x++){
        std::cout<<myArray[x]<<" ";
    }
    std::cout<<""<<std::endl;
    std::cout<<"The size of the array is "<<std::size(myArray)<<std::endl;

    //Finally lets check if array is sorted or not 

    bool sorted=true;
    for(int i=0;i<std::size(myArray);i++){
        for(int j=i+1;j<std::size(myArray);j++){
            if(myArray[j]<myArray[i]){
                sorted=false;
                break;
            }
        }
        if(sorted==false){
            std::cout<<"Array is not sorted in increasing order."<<std::endl;
            break;
        }
    }
    if(sorted){
        std::cout<<"Array is Sorted in increasing order."<<std::endl;
    }
}