#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strtok_he(char *str1,const char *str2);

int main(void){

	char str1[30]="iameatserlafsd";
	char *del =&str1;
	char str2='e';
	//char *pstr2=&str2;

	while(str1!=NULL){
	
	printf("%s\n",*strtok(del,&str2));
	del = NULL;
	}
	return 0;
}

char *strtok_he(char *str1,const char *str2){

	static char *pnext;
	char *pstr2;

	if(str1!=NULL){
		pnext=str1;
	}
	else
		str1=pnext;

	if(pnext==NULL)
		return NULL;

	while(pnext){
		pstr2=str2;
		while(pstr2){
			if(*pnext==*pstr2)
			{
				pnext=NULL;
				++pnext;
				return str1;
			}
			++pstr2;
		}
		++pnext;
	}

	return str1;
}
