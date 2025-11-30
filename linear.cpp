#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int sentenceCount(string sentences);
int letterCount(string text, char target);

int main() {

	string input;
	char letterChoice;
	const int size = 26;
	int letters[size] = { 0 };
	int totalLetters = 0;


	cout << "Type an essay paragraph (minimum of 3-5 sentences): " << endl;
	getline(cin, input);

	for (int i = 0; i < input.size(); i++) {
		char currentLetter = tolower(input[i]);
		if (currentLetter >= 'a' && currentLetter <= 'z'){

		letters[currentLetter - 'a']++;
		totalLetters++;
	}
	}
	int result = sentenceCount(input);
	cout << "\nYou have " << result << " sentences typed.\n" << endl;

	cout << "What letter would you like to find a count for? ";
	cin >> letterChoice;
	
	int letterAmount = letterCount(input, letterChoice);
	cout << "Your chosen letter, " << letterChoice << ", appears " << letterAmount << " times." << endl;

	cout << "\nLetter Frequency Data:" << endl;

	cout << "Letter\t Count\t Percentage" << endl;
	cout << "----------------------------" << endl;
	
	cout << fixed << setprecision(2);

	for (int i = 0; i < size; i++) {
		char printLetter = 'a' + i;

		int count = letters[i];

		float percentage = 0.0;
		if (totalLetters > 0)
			percentage = (count / (float)totalLetters) * 100.0;

		cout << printLetter << "\t " << count << "\t" << percentage << "%" << endl;
	} 
	



	return (0);
}

int sentenceCount(string sentences) {
	int count = 0;
	for (int i = 0; i < sentences.size(); i++) {
		if (sentences[i] == '.' || sentences[i] == '!' || sentences[i] == '?') {
			count++;
		}
	
	}
	return count;

}

int letterCount(string text, char target) {
	char lowerCase = tolower(target);
	int count = 0;

	for (int i = 0; i < text.size(); i++) {
		if (tolower(text[i]) == lowerCase) {
			count++;
		}

	}
	return count;



}



