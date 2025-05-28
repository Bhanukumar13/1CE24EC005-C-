#include<iostream> 
using namespace std;
int main(){
    string food="pizza";
    string *food_address =&food;

    cout<<"value of Food"<<food<<endl;
    cout<<"Address of Food:"<<food_address<<endl;

    *food_address="Biriyan";
    cout<<"Value of Food"<<food<<endl;
    cout<<"Address of Food:"<<food_address<<endl;
}