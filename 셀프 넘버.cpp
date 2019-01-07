# include <stdio.h>

int SelfNumber(int*,int);

int main(void){
	int max=10001, arr[max];
	for(int i=1; i<max; i++){
		arr[i]=i;
	}
	SelfNumber(arr, 1);
	return 0;
}

int SelfNumber(int *arr, int b){
	int i=b+b/10000%10+b/1000%10+b/100%10+b/10%10+b%10;
	if(i<10000)arr[i]=0;
	if(arr[b]!=0&&b<10000){
		printf("%d\n",arr[b]);
		SelfNumber(arr,b+1);
	}
	else if(arr[b]==0&&b<10000) SelfNumber(arr, b+1);
	else if(b<10000) SelfNumber(arr, b+1);
	return 0;
}
