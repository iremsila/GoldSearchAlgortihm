#include <stdio.h>
#include <math.h>
double areaofTriangle(double x) {
    double areaofTriangle = (2 + x) * sqrt(1 - (pow(x,2)) / 4) * 3; //you gave this formula.
    return areaofTriangle; // I created a method for area. Because I don’t want to write again and again.
}
int main()
{
    double g_Ratio = 0.5 * (sqrt(5) - 1);  //this is formula of golden ratio
    double upperLimit = 2.0; // you gave this value to us
    double lowerLimit = 0.0; // you gave this value to us
    double space = g_Ratio * ( upperLimit - lowerLimit); // distance
    double a1 = upperLimit - space ;
    double a2 = lowerLimit + space;
    double newL = areaofTriangle(a2); // I called mine method and I use in there.
    double newU = areaofTriangle(a1); // I called mine method and I use in there.
    while (newL != newU) // the lloop for areas. When areas are equal to each other loop finish.
    {
        if (newL > newU) // if areas don’t equal and lower is bigger than upper, this condition gave a new valid for upper.
        {
            upperLimit = a2;
        }
        else if (newL < newU) // if areas don’t equal and bigger is lower than upper, this condition gave a new valid for lower.
        {
            lowerLimit = a1;
        }
        a2= lowerLimit+space; //these are for new valid
        a1 = upperLimit-space; //these are for new valid
        space = g_Ratio * ( upperLimit-lowerLimit ); //these are for new valid
        newL = areaofTriangle(a1); //these are for new valid
        newU = areaofTriangle(a2); } //these are for new valid
        printf("%f",newU); // lastly we are writing the answer
        return 0;
    }