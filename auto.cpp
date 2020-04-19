#include<iostream>
using namespace std;

int main()
{
    // auto for iterator
    string str="hello world";
    for (auto item:str) {
        cout << item<<endl;
    }

    // auto for lambda
    auto fun = [](int x)->bool {
        if (x>100) {
            return true;
        }
        return false;
    };
    bool result = fun(0);
    cout <<"result=" << result<<endl;
    return 0;
}
