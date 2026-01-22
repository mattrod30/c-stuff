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

int main() {
	Student <double> x;
	string studentName;
	int studentID;
	double examAvg, homeworkAvg, finalExamAvg;
	float examWeight, homeworkWeight, finalExamWeight;

	cout << "Enter the student's name" << endl;
	cin >> studentName;
	x.name = studentName;

	cout << "Enter the student's ID" << endl;
	cin >> studentID;
	x.ID = studentID;

	cout << "Enter the student's test average" << endl;
	cin >> examAvg;
	x.testAvg = examAvg;

	cout << "Enter the student's homework average" << endl;
	cin >> homeworkAvg;
	x.hwAvg = homeworkAvg;

	cout << "Enter the student's final exam average" << endl;
	cin >> finalExamAvg;
	x.finalAvg = finalExamAvg;

	cout << "Enter the student's test weight" << endl;
	cin >> examWeight;
	x.testWeight = examWeight;

	cout << "Enter the student's homework weight" << endl;
	cin >> homeworkWeight;
	x.hwWeight = homeworkWeight;

	cout << "Enter the student's final exam weight" << endl;
	cin >> finalExamWeight;
	x.finalWeight = finalExamWeight;

	return (0);
}

template<class T>
void Student<T>::display(void) {
	cout << "Student name: " << name << endl;
	cout << "Student ID: " << ID << endl;
	cout << "Student test average: " << testAvg << endl;
	cout << "Student homework average: : " << hwAvg << endl;
	cout << "Student final exam average: " << finalExamAvg << endl;
	cout << "Exam weight: " << testWeight << endl;
	cout << "Homework weight : " << hwWeight << endl;
	cout << "Final exam weight: " << finalWeight << endl;



}


template<class T>
double Student<T>::calculateWeightedAverage(void) {
	return 42
}


template<class T>
char Student<T>::getGrade(void) {
	return 42
}
