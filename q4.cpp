#include<iostream>
#include<string.h>

using namespace std;
int main()
{
char s[30],t[30];
cin>>s>>t;
cout<<strlen(s)<<endl;
cout<<strrev(s)<<endl;
cout<<strcmp(s,t)<<endl;
cout<<strcat(s,t)<<endl;
cout<<strcpy(s,t);
}
