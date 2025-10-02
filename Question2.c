#include<stdio.h>
int main(){
	int a,b;
	int product=0;
	int div=0;
	printf("Enter First number: ");
	scanf("%d", &a);
	printf("Enter Second number: ");
	scanf("%d", &b);
	for(int i=1; i<=b; i++){
		product+=a;
	}
	printf("Product is %d\n", product);
	if(b==0){
		printf("Not Possible.\n");
	}
	else{
		while(a>=b){
			a -=b;
			div++;
		}
		printf("Division is: %d", div);
	}
	
	return 0;
}