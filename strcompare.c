#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[20], t[20];
    int flag = 0;
    printf("Enter String 1: ");
    scanf("%s", s);
    printf("Enter String 2: ");
    scanf("%s", t);

    if (strlen(s) == strlen(t))
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (*(s+i) != *(t+i))
            {
                printf("Strings not equal");
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("Strings are same");
        }
    }
    else
    {
        printf("String not equal");
    }

}