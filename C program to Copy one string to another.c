#include<stdio.h>
#include<string.h>
int main(){
	int l,i;
	char a[20],b[20];
	printf("Enter the string:");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++){
		b[i]=a[i];
	}
	printf("The copied string is:%s",b);
}
