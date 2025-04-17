#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    std::vector<bool> myArray;
    std::vector<int> result;
    int n{};
    std::cout<<"How many inputs do you want in your sieve of eratosthenes?: ";
    std::cin>>n;
    for(int i=1;i<n;i++){
        myArray.push_back(true);
        std::cout<<myArray[i-1]<<"  ";
    }
    std::cout<<""<<std::endl;
    
    for(int i=0;i<(n-1)/2;i++){
        if(myArray[i]==1){
            std::cout<<"Goose"<<std::endl;
            int count=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    myArray[i]=false;
                    count++;
                    break;

                }
            }
            if(count==0){
                for(int k=i;k<myArray.size();k++){
                    if(myArray[k]==1){
                        if(myArray[k]%myArray[i]==0){
                            myArray[k]=false;
                        }
                    }
                }
            }
        }
        else{
            continue;
        }
    }
    int k=-1;
    int count=0;
    for(bool x:myArray){
        k++;
        if(x==1){
            count++;
            result.push_back(k);
        }
    }
    std::cout<<"Total primes= "<<count<<" They are: "<<std::endl;
    for(int a:result){
        std::cout<<a<<"  ";
    }


    return 0;
}