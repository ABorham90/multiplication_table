#include <iostream>
#include <string>
using namespace std;
void header() {
	cout << "\t\t\tMultiplication table from 1 to 10 " << endl << endl;;
	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << "\n_____________________________________________________________________________________\n";
}
string separator(int i) {
	if (i < 10)
		return "     |";
	else
		return "    |";


}
void printmultiplicationtable() {
	header();
	for (int h = 1; h <= 10; h++) {
		cout << " " << h << separator(h);
		for (int l = 1; l <= 10; l++) {
			cout << h * l << "\t |";
		}
		cout << endl;
	}
}
int main() {
	printmultiplicationtable();
}
