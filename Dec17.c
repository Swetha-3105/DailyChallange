//pattern print
#include <stdio.h>

int main()
{
   long long int a;
   scanf("%lld",&a);
   int rem,c=0,i=0,arr[50];
   while(a!=0){
       rem=a%10;
       arr[i]=rem;
       i++;
       a/=10;
       c++;
   }
   int x=1;
for(int i=c-1;i>=0;i--){
    int y=1;
    while(y<=x){
        printf("%d",arr[i]);
        y++;
    }
    printf("\n");
    x++;
}
    return 0;
}
