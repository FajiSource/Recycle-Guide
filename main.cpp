#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>

void clear_screen();
void user()
{

    int age;
    string name, date;

    cout << "==========================================" << endl;
    cout << "\t Please Enter your deatails" << endl;
    cout << "==========================================" << endl;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age ";
    cin >> age;
    cout << "Enter Date: mm/dd/yyyy: ";
    getline(cin, date);

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    clear_screen();
}

void choice () {

int choice;

cout << "1 Plastic" << endl;
cout << "2 Paper" << endl;
cout << "3 Cardboard" << endl;
cout << "4 Textile" << endl;
cout << "Please select the number of your choice: ";
cin >> choice;
cout << "You selected: " << choice << endl;

clear_screen();

cout << "==========================================" << endl;
cout << "\tRecycling Options: " << endl;
cout << "==========================================" << endl;

switch (choice) {
    case 1:
        cout << "Plastic" << endl << endl;
        cout << "Personal Recycling options" << endl;
        cout << "1 Planters for gardens using bottles, containers, or jugs" << endl;
        cout << "2 Organizers " << "-" << " for pens, tools, makeup, cables" << endl;
        cout << "3 Bird feeders or waterers using bottles and caps" << endl;
        cout << "4 Lamps or chandeliers from spoons, cups, or bottles " << endl;
        cout << "5 Toys or crafts using caps, straws, and containers" << endl;
        cout << "6 EcoBricks for building small structures " << endl;
        break;
    case 2:
        cout << "Paper" << endl;
        break;
    case 3:
        cout << "Cardboard" << endl;
        break;
    case 4:
        cout << "Textile" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;

   }

}

int main()
{
    user ();
    choice();
}


void clear_screen()
{
    system("cls");
}