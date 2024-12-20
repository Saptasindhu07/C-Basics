#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include<string>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int q;
    std::cin>>n>>q;
    std::cout<<"n is "<<n<<" and q is "<<q<<std::endl;
    std::vector<std::vector<int>> myArray;
    std::vector<std::vector<int>> Queries;
    for(int i=0; i< n;i++){
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        std::vector<int> numbers;
        int num;

        while (iss >> num) { // Extract integers from the string stream
            numbers.push_back(num);
        }
        myArray.push_back(numbers);
    }
    for(int i=0;i<q;i++){
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        std::vector<int> query;
        int num;
        while(iss>> num){
            query.push_back(num);
        }
        Queries.push_back(query);
    }
    for(int i=0;i<q;i++){
        int first_index=Queries[i][0];
        int second_index=Queries[i][1];
        std::cout<<myArray[first_index][second_index]<<std::endl;
    }
}