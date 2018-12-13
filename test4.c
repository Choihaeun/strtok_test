#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char str1[]="eakdfjwaeirjakdaf";
	str2 = 'a';

	strtok_he(&str1,&str2);

}

void strtok_he(char *str1,const char *str2){
		
	while(*str1!='\0'){
		if(str1[0]!=str2[0]){
				printf("%c",str1[0]);
				str1++;
				}
				else{
				printf("\n");
				str1++;
				}
				}
				}
