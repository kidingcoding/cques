#include<stdio.h>
#include<cs50.h>
int main()
{
    

int h;

  do
   {
       printf("Height:");
       h=get_int();
  } while(!((h>=0)&&(h<=23)));
    
    for(int i=1;i<=h;i++)
    {
        for(int j=i;j<h;j++)
        {
            printf(" ");
        }
        for(int k=i+1;k>0;k--)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}