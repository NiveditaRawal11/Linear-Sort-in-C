//Static array example

#include<stdio.h>
int main()
{
    int e,f,g,req; //declare and intialize variables
    int x[1000];  //declare an array
    printf("Enter size:");
    scanf("%d",&req);
    printf("Enter elements of the array:\n");
    for(int i=0;i<req;i++)
    {
        scanf("%d",&x[i]);
    } 
e=0;
while(e<=(req-2)){ // req-2 for second last element of array
    f=e+1;
    while(f<=(req-1)) //req-1 for last element of array 
    {
        if(x[f]<x[e])
        {
            g=x[e];
            x[e]=x[f];
            x[f]=g;
        }
        f++;
    }
    e++;
}
printf("Sorted array:\n");
    for(int i=0;i<req;i++){
        printf("%d\n",x[i]);
    }
    return 0;
}