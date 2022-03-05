#include <stdio.h>
#include <string.h>
#define N 100

void alpha(char str1[N], char str2[N])
{
    int i = -1;
    char er[N], eme[N];

    strcpy(er, str1); // strcpy ==> er <- str1
    strcpy(eme, str2);

    do
    {
        i++;
        if (str1[i] < str2[i])
        {
            break;
        }
        else if ( str1[i] > str2[i] )
        {
            strcpy(er, str2);
            strcpy(eme, str1);
            break;
        }

    } while ( (str1[i] != '\0' && str2[i] != '\0'));

    printf("1- %s", er);
    printf("2- %s", eme);
}


int main()
{   
    char str1[N], str2[N];
    
    printf(" Enter the First string : ");
    fgets(str1, N, stdin);

    printf(" Enter the second string :");
    fgets(str2, N, stdin);

    alpha(str1,str2);

    return 0;
}
