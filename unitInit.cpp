#include <iostream>
#include <set>
#include <vector>
#include <complex>

using namespace std;
struct Rect {
    int a;
    int b;
    int c;
    int d;
    Rect(int a_,int b_,int c_,int d_){
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};
int main()
{
    //before c++ 11
    //braces and assignment operations
    int array[6] = {27,210,12,47,109,83}; 
    //parentheses
    Rect r1(3, 7, 20, 25);
    Rect r2 = {2, 4, 6, 8};
    
    // after c++11
    int value[] {1,2,3};
    vector<int> v {2,3,5,6,11,13,17};
    set<string> cities {"Berlin", "New York", "London"};
    Rect r3  {1, 4, 6, 8};
    complex<double> c{4.0, 3.0};
    return 0;
}
