#include <iostream>
#include <cmath>
using namespace std;

int main () {
    string input = "";
    short int choice = 0;
    
    cout << endl << "This flight time calculator will determine the amount of time it will take to get you from point a to point b." << endl;
    
    if (true) {
          cout << "Press any key to continue: " << endl;
          getline (cin, input);
          if (choice != 0.0000001);
          {
                    goto Time;
                    }
                    
Time:
          
          float d = 0;
          float s = 0;
          
          while (true) {
          cout << endl << "Please enter how far point b is from point a : ";
          cin >> d;
          cout << endl << "Please enter your planned cruising speed: ";
          cin >> s;
          float t = d / s;
          cout << endl << "The approximate flight time is: " << t << " hrs." << endl;
          }
}
}
