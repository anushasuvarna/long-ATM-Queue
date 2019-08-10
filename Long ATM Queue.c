#include <stdio.h>

int main()
{
    char str[100],str1[100];
    int j=0,i,k,counta=0,countb=0,countc=0;
    scanf("%s",str);
    scanf("%d",&k);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'&&counta<k)
        {
            str1[j]=str[i];
            j++;
            counta++;
        }
        else if(str[i]=='b'&&countb<k)
        {
            str1[j]=str[i];
            j++;
            countb++;
        }
        else
        {
            if(str[i]=='c'&&countc<k)
            {
                    str1[j]=str[i];
                    j++;
                    countc++;
                
            }
        }
    }
    str1[j]='\0';
    printf("%s",str1);
    
}

