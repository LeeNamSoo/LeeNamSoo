# include <stdio.h>
# define MAX 1001

int main(void){
	int x;
	float a[MAX],avarage,sum=0,max=0;
	scanf("%d",&x);	
	for(int i=0; i<x; i++){
		scanf("%f",&a[i]);
		max = (max>a[i]?max:a[i]);
	}	
	for(int i=0; i<x; i++){
		sum += a[i]/max*100;
	}
	printf("%f",sum/x);
	return 0;
}
