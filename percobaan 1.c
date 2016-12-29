#include<stdio.h>
main()
{
    int i,j,hasil2[2][2];
    int matrixA[2][2];
    int matrixB[2][2];
    int hasil1[2][2];
    printf("Matrix A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("elemen[%d][%d]:",i,j);
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("Matrix B\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
        printf("elemen[%d][%d]:",i,j);
        scanf("%d",&matrixB[i][j]);
        }
    }
printf("Penjumlahan Matrix\n");
//printf("Pengurangan Matrix\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        hasil1[i][j]=matrixA[i][j]+matrixB[i][j];
        //hasil1[i][j]=matrixA[i][j]-matrixB[i][j];
        printf("%d\t",hasil1[i][j]);
    }
    printf("\n");
}
}
