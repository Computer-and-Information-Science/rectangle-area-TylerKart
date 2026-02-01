#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  double Area;
  int Perimeter;


    Area = length * width;
    Perimeter = 2 * (length + width);

  cout<< "Rectangle Properties:"<< endl;
  cout<< "Length = "<< length << endl;
  cout<< "Width = "<< width << endl;
  cout<< "Area = "<< Area << endl;
  cout<< "Perimeter = "<< Perimeter << endl; 

}