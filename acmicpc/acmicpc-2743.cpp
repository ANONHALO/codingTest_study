#include <stdio.h>

int main(void){
	char input[101]={};
	int len=0;
	scanf("%s",input);
	
	while(input[len]!='\0'){
		len++;
	}

	printf("%d",len);

	return 0;
}
	
