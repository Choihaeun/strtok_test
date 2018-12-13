#include <stdio.h>
#include <string.h>

char *strtok_he(char *str1,const char *str2);

int main(void){

	char str1[30]="i am a girl";
	char str2[1];
	scanf("%s",str2);
	char *strp;

	strp = strtok_he(str1,str2);

	while(strp!=NULL){
		strp=strtok_he(NULL,str2);
	}

	return 0;
}

char *strtok_he(char *str1,const char *str2){
	
	static char *next_tok;
	char *str1p;



}

