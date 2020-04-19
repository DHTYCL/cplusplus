#include <vector>
using namespace std;
int main()
{

    int i; // i has undefined value
    int j{};// j is initialized by 0
    int* p; // p has undefined value
    int* q{};//q is initialized by nullptr

    
    int x1(5.3);                // OK,but x1 becomes 5
    int x2 =5.3;               // OK,but x1 becomes 5
    int x3{5.0};               // error narrowing
    int x4={5.3};              // error narrowing
    char c1{7};                // OK,even though 7 is an int ,this is not narrowing
    char c2{99999};             //error narrowing
    vector<int> v1 {1,2,3,4,5}; //OK
    vector<int>{1,2,3,4,5.6};   //ERRO narrowing
}
