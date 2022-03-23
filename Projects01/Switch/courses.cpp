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
using namespace std;

int main() {
  char opsion;


  cout << "Zgjedh opsionin:\n";
  cout << "I - Informatik\n";
  cout << "E - Elektronik\n";
  cout << "A - Arkitekture\n";
  cout << "S - Sociale\n";
  cout << "T - Teknologji\n";
  
  cout << "Zgjedhja: ";
  cin >> opsion;
  opsion = toupper(opsion);

  switch (opsion) {
    case 'I':
      cout << "Mesimi eshte ne klasen IT-Lab";
      break;
    case 'E':
      cout << "Mesimi eshte ne klasen Electro-Lab";
      break;
    case 'A':
      cout << "Mesimi eshte ne sallen e fakultetit";
      break;
    case 'S':
      cout << "Mesimi eshte ne dhomen e mbledhjes";
      break;
    case 'T':
      cout << "Mesimi eshte ne klasen TechnoResearch";
      break;
  }
  
  return 0;
}
