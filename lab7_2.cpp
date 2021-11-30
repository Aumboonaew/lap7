#include<iostream>

using namespace std;

int main() {
	
	int i = 0, P[5000], k, result;

	cout << "Please input k: ";
	cin >> k;
	if (k > 0){
		int i = 0;
		int result = 0; 
	}else{
		cout << "Invalid input!!!";
	}

	while(i < 5000){
		P[i] = 2*i+1;
		i++;

		if(P[i]%k == 0){
			result = result - P[i];
	    }else{
			result = result + P[i];
		}
		cout << i + 1;
		cin >> i;
		i++;
	}
	cout << "\n";

	cout << "Result = ";

	return 0;
}