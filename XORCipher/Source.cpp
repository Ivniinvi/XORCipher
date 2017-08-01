#include <iostream>
#include <string>
#include <vector>
using namespace std;
string not(string s) {
	bool v = true;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			s[i] = '1';
		}
		else if (s[i] == '1') {
			s[i] = '0';
		}
		else {
			v = false;
		}
	}
	if (v == true) {
		return s;
	}
	else {
		return "Invalid Number";
	}
}
string and (string a, string b) {
	string end;
	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == 1) {
				if (b[i] == 1) {
					end[i] = 1;
				}
				else {
					end[i] = 0;
				}
			}
			else {
				end[i] = 0;
			}
		}
		return end;
	}
	else {
		return "Invalid Input";
	}
}
string or (string c, string d) {
	string endor;
	if (c.size() == d.size()) {
		for (int i = 0; i < c.size; i++) {
			endor[i] = 0;
			if (c[i] == 1) {
				endor[i] = 1;
			}
			if (d[i] == 1) {
				endor[i] = 1;
			}
		}
		return endor;
	}
	else {
		return "Invalid Input";
	}
}
string xor (string e, string f) {
	string endxor;
	if (e.size() == f.size()) {
		for (int i = 0; i < e.size(); i++) {
			endxor[i] = 0;
			if (e[i] == 1) {
				if (e[i] != f[i]) {
					endxor[i] = 1;
				}
			}
			if (f[i] == 1) {
				if (f[i] != e[i]) {
					endxor[i] = 1;
				}
			}
		}
		return endxor;
	}
	else {
		return "Invalid Input";
	}
}
int main(){
	while (true) {
		string in;
		string select;
		cout << "Which Logic Gate Would You Like To Use" << endl;
		cin >> select;
		if (select == "NOT") {
			cout << "Enter Binary Number to Reverse" << endl;
			cin >> in;
			cout << not(in) << endl;
		}
		if (select == "AND") {
			string ina;
			string inb;
			cout << "Enter First Number" << endl;
			cin >> ina;
			cout << "Enter Second Number" << endl;
			cin >> inb;
			cout << and (ina, inb) << endl;
		}
		if (select == "OR") {
			string inc;
			string ind;
			cout << "Enter First Number" << endl;
			cin >> inc;
			cout << "Enter Second Number" << endl;
			cin >> ind;
			cout << or (inc, ind) << endl;
		}
		if (select == "XOR") {
			string ine;
			string inf;
			cout << "Enter First Number" << endl;
			cin >> ine;
			cout << "Enter Second Number" << endl;
			cin >> inf;
			cout << xor (ine, inf) << endl;
		}
	}
}