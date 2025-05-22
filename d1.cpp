#include<iostream>
using namespace std;
int add (int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int result=add(10,22);
    cout<<result<<endl;
}