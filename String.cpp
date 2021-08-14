#include<stdio.h>
#include<string.h>
int out(char string[]);
int main(){
	char a[50];
	printf("Enter string: ");
	gets(a);

	out(a);

}
int out(char string[]){
	
	int len = strlen(string);

	for(int i=1; i<=len; i++){
		
		int mid = ((len*2)-i);
			for(int k =mid; k!=0; k--){
				printf(" ");
			}
			
			
		for(int j=1; (j<= (i*2-1));j++){
			if(i%2==0){
				strlwr(string);
			}
			else{
				strupr(string);
			}
	
			printf("%c",string[i-1]);
		}
		
		printf("\n");
	}
}
