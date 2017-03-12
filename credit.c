#include<stdio.h>
#include<cs50.h>
 int countdigits(long long a);
   int getprefix(long long int num,int k); 
   int validation(long long num);
   int getdigit(int n);
int sumodddigits(long long num);
 int sumevendigits(long long num);
  int  matchprefix(long long num,int d);
int main()
{
    printf("NUMBER:");
    long long num=get_long_long();
if(!(validation(num)))
    printf("INVALID\n");
    return 0;
}
 int countdigits(long long a)
    {
        int c=0;
        while(a)
        {
            c++;
           a=a/10;
        }
    return c;
    }
    int getdigit(int n)
    {
        if(n<=9)
            return n;
        else
        {
            int f,s;
            f=n%10;
            s=n/10;
            return f+s;
                }}
int sumodddigits(long long num)
{
 int result=0;
 while(num>0)
 {
   result+=num%10;
   num=num/100;
 }

    return result;
}
    int sumevendigits(long long num)
    {
        int result=0;
int temp=0;
        while(num)
        {
            temp=num%100;
            result=result+getdigit((temp/10)*2);
            num=num/100;
        }
      
        return result;
    }

    int  matchprefix(long long num,int d)
    {
        if((getprefix(num,d)>=40)&&(getprefix(num,d)<50))
            {printf("VISA\n");
            return 1;}
            else if((getprefix(num,d)>=51)&&(getprefix(num,d)<56))
               {printf("MASTERCARD\n");
return 1;}
            else if((getprefix(num,d)==34)||(getprefix(num,d)==37))
               {printf("AMEX\n");
            return 1;}

            else return 0;
}
int getprefix(long long int num,int k)
{
    if(countdigits(num)<k)
        return num;
    else {
            int size=countdigits(num);
        for(int i=0;i<size-k;i++)
        {
            num=num/10;
        }
    return num;
    }
}
int validation(long long num)
    {
        int tot=sumevendigits(num)+sumodddigits(num);
       
        if((tot%10==0)&&(matchprefix(num,2)==1)&&((countdigits(num)==13)||(countdigits(num)==15)||(countdigits(num)==16)))
            return 1;
        else
            return 0;
    }
