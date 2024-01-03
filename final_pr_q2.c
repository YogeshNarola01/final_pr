/*
Q.2 WAP to find a cube of all elements from a given 2D array.
*/

#include<stdio.h>
void main(){
	int y,k;
	int a[y][k];
	int i,j;
	printf("Enter the size of Rows : ");
	scanf("%d",&y);
	printf("Enter the Size of Columns : ");
	scanf("%d",&k);
	
	for(i=0; i<y; i++){
		for(j=0; j<k; j++){
			printf("Enter Element for A[%d][%d] : ",i,j);
			scanf("%d \n",&a[i][j]);
		}
	}
	for(i=0; i<y; i++){
		for(j=0; j<k; j++){
			printf("%d \n",a[i][j]);
		}
	}
	for(i=0; i<y; i++){
		for(j=0; j<k; j++){
			printf("%d \n",a[i][j]*a[i][j]*a[i][j]);
		}
	}
}
