/*************************************************************************
 *
 * Checkpoint Assignment:  This program is supposed to calculate the
 *                         surface area of a closed cylindar based on
 *                         a user-provided height and radius.  Recall
 *                         that the formula is 2*pi*r*h + 2*pi*r^2
 *
 * File Name: errors.cpp
 * Name:      ?
 * Course:    CPTR 142
 * Date:      @@date@@
 *
 */

#include <cmath>
#include <iostream>


int main() {
cout<<"Enter the cylindar radius: "         ;
int a; std::cin>>a;
     std::cout<<"Enter the cylindar height: "    ;
int b;
cin>>b; double c;
                                 c = 3.14159;
double d = 2*a*b*c+2*pow(2,a);
cout >> "The surface area is: " << d << std::endl return 0; 
}
