#include <stdio.h>

int quickselect(int B[],int start,int end){
	int m,i,tmp;
	int pivot;

	if(end ==start+1) return B[start];

	pivot=B[start];
	m=start+1;
	for(i=start+1;i<end;i++){
		if(B[i]<=pivot){
			tmp=B[m];
			B[m]=B[i];
			B[i]=tmp;
			m++;
			n+=1;
		}
	}

	if(end==m+k) return pivot;
	else if(end<m+k) return quickselect(B,start+1,m);
	else return quickselect(B,m,end);
}

int main(){
	int i;
	int A[]={6,1,20,3,8,9,2,7,10,6};
	int C[10];

	for(i=0;i<10;i++){
		printf("%d ",C[i]);
	}

	return 0;
}