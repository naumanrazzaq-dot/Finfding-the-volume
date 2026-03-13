#include <iostream> ;
#include <cmath>

using namespace std;

int main() {
const double PI = 3.14159;
double radius, volume;

cout << "Enter the radius";
cin >> radius;
volume = 4.0 / 3.0 * PI * pow(radius, 3);
cout <<"The radius of the sphere is:" << radius << endl;
cout<<"The volume of the sphere is:" << volume << endl;

return 0;
}
