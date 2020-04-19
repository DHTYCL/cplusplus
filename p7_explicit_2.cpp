#include <iostream>
#include <initializer_list>
using namespace std;

class P 
{
    public:
        P(int a, int b)
        {
            cout << "P(int a, int b)" <<endl;
        }

        P(initializer_list<int>input) 
        {
            cout << "initializer_list<int>input" << endl;
        }
        
        explicit P (int a, int b, int c) 
        {
            cout << "int a, int b, int c" << endl;
        }
};

void fp(const P& input) 
{
}

int main()
{
    // ctors
    cout << "ctors" << endl;
    P p1 (77, 5); // P(int a, int b)
    P p2 {77, 5}; // P(initializer_list<int>input) 
    P p3 {77, 5, 42}; // P(initializer_list<int>input) 
    P p4 = {77, 5}; // P(initializer_list<int>input) 
    P p5 = {77, 5, 42}; // P(initializer_list<int>input),如果删了initializer_list的构造函数
                        //，这句就会报错, error: converting to ‘P’ from initializer
                        //list would use explicit constructor ‘P::P(int, int, int)’
    P p6 (77, 5, 42); // explicit P (int a, int b, int c) 
    P p7 {77, 5, 42, 500};// P(initializer_list<int>input) 
    P p8 = {77, 5, 42, 500};// P(initializer_list<int>input) 
    P p9 {10};// P(initializer_list<int>input) 

    // call function
    cout << "call function" << endl;
    fp({47, 11});        // P(initializer_list<int>input)
    fp ({47, 11, 3});    // P(initializer_list<int>input)
    fp(P{47, 11});       // P(initializer_list<int>input)
    fp(P{47, 11, 3});    // P(initializer_list<int>input)

    return 0;
}
