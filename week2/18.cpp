
#include<iostream>
using namespace std;

void fun(int &a, int b)
{
    a = 999999;
    b = 999999;

    cout<<"The values of a and b inside function are: "<<a<<" "<<b<<endl;
}

int main()
{
    int a,b;
    a = 4;
    b = 6;
    cout<<"The values of a and b before passing into the fun function are: a= "<<a<<" b= "<<b<<endl;

    fun(a,b);
    
    cout<<"The values of a and b after passing into the fun function are: a= "<<a<<" b= "<<b<<endl;
}
