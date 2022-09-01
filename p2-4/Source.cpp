/*Oscar Hoegler, September 1st 2022, Labratory 2.4*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
	double inlength, inwidth;
	cout << "What is your length? "; cin >> inlength;
	cout << "What is your width? "; cin >> inwidth;
	double outarea = inlength * inwidth, outperimiter = (2 * inlength) + (2 * inwidth), outdiagonal = sqrt((inlength * inlength) + (inwidth * inwidth));
	cout << "Area: " << outarea << "\nPerimeter: " << outperimiter << "\nDiagonal: " << outdiagonal;
	return 0;
}