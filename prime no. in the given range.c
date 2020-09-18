#include<stdio.h>
#include<conio.h>
void main()
{
    int l,h,flag,i;
    printf("enter the interval of the numbers\n");
    scanf("%d%d",&l,&h);
    while(l<=h)
    {
        flag=0;
        if(l<=1)
        {
          ++l;
          continue;
        }
       for(i=2;i<=l/2;i++)
       {
           if(l%i==0)
           {
            flag=1;
           break;
           }
       }
       if(flag==0)
        printf("%d\t",l);
      ++l;
    }
}
