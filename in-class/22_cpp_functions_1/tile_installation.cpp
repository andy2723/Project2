/*************************************************************************
 *
 * In-Class Exercise: Tile Installation
 *
 * File Name: tile_installation.cpp
 * Course:    CPTR 142
 */

#include <iostream>
using namespace std;

double totalArea(double length, double width){
    return length * width;
}

double tileCost(){
    // Write code here
}

int main(){
    double length, width, cost;

    cout << "Room length (ft): ";
    cin >> length;
    cout << "Room width (ft): ";
    cin >> width;
    cout << "The cost of tile per square foot is $";
    cin >> cost;
    cout << endl;

    cout << "The total cost to install tile is $" << tileCost();
}


