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
    int choice;
    int aUser;
    int bUser;
    int total;

    cout << "Zgjedh opsionin:\n";
    cout << "1. Mbledhje\n";
    cout << "2. Zbritje\n";
    cout << "3. Shumezim\n";
    cout << "4. Pjestim\n";
    cout << "Zgjedhja: ";
    cin >> choice;
    cout << "a: ";
    cin >> aUser;
    cout << "b: ";
    cin >> bUser;

    switch (choice) {
        case 1:
            total = aUser + bUser;
            break;

        case 2:     
            total = aUser - bUser;
            break;

        case 3:     
            total = aUser * bUser;
            break;

        case 4:     
            total = aUser / bUser;
            break;
    }

    cout << "Total: " << total << "\n";

    return 0;
}
