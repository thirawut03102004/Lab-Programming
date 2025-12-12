#include <stdio.h>
void explode(char str1[], char splitter, char str2[][10], int *count)
{
    int a = 0, b = 0, c = 0;
    *count = 0;
    while (str1[a] != '\0')
    {
        if (str1[a] == splitter)
        {
            str2[b][c] = '\0';
            b++;             
            c = 0;
        }
        else
        {
            str2[b][c] = str1[a];
            c++;
        }
        a++;
    }
    str2[b][c] = '\0';
    *count = b + 1;
}

int main()
{
    char out[20][10];
    int num;
    explode("I/Love/You",'/',out,&num);
    for (int i = 0; i < num; i++) {
        printf("%s\n", out[i]);
    }
     printf("count = %d\n",num);
    return 0;
}