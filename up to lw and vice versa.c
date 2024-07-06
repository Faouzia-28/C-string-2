#include <stdio.h>
int main() {
    char str[50];
    printf("Enter a string:\n");
    gets(str);
    int i;
        for(i=0;str[i]!='\0';i+=1){
            if(str[i]>='A'&&str[i]<='Z')
        		str[i]+=32;
        	else if(str[i]>='a'&&str[i]<='z')
        		str[i]-=32;
            }
        printf("Swapped case string:%s",str);
        return 0;
}
