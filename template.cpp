#include<iostream>

using namespace std;


template<class T>
struct Student {
	string name;
	int ID;
	T testAvg, hwAvg, finalAvg;
	float testWeight, hwWeight, finalWeight;

	void display(void);
	double calculateWeightedAverage(void);
	char getGrade(void);
};

bool runAgain(void);

int main() {

	Student <double> x;
	string studentName;
	int studentID;
	double examAvg, homeworkAvg, finalExamAvg,
		examWeight, homeworkWeight, finalExamWeight;

	do{
		cout << "Enter the student's name: ";
	cin >> studentName;
	x.name = studentName;

	cout << "Enter the student's ID: ";
	cin >> studentID;
	x.ID = studentID;

	cout << "Enter the student's test average: ";
	cin >> examAvg;
	x.testAvg = examAvg;

	cout << "Enter the student's homework average: ";
	cin >> homeworkAvg;
	x.hwAvg = homeworkAvg;

	cout << "Enter the student's final exam average: ";
	cin >> finalExamAvg;
	x.finalAvg = finalExamAvg;

	cout << "Enter the student's test weight: ";
	cin >> examWeight;
	x.testWeight = examWeight;

	cout << "Enter the student's homework weight: ";
	cin >> homeworkWeight;
	x.hwWeight = homeworkWeight;

	cout << "Enter the student's final exam weight: ";
	cin >> finalExamWeight;
	x.finalWeight = finalExamWeight;

	x.display();
	x.calculateWeightedAverage();

	} while(runAgain());

	return (0);
}

template<class T>
void Student<T>::display(void) {
	cout << "\nStudent name: " << name << endl;
	cout << "Student ID: " << ID << endl;
	cout << "Student test average: " << testAvg << endl;
	cout << "Student homework average: " << hwAvg << endl;
	cout << "Student final exam average: " << finalAvg << endl;
	cout << "Exam weight: " << testWeight << endl;
	cout << "Homework weight : " << hwWeight << endl;
	cout << "Final exam weight: " << finalWeight << endl;
	cout << "Final grade: " << hwWeight << "(" <<<< hwAvg << ")" + testWeight * testAvg + finalWeight * finalAvg;
}


template<class T>
double Student<T>::calculateWeightedAverage(void) {
	return hwWeight * hwAvg + testWeight * testAvg + finalWeight * finalAvg;
}


template<class T>
char Student<T>::getGrade(void) {
	return 42;
}

bool runAgain(void) {
	string userResponse;

	cout << "Would you like to run this program again? (yes or no)";
	cin >> userResponse;
	cin.ignore();

	if (userResponse == "yes" || "Yes") {
		return true;
		}
	return false;
}
