#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int i,j,la,lb;
	gets(a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	i=0,j=0;
	while((i<la)&&(j<lb)){
		if(a[i]==b[j]){
			i+=1;
			j+=1;
		}
		else{
			i=i-j+1;
			j=0;
		}
	}
	if(j==lb){
		printf("Substring found index:%d",i-j);
}
else{
	printf("Not found ");
}
	return 0;
}
