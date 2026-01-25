#include <iostream>
#include <string>

using namespace std;
string HI = "你好";
string say_hi (string);
int main()
{
    string name ="Carter";
    string str = say_hi(name);
    cout << HI << name << endl;
    cout << str << "\n" ;
    return 0;
}
string say_hi(string n)
{
    return n + HI;
}