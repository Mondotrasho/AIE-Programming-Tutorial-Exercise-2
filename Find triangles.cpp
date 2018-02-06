#include <iostream>

int main()
{
	int triangleNumber = 6;                           //the triangle we want to find the dots of
	double timeser = triangleNumber * 0.5 + 0.5;      // if 1*1.5=3 for the 2nd triangle it will have 3 dots we need to find a method of finding the 1.5 equivilent for each triangle and it turns out if you times the triangle by .5 and add .5 you get the 1.5 equivilent for a given triangle which you can use to find the dots
	double triangleDots = timeser * triangleNumber;   // the 1.5 equivilent * the triangle you are solving for returns the nubmer of dots

	std::cout << "number of dots in a " << triangleNumber << "is " << triangleDots << std::endl;

	system("pause");

	return 0;
}