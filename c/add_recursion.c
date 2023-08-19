#include <stdio.h>
int add(int x,int y)
  {
   int result=0;
   if(x==0)
     return y;
   else
     result = add(y,x-1)+1;
     return result;
   }
int main() {
   int x,y;
   printf("enter the number:");
   scanf("%d",&x);

   printf("enter the number:");
   scanf("%d",&y);

   int sum = add(x,y);

   printf("%d + %d = %d",x,y,sum);
   return 0;
}
