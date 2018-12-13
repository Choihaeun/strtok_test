#include <stdio.h>
#include <string.h>

char *strtok_he(char *str1,const char *str2);

int main(void){

	char str[]='I am a girl';
	char str2[1];
	scanf("%s",str2);
	
	char *strt;
	strt = *strtok_he(str,str2);

	while(strt!=NULL){
		printf("strtok: %s",strt);
		*strtok_he(NULL,str2);
	}


	return 0;
}

char *strtok_he(char *str1,const char *str2){
	char *tmp;
	
	if(str1=NULL)
		return NULL;
	else
		for(int i=0;i<strlen(str1);i++){
			if(str1[i]==str2)
				str1[i]='\0';
		}
	return *str1;
}
	
