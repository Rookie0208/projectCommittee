#include <iostream>

using namespace std;

void paymentDone(){
    do
    {
        char choice3;
        cin >> choice3;
        switch (choice3)
        {
        case 'Y':
            cout << "\n***Payment is Done***\n" << endl;
            break;

        case 'N':
            break;
        
        default:
            cout << "Invalid choice. Please select again.\n";
            break;
        }
    } while (!'N');
    
}

void paymentDetails(){
    do
    {
        char choice2;
        cin >> choice2;
        switch (choice2)
        {
        case 'Y':
            cout << "**PROCEED DETAILS" << endl;
            cout << "Username:\nCard no.:\nCVV:\nAmount:\nEnter to Pay:\nY. Continue\nN. Menu\n";
            cout << "Enter your choice: ";
            paymentDone();
            break;

        case 'N':
            break;
        
        default:
            cout << "Invalid choice. Please select again.\n";
            break;
        }
    } while (!'N');
    
}

void displayProfile() {
    char choice;
    cout << "\nMy Profile:\nTotal Amount: 300.00\nInvested: 100.00\nBorrowed: 0.00\nROI: 150.00" << endl;
    cout << "Status: Not PAID" << endl;
    cout << "You want to pay?\nY. Continue\nN. Menu\n";
    cout << "Enter your choice: ";
    do
    {
        cin >> choice;
        switch (choice)
        {
        case 'Y':
            cout << "\nPAY AMOUNT \nTotal Amount: 300\nAmount to be paid: 100" << endl;
            cout << "Do you want to Pay?\nY. Continue\nN. Menu\n";
            cout << "Enter your choice: ";
            paymentDetails();
            break;

        case 'N':
            break;
        
        default:
            cout << "Invalid choice. Please select again.\n";
            break;
        }
    } while (!'N');
    
}

void menu() {
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Display Profile\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayProfile();
                break;
            case 2:
                cout << "\t\t\tExiting...\n";
                break;
            default:
                cout << "Invalid choice. Please select again.\n";
                break;
        }

    } while (choice != 2);
}

int main() {
    menu();
    return 0;
}
