#include <iostream>

using namespace std;

const float pi = 3.14;

float volume(float r, float h);

int main()
{
	float radius = 5.0;
	float height = 5.0;

	cout << volume(radius, height);

	return 0;
}

float volume(float r, float h)
{
	return pi * pow(r, 2) * h;
}
