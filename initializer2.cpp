#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

void print (initializer_list<int> vals)
{
    for (auto p=vals.begin();p!=vals.end();p++) {
        std::cout << *p << std::endl;
    }
}
int main()
{
    print({12,3,5,7,11,13,17});
    return 0;
}
