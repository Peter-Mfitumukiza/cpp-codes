#include <iostream>
using namespace std;

int minDistance(int num){
	if(num <=0 ){
		cout<<"Invalid number"<<endl;
		return INT_MIN;
	}
	int min_distance = num-1;
	int current_distance = 0;
	for(int i=1; i<=num; i++){
		if(num%i ==0){
			if(current_distance < min_distance && current_distance != 0){
				min_distance = current_distance;
			}
			current_distance = 0;
		}
		current_distance++;
	}
	return min_distance;
}

int main(){
	int min_distance = minDistance(10);
	cout<<min_distance<<endl;
}
