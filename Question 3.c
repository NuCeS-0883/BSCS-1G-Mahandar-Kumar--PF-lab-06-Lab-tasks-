#include<stdio.h>
int main(){
	int n;
	int first, last;
	printf("Enter a number: ");
	scanf("%d", &n);
	last = n%10;
	while(n>10){
		n = n/10;
		first=n;
	}
	printf("The sum of first and last digits is : %d",first+last);
	return 0;
}
