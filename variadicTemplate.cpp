#include <iostream>
#include <bitset> //for use bitset template
using namespace std;
void print()
{
}

template<typename T, typename... Types>
void print(const T& firstArgs, const Types&... args)
{
    cout <<"len of aegs is "<<sizeof...(args)<<endl;
    cout << firstArgs <<endl;// print first argument
    print(args...);// call print for remaining arguments
}

template<typename T, typename... Types>
void print(const Types&... args)
{
}
int main()
{
    print(7.5, "hello", bitset<16>(377), 42);   
    return 0;
}
