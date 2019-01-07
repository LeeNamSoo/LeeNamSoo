<<<<<<< HEAD
# include<stdio.h>
# define MAX 10001

int main(void){
	int n,x,a[MAX];
	scanf("%d%d",&n,&x);
	for(int i=0; i<n; i++){
		scanf("%d",a+i); 
	}
	for(int i=0; i<n; i++){
		if(a[i]<x) printf("%d ",a[i]);
	}
	return 0;
}
=======
# include<stdio.h>
# define MAX 10001

int main(void){
	int n,x,a[MAX];
	scanf("%d%d",&n,&x);
	for(int i=0; i<n; i++){
		scanf("%d",a+i); 
	}
	for(int i=0; i<n; i++){
		if(a[i]<x) printf("%d ",a[i]);
	}
	return 0;
}
>>>>>>> 2827125805acc68529692fc3a5ab0b29cc0e5d06
