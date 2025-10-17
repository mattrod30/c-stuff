#include <iostream>
using namespace std;
int x(int a, int b);

int main() {
    int a;
    int b;
    cout << "Enter a a value: ";
    cin >> a;
    cout << "Enter a b value: ";
    cin >> b;
int valueX = x(a,b);
cout << valueX << endl;
    return 0;
}
int x(int a, int b){
    return a*b;
}
