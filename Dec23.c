#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int oc=0,zc=0;
     for(int i=0;i<a;i++){
         if(arr[i]==0){
             zc++;
         }
         else{
             oc++;
         }
     }
      for(int i=0;i<zc;i++){
       printf("0 ");   
      }
       for(int i=0;i<oc;i++){
        printf("1 ");   
       }

    return 0;
}
