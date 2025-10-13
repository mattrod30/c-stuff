#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float calculateBMI(float weight, int height);

int main() {
	float weightNumber;
	int heightFeet, heightInches;

	cout << "Enter your weight (LB): ";
	cin >> weightNumber;

	cout << "Enter your height (ft): ";
	cin >> heightFeet;

	cout << "Enter your height (in): ";
	cin >> heightInches;

	int totalHeight = (heightFeet * 12 + heightInches);
	float bmi = calculateBMI(weightNumber, totalHeight);

	cout << fixed << setprecision(1);
	cout << "Your BMI is: " << bmi << endl;

	if (bmi <= 18.5) {
		cout << "Underweight";
	}else if (bmi > 18.5 && bmi < 25.0) {
		cout << "Healthy";
	}else if (bmi >= 25.0 && bmi < 30.0) {
		cout << "You're overweight";
	}else {
		cout << "Obese";
	}

	return 0;
}

float calculateBMI(float weight, int height) {
	return (weight * 703.0) / pow(height, 2);
}
