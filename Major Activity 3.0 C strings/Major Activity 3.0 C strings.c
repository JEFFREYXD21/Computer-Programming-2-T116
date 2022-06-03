#include <stdio.h>
#include <string.h>

int main()
{

    char str[100],text[100];
    int i=0,j=0;
    printf("Enter any string: ");
    gets(str);

        while(str[i]!='\0')
                i++;
        while(i>0)
    {

                text[j]=str[--i];
                ++j;

        }
        text[j]='\0';
        printf("String in reverse: \n");

    for(i=0;text[i]!='\0';i++)
    {

       if(text[i+1]==' ' || text[i+1]==NULL)
       {

           for(j=i;j>=0 && text[j]!=' ';j--)
                        printf("%c",text[j]);

                printf(" ");
        }


    }

    return 0;
}