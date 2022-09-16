#include <iostream>

using namespace std;

//const float pi = 3.14;

//float volume(float r, float h);
int add(int x, int y);

int main()
{
	/*float radius = 5.0;
	float height = 5.0;

	cout << volume(radius, height);*/

	int a = 3;
	int b = 2;

	cout << "a: " << a << endl << "b: " << b << endl;

	cout << "Sum is x: " << add(a, b) << endl;

	cout << "a: " << a << endl << "b: " << b << endl;

	return 0;
}

/*float volume(float r, float h)
{
	return pi * pow(r, 2) * h;
}
*/

int add(int x, int y)
{
	x = x + y;

	return x;
}
