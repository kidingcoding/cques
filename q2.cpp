#include<iostream>
using namespace std;
int pr(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
        return 1;
    else return 0;
}
int main()
{

    int t;
    cin>>t;
    int j=2;
    for(int i=1;i<=t;)
    {
    if(pr(j))
    {
        i++;
 }   j++;
    }
    cout<<--j<<endl;


}
