#include <iostream>
#include <iomanip>

using namespace std;

float Area(const float radius) {
	return 3.14 * radius * radius;
}
float Area(float weight, float height) {
	return weight * height;
}
double Area(double based, double high) {
	return 0.5*(based*high);
}

void DisplayMenu() {
	cout << endl;
	cout << " Program Calculate Area \n";
	cout << "1. Clrcle\n";
	cout << "2. Rectangle\n";
	cout << "3. Triangle\n";
	cout << "4. Exit\n";
	cout << "Enter your choose number: ";
}

int main() {
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin >> Choice;
		switch (Choice) {
			case '1':
				float Radius;
				cout << "\nEnter radius :";
				cin >> Radius;
				cout << "Area of Circle = " << fixed;
				cout << setprecision(2) << Area(Radius);
				break;
			case '2':
				float Length, Width;
				cout << "\nEnter Length and Width :";
				cin >> Length >> Width;
				cout << "Area of Rectangle = " << fixed;
				cout << setprecision(2) << Area(Length, Width);
				break;
			case '3':
				double based, high;
				cout << "\nEnter based and high: ";
				cin >> based >> high;
				cout << "Area of Triangle = " << fixed;
				cout << setprecision(2) << Area(based, high);
				break;
			case '4':
				Flag = false;
				break;
			default:
				cout << "\nYou choose out of range is ";
				cout << "not process.\n";
		}
	} while(Flag);
	cout << "\n . . . Exit Program . . .\n";
	system("pause");
	return 0;
}