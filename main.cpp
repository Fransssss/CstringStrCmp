// Title:
// Purpose:
// Author:

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
using std::cerr;

int main()
{
    char userInOne[20];
    char userInTwo[20];
    char choice;
    cout << endl << "CString - Comparing Two Strings" << endl;
    cout << "Input the 1st string;";
    cin >> userInOne;
    cout << endl;
    cout << "Input the 2nd string:";
    cin >> userInTwo;
    cout << endl;
    cout << "The two strings are: " << endl;
    cout << "1) " << userInOne << '\n' << "2) " << userInTwo  << endl << endl;
    cout << "Would you like to compare the strings Y/N ? ";
    cin >> choice;
    cout << endl;
    int cerrTrap = 0;

    if(choice == 'Y')                                    // user wants to know if the string are the same
    {
        int isSame = 0;                                  // 0 to indicate the same, less that 0 indicates different
        isSame = strcmp(userInOne,userInTwo);
        if(isSame == 0)
        {
            cout << "[The two strings are the same]" << endl;
        } else
        {
            cout << "[The two strings are different]" << endl;
        }
        cout << endl << "Exit Program";
    } else if (choice == 'N')                              // user does not want to know if the string are the same
    {
        cout << "Exit Program";
    } else                                                 // user inputs random choice by mistake or intentionally
    {
        cerrTrap++;
        if(cerrTrap > 0)                                 // trap the cerr statement to appear first in output/console
        {
            cerr << "[Invalid Input]" << endl;
        }
          cout << "Exit Program" << endl;
    }
  return 0;
}
