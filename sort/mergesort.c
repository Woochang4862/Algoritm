#include <stdio.h>

int number = 8;
int sorted[8]; // 'sorted array' must be delcared on global

void merge(int a[], int start, int middle, int end){
	int i=start;
	int j=middle + 1;
	int k=start;
	int t;
	
	while(i<=middle && j<=end){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		} else {
			sorted [k] = a[j];
			j++;
		}
		k++;
	}
	
	if(i > middle){
		for(t = j; t<=end;t++){
			sorted[k] = a[t];
			k++;
		}
	} else{
		for(t = i;t<=middle;t++){
			sorted[k] = a[t];
			k++;
		}
	}
	
	for(t=start;t<=end;t++){
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int start, int end){
	if(start<end){
		int middle = (start+end)/2;
		mergeSort(a, start, middle);
		mergeSort(a, middle+1, end);
		merge(a, start, middle, end);
	}
}

int main(){
	int i, arr[8] = {7, 6, 5, 8, 3, 5, 9, 1};
	mergeSort(arr, 0, number - 1);
	for(i=0;i<number;i++){
		printf("%d ", arr[i]);
	}
}
