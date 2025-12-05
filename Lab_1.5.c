#include <stdio.h>

void GetMatrix(int value[][10],int *row, int *col ) {
    int i ,j;
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
            scanf("%d",&value[i][j]);
        }
    }
}
int main(){
    int data[10][10], m, n ,i,j;
    GetMatrix(data, &m, &n) ;
   printf("Matrix (%d x %d) : \n",m,n);

   for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
            printf("%d",data[i][j]);}}return 0;
}