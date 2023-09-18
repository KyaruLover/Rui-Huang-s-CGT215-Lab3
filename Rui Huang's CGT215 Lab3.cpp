#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
	// The rest of this function is an exercise to the reader
}
void firstChoice(float A, float B) {
	
}
void secondChoice(float A, float B) {
	
}
void thirdChoice(float A, float B) {

}
void fourthChoice(float A, float B) {

}
int main() {
	int choice;
	float A;
	float B;
	float X;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);

		X = A + B;
		cout <<"\n" << A << " + " <<  B << " = " << X << endl;
	}
	if (choice == 2) {
		secondChoice(A, B);

		X = A - B;
		cout << "\n" << A << " - " << B << " = " << X << endl;

	}
	if (choice == 3) {
		thirdChoice(A, B);

		X = A * B;
		cout << "\n" << A << " * " << B << " = " << X << endl;
	}
	if (choice == 4) {
		fourthChoice(A, B);

		X = A / B;
		cout << "\n" << A << " / " << B << " = " << X << endl;
	}
	return 0;
}

