#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        int k=atoi(argv[1]);
        if(k>26)
        k=k%26;
        printf("plaintext: ");
       string s=get_string();
     printf("ciphertext: ");
       int l=strlen(s);
     char m[l];  
       for(int i=0;i<l;i++)
       {
           if(isalpha(s[i]))
           {
              
             if(isupper(s[i]))
            { s[i]=s[i]-64;
             m[i]=s[i]+k;
             if(m[i]>26)
              m[i]=(m[i]%26)+64;
              else 
              m[i]=m[i]+64;
       }
               if(islower(s[i]))                    
               {
                   s[i]=s[i]-96;
                   m[i]=s[i]+k;
                   if(m[i]>26)
                   m[i]=(m[i]%26)+96;
                   else 
                   m[i]=m[i]+96;
               }
           }
       else m[i]=s[i];
       printf("%c",m[i]);
       }
       printf("\n");
      return 0;
    }
    else {printf("Usage: ./caesar k");

    return 1;
}}