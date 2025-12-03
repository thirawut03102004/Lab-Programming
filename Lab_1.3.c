#include <stdio.h>

int GetSet(int *num ) {
    printf("Enter member : ");
    scanf("%d",num);
    return *num;
    
    
}
int main(){
    int data, num ,a[10];
    data = GetSet(&num) ;
    
    for (int i = 1; i <= data; i++)
    {
        printf("Enter your data : ",i + 1);
        scanf("%d",&a[i]);
    }

    printf("\n");
    printf("Member : %d\n",data);
    for (int i = 1; i <= data; i++)
    {
        printf("data[%d] : %d\n",i,a[i]);
    }  
    return 0;
}