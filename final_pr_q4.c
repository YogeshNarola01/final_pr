/*
Q.4 WAP to print all odd numbers from a given 1D array using Pointer.
*/
#include<stdio.h>
 main(){
	int i,n;
	int a[n];
	int *p;
	p = &a;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter Element for a[%d] : ",i);
		scanf("%d \n",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d \n",a[i]);
	}
	for(i=0;i<n;i++){
		if(*p[i]%2!=0){
			a[i]=*p[i];
			printf("%d \n",*p[i]);
		}
	}	
}
	


