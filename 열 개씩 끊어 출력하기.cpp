# include <stdio.h>

int main(void){
	
	char str[100]={NULL};
	scanf("%s", str);

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(str[j+i*10]==NULL) break;
			printf("%c",str[j+i*10]);
		}
		if(str[i*10]==NULL) break;
		printf("\n");
	}
	return 0;
}
