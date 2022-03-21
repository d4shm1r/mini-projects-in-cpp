// Program made by:
/*
 /$$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$ /$$      /$$   /$$   /$$$$$$$ 
| $$__  $$| $$  | $$ /$$__  $$| $$  | $$| $$$    /$$$ /$$$$  | $$__  $$
| $$  \ $$| $$  | $$| $$  \__/| $$  | $$| $$$$  /$$$$|_  $$  | $$  \ $$
| $$  | $$| $$$$$$$$|  $$$$$$ | $$$$$$$$| $$ $$/$$ $$  | $$  | $$$$$$$/
| $$  | $$|_____  $$ \____  $$| $$__  $$| $$  $$$| $$  | $$  | $$__  $$
| $$  | $$      | $$ /$$  \ $$| $$  | $$| $$\  $ | $$  | $$  | $$  \ $$
| $$$$$$$/      | $$|  $$$$$$/| $$  | $$| $$ \/  | $$ /$$$$$$| $$  | $$
|_______/       |__/ \______/ |__/  |__/|__/     |__/|______/|__/  |__/
*/




#include <iostream>
#include <cmath>
using namespace std;

void f(int a, int b) {
  int area = 0;
  int perimeter = 0;
  double diagonal = 0;
  
  diagonal = sqrt(a*a + b*b);
  area = a * b;
  perimeter = 2 * (a + b);
  
  cout << "Diagonal: " << diagonal << "\n";
  cout << "Area: " << area << "\n";
  cout << "Perimeter: " << perimeter << "\n";
}

int main() {
  int aUser;
  int bUser;
  
  cout << "a: ";
  cin >> aUser;
  cout << "b: ";
  cin >> bUser;
  f(aUser, bUser);
  
  return 0;
}
