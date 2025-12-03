#include <stdio.h>

int GetSet(int data[] ) {
    int num;
    printf("Enter member : ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("Enter your data : ",i + 1);
        scanf("%d",&data[i]);
    }
    
}
int main(){
    int data[10], num ;
    num = GetSet(data) ;

    printf("\n");
    printf("Member : %d\n",num);
    for (int i = 1; i <= num; i++)
    {
        printf("data[%d] : %d\n",i,data[i]);
    }  
    return 0;
}