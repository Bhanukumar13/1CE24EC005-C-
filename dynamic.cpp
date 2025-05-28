#include<iostream>
using namespace std;
int main(){
    int *num=new int;
    *num=50;
    cout<<"Allocated value:"<<*num<<endl;
    cout<<"Size of the variable:"<<sizeof(*num)<<"bytes"<<endl;
    delete num;
}