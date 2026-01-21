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
	double examAvg,homeworkAvg, finalExamAvg;
	float examWeight, homeworkWeight, finalExamWeight;

	cout << "Enter the student's name";
	cin >> studentName;
	x.name = studentName;


	cout << "Enter the student's ID";
	cin >> studentID;
	x.ID = studentID;

	cout << "Enter the student's test average";
	cin >> examAvg;
	x.testAvg = examAvg;

	cout << "Enter the student's homework average";
	cin >> homeworkAvg;
	x.testAvg = homeworkAvg;

	cout << "Enter the student's final exam average";
	cin >> finalExamAvg;
	x.testAvg = finalExamAvg;

	cout << "Enter the student's test weight";
	cin >> examWeight;
	x.testAvg = examWeight;

	cout << "Enter the student's homework weight";
	cin >> homeworkWeight;
	x.testAvg = homeworkWeight;

	cout << "Enter the student's final exam weight";
	cin >> finalExamWeight;
	x.testAvg = finalExamWeight;

}
template<class T>
void Student<T>::display(void) {
	cout <<
}


template<class T>
double Student<T>::calculateWeightedAverage(void) {
	return 
}


template<class T>
char Student<T>::getGrade(void) {
	return
}
