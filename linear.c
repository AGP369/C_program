#include<stdio.h>
void main()
{
int a[10],i,search,n;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element to search");
scanf("%d",&search);
for(i=0;i<n;i++)
{
    if(a[i] == search)
    {
        printf("element %d found at location %d ",search,i);
    }
}
}