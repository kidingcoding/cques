#include<stdio.h>
#include<cs50.h>
int fun(char a);
#include<string.h>
int main()
{
    string a=get_string();
    int l=strlen(a);
    if(a[0]!=' '){
    if((a[0]>96)&&(a[0]<123))
    a[0]=fun(a[0]);
    printf("%c",(a[0]));}
    for(int i=0;i<l-1;i++)
    {
        if((a[i]==' ')&&(a[i+1]!=' '))
        {
           
            if((a[i+1]>96)&&(a[i+1]<123)){
             a[i+1]=fun(a[i+1]);
               
            }
         printf("%c",a[i+1]);
        }
    }
    printf("\n");
}
int fun(char a)
{
    return (a-32);

}