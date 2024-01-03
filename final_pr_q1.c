/*
Q.1 WAP to print all odd numbers from a given range using UDF.
*/
#include<stdio.h>

void main(){
int n;
int num=1;

printf("Enter a Number: ");
scanf("%d",&n);

if(n%2==0){
	printf("%d\n",num);
	num++;
}

}

