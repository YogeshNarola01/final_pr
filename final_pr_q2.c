/*
Q.2 WAP to find a cube of all elements from a given 2D array.
*/

#include<stdio.h>
void main(){
	int n;
	int a[n][n];
	int i,j;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Enter array value : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		printf("Cube Is %d: \n",(a[i][j])*(a[i][j])*(a[i][j]));		
	}
	for(j=0; j<n; j++){
		printf("Cube Is %d: \n",(a[i][j]*a[i][j]*a[i][j]));
	}
}
