#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    char ch1,ch2;
    scanf("%s %c %c",str,&ch1,&ch2);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==ch1){
            str[i]=ch2;
        }
    }
    printf("%s",str);
    return 0;
}
