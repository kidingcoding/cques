    #include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(int argv,string argc[])
{
    if(argv==2)
    {int q=0;
        string a=argc[1];
        int l=strlen(a);
        for(int m=0;m<l;m++)
        {
            if(!(isalpha(a[m])))
            q=1;
        }
        if(!q)
        {printf("plaintext: ");
        string b=get_string();
        printf("ciphertext: ");
        int a1[l];
        
        for(int i=0;i<l;i++)
        {
            if(isalpha(a[i]))
            {
                if(isupper(a[i]))
                a1[i]=a[i]-65;
                else
                a1[i]=a[i]-97;
            }
        }
        int l1=strlen(b);
        char b1[l1];
        int i=0,j=0;
            for( j=0,i=0; j<l1;j++)
            {
                
                if(isalpha(b[j]))
                {
                    if(isupper(b[j])){
                    b[j]=b[j]-65;
                    b1[j]=b[j]+
                    a1[(i++)%l];
                    if(b1[j]>26)
                    b1[j]=(b1[j]%26)+65;
                    else
                    b1[j]=b1[j]+65;
                    }
                    else{
                    b[j]=b[j]-97;
                     b1[j]=b[j]+a1[(i++)%l];
                    if(b1[j]>26)
                    b1[j]=(b1[j]%26)+97;
                    else
                    b1[j]=b1[j]+97;
                }}
              else 
                b1[j]=b[j];
                          }
            for(int k=0;k<l1;k++)
            {
                printf("%c",b1[k]);
            }
       printf("\n");
      return 0;
    }
    else 
        printf("Usage: ./vigenere k"); }
        else 
        printf("Usage: ./vigenere k");

    return 1;

}