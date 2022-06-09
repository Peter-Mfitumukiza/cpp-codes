#include<iostream>
using namespace std;

int countOccurence(int current_digit, int num){
	int count=0;
	while(num!=0){
		if(num%10 == current_digit){
			count++;
		}
		num=num/10;
	}
	return count;
}
int maxOccurence(int num){
	int digit, max_occurence=0,highly_occuring=-1,num_copy=num;
	while(num!=0){
		digit=num%10;
		if(highly_occuring!=digit){
			int current_occurence=countOccurence(digit,num_copy);
			if(current_occurence>max_occurence){
				max_occurence=current_occurence;
				highly_occuring=digit;
			}
			else if(current_occurence==max_occurence){
				highly_occuring=-1;
			}
		}
		num=num/10;
	}
	return highly_occuring;
}
int main(){
cout<<maxOccurence(23322)<<endl;
}
