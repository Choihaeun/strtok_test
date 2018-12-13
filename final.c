#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE=100

int main(void){
	char str1[SIZE]="eakdfjwaeirjakdaf";
	str2 = 'a';

	strtok_he(&str1,&str2);

}

void my_strtok(char *str1,char *str2){
    
	//str1의 값이 NUL이면 그 문자를 반환하도록 한다. 만약 str1의 값이 NUL이 아니면 반복문을 빠져나온다.
	while(1){
		//만약 str1이 NUL이 아니라면 계속
 		if(*str1 != '\0'){
      				if	//str1과 str2가 같다면 문자열이 분리되어야 한다.
					(*str1 == *str2) printf("\n");
      				else	//str1과 str2가 같지 않다면 문자열이 분리될 필요가 없기 때문에 출력한다.
					printf("%c",*str1);
				
      				str1++; //str1의 주소값을 1더해 다음 문자열로 접근한다.
    				}
		else	//str1이 NUL이라면 반복문을 빠져나온다.
			break;
}
