#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char str1[]="abcdcbcabcd";
	char str2 = "b";
	char *tok=strtok_h(str1,"b");
	//test strtok
	/*char *tok=strtok(str1,"b");
	while(str2!=NULL){
	printf("%s\n",tok);

	tok=strtok(NULL,"b");
	}*/

	//test strtok_h
	while(str2!=NULL){
		printf("%s\n",tok);

	tok=strtok_h(NULL,"b");
	}


	return 0;
	}

void *strtok_h(char *str1,const char *str2){
	static char *nexttok;

	while(*str1!=*str2){
		printf("%s",str1);
		++str1;
	}
	
	str1='\0';

}


	
