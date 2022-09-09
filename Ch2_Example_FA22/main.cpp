#include <iostream>

using namespace std;

int Add(int a, int b);

int main()
{
	char test = 'A';
	char test2 = '!';

	int num = test + 32;
	unsigned int large = 2147483647 + 1;

	cout << large;

	cout << endl;

	float val = 1;

	float compare = 0;

	compare = 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f;

	cout << val << " is the same as " << compare;

	if (val == compare)
	{
		cout << "\n1 is equal to 1.";
	}
	else
	{
		cout << "\n1 is not equal to 1.";
	}

	return 0;
}

int Add(int a, int b)
{
	return a + b;
}