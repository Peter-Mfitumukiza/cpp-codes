#include <iostream>
using namespace std;
void merge(int arr[], int begin, int mid, int end){
	int sizeOfLeftArr = mid-begin+1;
	int sizeOfRightArr = end-mid;
	int leftArr[sizeOfLeftArr];
	int rightArr[sizeOfRightArr];
//	copy into left array
	for(int i=0; i<sizeOfLeftArr; i++){
		leftArr[i] = arr[begin + i];
	}
//	copy into right array
	for(int j=0; j<sizeOfRightArr; j++){
		rightArr[j] = arr[mid + 1 + j];
	}
	int leftIndexCount = 0;
	int rightIndexCount = 0;
	int mergedIndexCount = begin;
//	Merge when both subarr have elements
	while(leftIndexCount < sizeOfLeftArr && rightIndexCount<sizeOfRightArr){
		if(leftArr[leftIndexCount] <= rightArr[rightIndexCount]){
			arr[mergedIndexCount] = leftArr[leftIndexCount];
			leftIndexCount++;
		}else{
			arr[mergedIndexCount] = rightArr[rightIndexCount];
			rightIndexCount++;
		}
		mergedIndexCount++;
	}
	while(leftIndexCount < sizeOfLeftArr){
		arr[mergedIndexCount] = leftArr[leftIndexCount];
		leftIndexCount++;
		mergedIndexCount++;
	}
	
	while(rightIndexCount <sizeOfRightArr){
		arr[mergedIndexCount] = rightArr[rightIndexCount];
		rightIndexCount++;
		mergedIndexCount++;
	}
}

void mergeSort(int arr[], int begin, int end){
	if(begin >= end)
		return;
	int mid = (begin + end)/2;
	mergeSort(arr, begin, mid);
	mergeSort(arr, mid+1, end);
	merge(arr, begin, mid, end);
}

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[5] = { 2, 5, 3, 10, 6 };
	cout<<"Unsorted is: "<<endl;
	print(arr, 5);
	mergeSort(arr, 0,5);
	cout<<"Sorted Array: "<<endl;
	print(arr, 5);
}
