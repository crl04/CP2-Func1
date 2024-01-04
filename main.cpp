#include <iostream>

using namespace std;

int Addition();
int Subtraction();
int Multiplication();
int Division(); 

int MainMenu();

int main()
{
    int add1, add2;
    int sub1, sub2;
    int mul1, mul2;
    int div1, div2;

    char answer;

    do {
        
        int choice = MainMenu();

        switch (choice)
        {
            case 1:
               Addition();
				break;
            case 2:
                Subtraction();
                break;

            case 3:
                Multiplication();
                break;

            case 4:
                Division();
                break;
        }

        cout << "\n\nDo you want to continue? (y/n): ";
        cin >> answer;
        system("cls");

    } while (answer == 'y' || answer == 'Y');

    return 0;
}


int Addition()
{
	int add1, add2;
	
	add1 + add2;
	

     cout << add1 << " + " << add2 << " = " << add1 + add2;
              
}

int Subtraction()
{
	int sub1, sub2;
	 cout << "Please input value 1 to subtract: ";
     cin >> sub1;

     cout << "Please input value 2 to subtract: ";
     cin >> sub2;

     cout << sub1 << " - " << sub2 << " = " << sub1 - sub2;
}

int Multiplication()
{
	int mul1, mul2;
	cout << "Please input value 1 to Multiply: ";
    cin >> mul1;

    cout << "Please input value 2 to Multiply: ";
    cin >> mul2;

    cout << mul1 << " x " << mul2 << " = " << mul1 * mul2;
}

int Division()
{
	int div1, div2;
	cout << "Please input value 1 to divide: ";
    cin >> div1;

    cout << "Please input value 2 to divide: ";
    cin >> div2;

	 if (div2 != 0) {
        cout << div1 << " / " << div2 << " = " << div1 / div2 << std::endl;
    }
    else {
        cout << "Cannot divide by zero." << std::endl;
    }
}

int MainMenu()
{
    int choice;

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

    return choice;
}
