#include<iostream>
using namespace std;

class Person
{
public:
    void hi();
    void hello();   
};

void Person::hi()
{
    cout<<"Hi there"<<endl;
}
 void Person::hello()
{
    cout<<"Hello there"<<endl;
}

int main()
{
    Person P1;
    P1.hi();
    P1.hello();
}