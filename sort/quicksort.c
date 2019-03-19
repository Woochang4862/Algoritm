#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
	if(start >= end){ //the number of elements is 1 
		return;
	}
	
	int key=start; // key is first element
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j){ // until i,j are crossed
		while(data[i] <= data[key]){ // until data[i] meets a value higher than data[key]
			i++;
		}
		while(data[j] >= data[key] && j > start){ // until data [j] meets a value higher than data[key]
			j--;
		}
		if(i > j){ // when i,j are crossed, swap data[j], data[key]
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else { // swap data[i], data[j]
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;	
		}
	}
	
	quickSort(data, start, j - 1); // sorting key's left
	quickSort(data, j + 1, end); // sorting key's right
}

int main(){
	int i;
	quickSort(data, 0, number - 1);
	for(i=0;i<number;i++){
		printf("%d ", data[i]);
	}
}
