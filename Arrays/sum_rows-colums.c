#include<stdio.h>
void main()
{
  int i,j,a[3][3],sc,sr; // sr = sum of rows && sc = sum of coloums
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    sc=sr=0;    
    for(j=0;j<3;j++)
    {
      printf("%d ",a[i][j]);
      sr=sr+a[i][j];
      sc=sc+a[j][i];
    }
    printf("sc=%d sr=%d",sc,sr);
    printf("\n");
  }  
}