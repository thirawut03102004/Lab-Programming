#include <stdio.h>
char* reverse(char str1[]) {
int word = 0;
static char out[50];
   while(str1[word] != '\0'){
    word++;
   }
   for (int i = 0; i < word; i++ ){
    out[i] = str1[word -1 -i];
   }
   out[word] = '\0';
   return out;
}
int main(){
    char text[50];
    char *out;
    gets(text);
    out = reverse(text);
    printf("%s\n",out);

    return 0;
}