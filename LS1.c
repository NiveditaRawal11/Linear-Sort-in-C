//Dynamic memory allocation code of linear sort

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x,e,f,g,h,y,req,iep,oep;
    //req- requirement, iep- inner loop end point, oep- outer loop endpoint
    printf("Enter your requirement:");
    scanf("%d",&req);
    if(req<=0){
        printf("Invalid requirement !\n");
        return 0;
    }
    x=(int *)malloc(sizeof(int)*req);
    for(y=0;y<req;y++)
    {
        printf("Enter a number:");
        scanf("%d",&x[y]);
    } 
    oep=req-2;
    iep=req-1;
    for(e=0;e<=oep;e++)
    {
      for(f=e+1;f<=iep;f++)
      {
          if(x[f]<x[e])
          {
              g=x[e];
              x[e]=x[f];
              x[f]=g;
          }
      }
    }
    for(y=0;y<req;y++)
    {
        printf("%d\n",x[y]);
    }
    free(x);
 return 0;   
}