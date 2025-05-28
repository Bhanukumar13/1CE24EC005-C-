#include<iostream>
using namespace std;
class Person
{
public:
    string name= "Default Name";
    int age=0;
    
    Person(string name,int age)
    {
        this->name=name;
        this->age =age;
    }
    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main()
{


    Person P1("harsha",60);
    P1.print();
    cout<<"Size of the variable:"<<sizeof(P1)<<"byte"<<endl;

}