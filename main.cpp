#include <iostream>
#include <iomanip>

using namespace std;

// test from vscode

// FUNCTION PROTOTYPE
int selectionOne();
int selectionTwo();
int selectionThree();
int selectionFour();

struct Person
{
    string name;
    int hp;
    int atk;
    int def;
    int gold;
};

int main()
{
    // VARIABLE DECLARATION
    Person user;
    user.hp = 100;
    user.atk = 1;
    user.def = 1;
    user.gold = 0;
    int choice;

    // INTRODUCTION PROMPT
    cout << "Hello, welcome to MMO-Land." << endl;
    cout << "What is your name?";
    getline(cin, user.name);
    cout << "Nice to meet you " << user.name << "." << endl
         << endl;

    // PROMPT TO CONTINUE
    cout << "Press Enter to see your stats.";
    cin.get();

    // SHOW STATS
    cout << "Your stats below:" << endl;
    cout << left << setw(9) << "Name:" << user.name << endl;
    cout << left << setw(9) << "Health:" << user.hp << endl;
    cout << left << setw(9) << "Attack:" << user.atk << endl;
    cout << left << setw(9) << "Defense:" << user.def << endl;
    cout << left << setw(9) << "Gold:" << user.gold << endl
         << endl;

    // PROMPT TO CONTINUE
    cout << "Press Enter to see menu option.";
    cin.get();

    // MENU
    cout << "Select from Menu(1-4):" << endl;
    cout << "1: Explore" << endl;
    cout << "2: Farm Gold" << endl;
    cout << "3: Train" << endl;
    cout << "4: Exit" << endl;
    cout << "What is your selection? ";
    cin >> choice;

    // SWITCH CASE
    switch (choice)
    {
    case 1:
        cout << "You chosen to explore." << endl;
        selectionOne();
        break;
    case 2:
        cout << "You chosen to farm gold." << endl;
        selectionTwo();
        break;
    case 3:
        cout << "You chosen to train." << endl;
        selectionThree();
        break;
    case 4:
        cout << "You chosen to exit." << endl;
        selectionFour();
        break;
    default:
        cout << "Enter 1-4. Try again!" << endl;
        break;
    }

    // END OF PROGRAM
    cout << "End of program." << endl;
    return 0;
}

int selectionOne()
{
    cout << "Function 1" << endl;
    return 0;
}
int selectionTwo()
{
    cout << "Function 2" << endl;
    return 0;
}
int selectionThree()
{
    cout << "Function 3" << endl;
    return 0;
}
int selectionFour()
{
    cout << "Function 4" << endl;
    return 0;
}