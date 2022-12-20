#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    char temp;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){  
            if(str[i] > str[j]){ 
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;
}
