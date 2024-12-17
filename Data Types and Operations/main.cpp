#include <sstream>
#include <iostream>
#include <string.h>
#include <cstdio>

int main() {
    int a;
    long long b;
    char d;
    double e;
    double f;
    std::cin >> a >> b >> d >> e >> f;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << d << std::endl;
    printf("%.3f\n", e);
    printf("%.9f\n", f);
    return 0;
}