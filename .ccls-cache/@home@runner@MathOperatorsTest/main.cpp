#include <iostream>
using namespace std;

int main() {
  cout << "2 + 5 = " << 2 + 5 << endl;
  cout << "2 / 5 = " << 2 / 5 << endl;
  cout << "2 / 5 = " << 2.0 / 5 << endl;
  cout << "10 % 4 = " << 10%4 << endl;
  //this gives you remainder % gives modulous

  cout << "-10 % 4 = " << -10%4 << endl;
  cout << "2.37E-5 * 5.23E-8 = " << 2.37E-5 * 5.23E-8 << endl;

  //Test cases
  cout << "3.5 / 2 + 1 = " << 3.5 / 2 + 1 << endl;
  double a = 3.5;
  int b = 2;
  int c = 1;
  int d;
  double e;
  d = a / b + c;
  e = a / b + c;

  cout << "a / b + c = " << a / b + c << endl;
  cout << "d = " << d << endl;
  cout << "e = " << e << endl;

  cout << " 3/2 + 5.5 = " << 3/2 + 5.5 << endl;
  cout << " 3.0/2.0 + 5.5 = " << 3.0/2.0 + 5.5 << endl;

  //Testing character data types
  char letter1;
  letter1 = 'g';
  cout << "letter1 = " << letter1 << endl;

  // how to input values
  int myInt;
  cout << "Input an integer: ";
  cin >> myInt;
  cout << "You entered " << myInt << endl;

  
  
}