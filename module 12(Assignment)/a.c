#include<stdio.h>
int main()
{
int loc,first,last,middle, n, a, array[100];
printf("Enter the number of element:\n");
scanf("%d",&n);
printf("Enter %d integers:\n",n);
for(loc=0;loc<n;loc++)
{
 scanf("%d",&array[loc]);
}
printf("Enter the value to find:\n");
scanf("%d",&a);
first=0;
last=n-1;
middle= (first+last)/2;
while(first<=last)
{
    if(array[middle]<a)
    {
        first=middle +1;
    }
    else if(array[middle]==a)
    {
        printf("%d is present at index %d.\n",a,middle+1);
    break;
    }
    else
 {
     last = middle-1;
    }
     middle=(first+last)/2;
   }
    if(first>last)
    {
        printf("Not found! %d is not present in the list.\n",a);
    }
    return 0;
}
