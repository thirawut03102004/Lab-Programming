#include <stdio.h>

int *GetMatrix(int *row, int *col ) {
    int i,j;
    static int value[10 * 10];
    printf("Enter Row : ");
    scanf("%d",row);
    printf("Enter Colum : ");
    scanf("%d",col);
    printf("Enter Value in matrix : \n");
    for (i = 0; i < *row; i++)
    {
        for (j = 0; j < *col; j++)
        {
            printf("value[%d][%d] = ",i,j);
            scanf("%d",&value[i *10 +j]);
        }
    }return value; 
}
int main(){
    int *data, m, n ,i,j;
    data =  GetMatrix(&m, &n) ;
    printf("Matrix (%d x %d) : \n",m,n);
    for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
            printf("%d",data[i * 10 +j]);
        }
        printf("\n");
    }
    return 0;
}