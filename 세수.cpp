# include<stdio.h>

int main(void){
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d",x>y?(x>z?(y>z?y:z):x):(y>z?(x>z?x:z):y));
	return 0;
}
