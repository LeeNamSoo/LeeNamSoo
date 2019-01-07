# include <stdio.h>

int main(void){
	int num,arr[2],temp=0,count=0,nextnum;
	scanf("%d", &num);
	arr[0]=num/10;//십의 자리 
	arr[1]=num%10; //일의 자리 
	while(1){	
		temp=arr[1];
		arr[1]=(arr[0]+arr[1])%10;
		arr[0]=temp;
		count++;
		nextnum=arr[0]*10+arr[1];
		if(num==nextnum) break;
	}
	printf("%d",count);
	return 0;
}

//k=(k%10+k/10)%10+(k%10)*10; 다음수 구하기... 
