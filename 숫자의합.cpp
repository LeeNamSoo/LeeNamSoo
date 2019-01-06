# include<stdio.h>

int main(void){
	int i,x,y=0;
	char z[100];
	
	scanf("%d",&x);
	scanf("%s", z); 
	
	for(i=0; i<x; i++){
		y+=z[i]-48;
	}
	printf("%d", y);
	return 0;
}
