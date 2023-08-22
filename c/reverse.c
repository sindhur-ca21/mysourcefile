#include <stdio.h>
int main() {
   int n,reve=0,r;
   printf("enter the number:");
   scanf("%d",&n);
     while(n!=0){
       r=n%10;
       reve=reve*10+r;
       n/=10;
       }
   printf("To find the revese number is %d:\n",reve);
   return 0;
}
