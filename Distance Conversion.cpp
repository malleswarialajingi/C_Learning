#include<stdio.h>
#include<math.h>
int main ()
{
	int kilometer = 10;
	double meter = 0.001*kilometer;
	double centimeter = 0.00001*kilometer;
	double feet = kilometer/3280.83;
	double inch = kilometer/39370;
	printf("%lf %lf %lf %lf" , meter , centimeter, feet, inch);
}
