#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("example.txt");
    file<<"Hello,c++ File!";
    file.close();
    cout<<"File written successfully."<<endl;
    return 0;

}
