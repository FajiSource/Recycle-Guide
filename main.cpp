#include <iostream>
using namespace std;
#include <string>

void clear_screen();
void user()
{
    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age ";
    cin >> age;
    clear_screen();

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{

    cout << "==========================================" << endl
         << endl;
    cout << "\t Please Enter your deatails" << endl
         << endl;
    user();
    cout << endl;
    cout << "==========================================" << endl
         << endl;
}


void clear_screen()
{
    system("cls");
}