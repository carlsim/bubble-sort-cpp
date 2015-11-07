#include <iostream>
#include <string>

using namespace std;

int main(){
	int number[10];
	int size = 9;
	int input;
	int pause;

	for(int i = 0; i < size; i++ ){
		cout << "Enter values to sort: ";
		cin >> number[i];
	}

	for(int i = 0; i < size-1; i++){
		for(int j = 0; j < size; j++){
			if(number[i] < number[j]){
				int temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}

	cout << "Final sorted output" << endl;
	for(int i = 0; i < size; i++ ){
		cout << number[i] << " ";
	}

	cin >> pause;
	return 0;
}