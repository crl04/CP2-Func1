#include <iostream>

using namespace std;

int main()
{
    int add1, add2;
    int sub1, sub2;
    int mul1, mul2;
    int div1, div2;

    int choice;
    char answer;

    do {
    	
    	system("cls");
        cout << "Choose among MDAS\n"
            << "1 ---Addition---\n"
            << "2 ---Subtraction---\n"
            << "3 ---Multiplication---\n"
            << "4 ---Division---\n"
            << "\n"
            << "Enter Choice: ";
        cin >> choice;

        if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
            cout << "Invalid input. Please choose a valid option (1, 2, 3, 4)." << endl;
            
        }

        switch (choice)
        {
            case 1:
                cout << "Enter value of 1: ";
                cin >> add1;

                cout << "Enter another value: ";
                cin >> add2;

                cout << add1 << " + " << add2 << " = " << add1 + add2;
                break;

            case 2:
                cout << "Enter value of 1: ";
                cin >> sub1;

                cout << "Enter another value: ";
                cin >> sub2;

                cout << sub1 << " - " << sub2 << " = " << sub1 - sub2;
                break;

            case 3:
                cout << "Enter value of 1: ";
                cin >> mul1;

                cout << "Enter another value: ";
                cin >> mul2;

                cout << mul1 << " x " << mul2 << " = " << mul1 * mul2;
                break;

            case 4:
                cout << "Enter value of 1: ";
                cin >> div1;

                cout << "Enter another value: ";
                cin >> div2;

                cout << div1 << " / " << div2 << " = " << div1 / div2;
                break;
        }

        cout << "\n\nDo you want to continue? (y/n): ";
        cin >> answer;
        system("cls");

    } while (true);

    return 0;
}
