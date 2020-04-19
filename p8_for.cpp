#include <iostream>
#include <vector>
using namespace std;

int main()
{
    for (int i : {2, 3, 5, 7, 9, 13, 17, 19}) {
        cout << i << " ";
    }
    cout <<endl;

    vector<int> input {2, 3, 5};
    for (auto elem : input) {
        cout << elem << " ";
    }
    cout <<endl;

    for (auto& elem : input) {
        elem *= 3;
    }
    for (auto elem : input) {
        cout << elem << " ";
    }
    cout <<endl;
    return 0;
}
