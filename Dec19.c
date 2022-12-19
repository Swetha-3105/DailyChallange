#include <stdio.h>

int main()
{
   int a;
   scanf("%d",&a);
   int res=0;
   for(int i=1;i<=a;i++){
       if(i%2==0){
           res=res-i;
       }
       else{
           res=res+i;
       }
   }
   printf("%d",res);
    return 0;
}
