#include <stdio.h>
int main(){
	int A[5]={1,2,3,4,5},i;
	int pivot,tmp;
	pivot=A[0];
	int m=1;
	for (i=1;i<5;i++){
		if(A[i]<=pivot){
			tmp=A[m];
			A[m]=A[i];
			A[i]=tmp;
			m++;
		}
	}

	for(i=0;i<5;i++){
		printf("%d\n",A[i]);
	}

	return 0;
}