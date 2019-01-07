# include<stdio.h>
# define MAX 1001

int main(void){
	int testcase,n;
	double avarage, arr[MAX], count=0, sum=0;
	
	scanf("%d",&testcase);
	for(int i=0; i<testcase; i++){
		scanf("%d",&n);
		for(int j=0; j<n; j++){
			scanf("%lf",&arr[j]);
			sum += arr[j];
		}
		avarage=(double)sum/n;
		for(int j=0; j<n; j++){
			if(arr[j]>avarage) count++;
		}
		printf("%.3lf%%\n",(double)count/n*100);
		count=0;
		sum=0;
	}
//	for(int i=0; i<testcase; i++){
//		for(int j=0; j<arr[i][0]; j++){
//			if(arr[i][j+1]>avarage[i]) count++;
//			avarage[i]=count/arr[i][0]*100;
//			printf("%.3f%%",avarage[i]);
//		}
//		count=0;
//	}
	return 0;
}
