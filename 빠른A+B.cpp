# include<stdio.h>
# define MAX 1000001

int main(void){	
	int a, b, c, x[MAX];
	scanf("%d", &a);
	for(int i=0; i<a; i++){
		scanf("%d %d", &b,&c);
		x[i] = b+c;
	}
	for(int i=0; i<a; i++){
		printf("%d\n", x[i]);
	}
	return 0;
}
