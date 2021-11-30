#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string name[] = {"Luffy","Zoro","Sanji","Nami","Naruto","Sakura","All Might","Saitama","Eren","Mikasa"};
	int id[] = {123,196,225,329,420,451,515,666,690,787};
	double gpa[] = {1.50,2.12,4.00,3.69,2.50,2.76,3.54,2.14,3.50,1.88};

    cout << "Please input GPA: ";
	double user_input;
	cin >> user_input;

	int counter = 0;
	while (counter < 10) {
		if(gpa[counter] >= user_input)
		cout << id[counter] << " " << name[counter] << " " << gpa[counter] << "\n";
		counter++;
	}
		
	return 0;
}