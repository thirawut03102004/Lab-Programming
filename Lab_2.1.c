#include <stdio.h>
void reverse(char str1[], char str2[] ) {
   int word = 0;
   while(str1[word] != '\0'){
    word++;
   }
   for (int i = 0; i < word; i++ ){
    str2[i] = str1[word -1 -i];
   }
   str2[word] = '\0';
}
int main(){
    char text[50];
    char out[50];
    gets(text); 
    reverse(text, out);
    printf("%s\n",out);
    return 0;
}