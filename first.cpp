#include<iostream>
using namespace std;
#include<decimal/decimal>
using namespace decimal;

int main() {
    long long a = 123456789012345;
    a=static_cast   <long long>(decimal::decimal64(a));
    decimal::decimal64 d1=a;
    decimal::decimal64 d2=decimal::decimal64(98765.43210);
    decimal::decimal64 d3 = d1 + d2;  
    a=static_cast<long long>(d3);
    std::cout << static_cast<long long>(d3) << "\n";
     
    return 0;
} 