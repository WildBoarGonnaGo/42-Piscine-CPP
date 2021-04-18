#include <iostream>

using namespace std;
static int a = 10;
char b = 'm';

int main(void)
{
	char b = 's';

	cout << "Static global variable: " << ::a << endl;
	cout << "local char variable: " << b << endl; 
	cout << "global char variable: " << ::b << endl;
 }