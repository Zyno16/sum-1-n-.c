#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
float s,i;
   printf("enter a n:number");
   scanf("%d",&n);
   s=0;
    for(i=1;i<=n;i++);
   s=s+1/i;
   printf("%.2f\n",s);
    return 0;
}
