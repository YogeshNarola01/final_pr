/*
Q.1 WAP to print all odd numbers from a given range using UDF.
*/
#include<stdio.h>
int Odd(int a){
	return a;
}
void main(){
	int n,m;
	printf("Enter Number 1 : ");
	scanf("%d",&n);
	printf("Enter Number 2 : ");	
	scanf("%d",&m);
	while(n<){
		if(n%2!=0){
		printf(" %d ",Odd(n));
		}
	n++;
	}
}
