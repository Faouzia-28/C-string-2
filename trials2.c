/*#include<stdio.h>
int main(){
	char a[]="||||||^";
	int i,b;
	for(i=0;a[i]!=0;i+=1);
	b=i;
	for(i=b-1;i>=0;i-=1){
		printf("%c\n",a[i]);
	}
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	int n,i,j;
	for(i=0;a[i]!=0;i+=1);
	n=i;
	i=0;
	j=n-1;
	while(i<j){
		char t;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i+=1;
		j-=1;
	}
	printf("%s",a);
	return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i,la,lb;
    printf("Enter the string 1:");
    gets(a);
    printf("Enter the string 2:");
    gets(b);
    for(i=0;a[i]!='\0';i+=1);
    la=i;
    for(i=0;b[i]!='\0';i+=1);
    lb=i;
    i=0;
if(la==lb){
    while (a[i] != '\0' && b[i] != '\0')
    {
        if(a[i]!=b[i])
        {
            break;
        }
        i++;
    }
    if(i<la){
    	printf("String not equal");
	}
	else{
		printf("String equal");
	}
}
else{
	printf("Len of strings are not equal");
}
    return 0;
}

