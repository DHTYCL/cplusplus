#include<iostream>
using namespace std;
void f(int)
{
   cout <<"int function called" << endl; 
}

void f(void*)
{
   cout <<"void* function called" << endl; 
}

int main()
{
    f(0);//call f(int)
    //f(NULL);// call f(int) if NULL is 0,ambiguous otherwise
    f(nullptr); // call f(void*)
    cout << NULL << endl;
    return 0;
}
