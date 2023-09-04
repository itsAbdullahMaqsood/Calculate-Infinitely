#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
using namespace std;
int main() {
	int ch = 1;
	float l;
	string c;
	do {
		system("cls");
		if (ch == 1) {
			cout << "Start Calculating.....\n\n";
		}
		else {
			cout << "\tr = restart / e = terminate\n\n\n";
			cout << l;
		}
		getline(cin, c);
		if (c == "r" && ch==2) {
			ch--;
			continue;
		}
		else if (c == "e" && ch == 2) {
			return 0;
		}
		float num[100]{};
		char op[100]{};
		int x = 0, j = 0, k = 0;
		for (int i = 0; i < c.length(); i++) {
			if (ch == 1) {
				if (i % 2 == 0) {

					num[j] = c[i] - '0';
					j++;
				}
				else {

					op[k] = c[i];
					k++;
				}
			}
			else {
				num[0] = l;
				if (i==0) {
					j = 1;
				}
				if (i % 2 != 0) {

					num[j] = c[i] - '0';
					j++;
				}
				else {

					op[k] = c[i];
					k++;
				}
			}
		}
		x = 1;
		l = num[0];
		while (x < j) {
			switch (op[x - 1]) {
			case '+':
				l += num[x];
				break;
			case '-':
				l -= num[x];
				break;
			case '*':
				l *= num[x];
				break;
			case '/':
				l /= num[x];
				break;
			case '^':
				l = pow(l, num[x]);
				break;
			}
			x++;
		}
		if (ch == 1) {
			ch++;
		}
	} while (ch != 3);
	return 0;
}