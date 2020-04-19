#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

int main()
{
    vector<int> v1 {2, 5,7,13,69,83,50};
    vector<int> v2 ({2, 5,7,13,69,83,50});
    vector<int> v3;
    v3 = {2, 5,7,13,69,83,50};
    v3.insert(v3.begin()+2, {0,1,2,3});
    for (auto i:v3) {
        cout <<i <<" "<<endl; 
    } 
    cout <<max<string>({string("Abc"),string("abc"), string("abcd")});
    cout <<min<int>({1,2,34,89});
    return 0;
}
