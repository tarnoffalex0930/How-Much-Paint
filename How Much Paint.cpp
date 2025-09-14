//How Much Paint?
//calculates gallons of paint needed
//Two coats of paint on a fence that is 6 feet high and 100 feet long
//Coverage is 340 square feet per gallon	

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//fence dimensions
	double height = 6.0;
	double length = 100.0;

	//coverage per gallon
	double coverage = 340.0;
	
	//calculate area of fence
	double area = (height * length) * 2;

	//calculate gallons of paint needed
	double gallons = ceil(area / coverage);

	//Display results
	cout << "Gallons of paint needed: " << gallons << endl;
	
	return 0;

}
