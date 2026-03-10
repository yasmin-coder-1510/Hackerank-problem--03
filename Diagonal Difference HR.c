#include<stdio.h>
#include<math.h>
int main()
{
 int n, sum1=0,sum2=0;
 scanf("%d",&n) ;

 int mat[n][n];

  for(int i =0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
      scanf("%d",&mat[i][j]);
     }

  }

  for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
      if(i==j)
      {
        sum1=sum1+mat[i][j];
      }
      if(i+j==n-1)
      {
         sum2=sum2+mat[i][j];
      }
     }

  }

  printf("%d",abs(sum1-sum2));

 return 0;
}

