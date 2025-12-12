#include <stdio.h>

void explode(char str[], char splitter, char out[][10], int *count) {
    int i = 0, word = 0, letter = 0;
    *count = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            printf("ERROR\n");
            *count = -1;
            return;
        }
        i++;
    }

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == splitter) {
            out[word][letter] = '\0';
            word++;
            letter = 0;
        } else {
            out[word][letter] = str[i];
            letter++;
        }
        i++;
    }
    out[word][letter] = '\0';
    *count = word + 1;
}

int main() {
    char input[100];
    char out[20][10];
    int num;

    printf("Enter a string use / to splitter : ");
    gets(input); 

    explode(input, '/', out, &num);

    if(num != -1) {
        for(int i = 0; i < num; i++) {
            printf("%s\n", out[i]);
        }
        printf("Count: %d\n", num);
    }

    return 0;
}
