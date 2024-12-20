#include <sstream>
#include <iostream>
#include <string.h>
#include <cstdio>
#include <vector>

int main(){
    int input_count;
    int vowel_count=0;
    std::vector<int> message;
    std::cout<<"How many characters do you want to enter?";
    std::cin>>input_count;
    for(int i=0; i<input_count;i++){
        char c;
        std::cout<<"Please enter the character: ";
        std::cin>>c;     
        message.push_back(c);
    }
    char vowelList[]{'A','E','I','O','U','a','e','i','o','u'};
    for(auto i:message){
        for(char x: vowelList){
            if(i==x){
                vowel_count+=1;
                break;
            }
        }
    }
    std::cout<<"The vowel count is: "<<vowel_count<<std::endl;
    return 0;
}