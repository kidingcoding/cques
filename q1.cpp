#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
cout<<setw(5)<<a<<endl<<"+"<<setw(4)<<b<<endl;
cout<<"------"<<endl;
cout<<setw(5)<<a+b<<endl;
cout<<"------"<<endl;
}
