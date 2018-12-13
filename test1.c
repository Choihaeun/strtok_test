#include <stdio.h>
#include <string.h>

char *strtok_he(char *str1,const char *str2);

int main(void){

	char str1[30]="i am a girl";
	char str2[1];
	scanf("%s",str2);
	char *strp;

	strp=strtok_he(str1,str2);

	while(strp!=NULL){
		strp = strtok_he(NULL,str2);
	}
	
	return 0;
}

char *strtok_he(char *str1,const char *str2){
	
	char *tokset;
	char *strset;
	static char *next;

	/*initialize*/
	if(str1!=NULL){
		tokset=str1;
		strset=str1;
		next=(char*)-1;
	}
	else{
		tokset=next;
		strset=next;
	}

	if(next==NULL){
		return NULL;
	}

	while(1){
		if(*strset==0){
			next=NULL;
			printf("roop1\n");
			break;
		}
		if(*strset==*str2){
			*strset=0;
			next=strset+1;
			printf("roop2\n");
			break;
		}
		strset++;
	}
	return tokset;
}
