#include <iostream>
#include <conio.h>

using namespace std;
// int amount = 100;

class Committee {
    private:
    int totalAmount;

    public:
    Committee() {};

    void paymentDone();
    void menu();
};

class Users {
    private:
    int amount = 100;
    string username;
    string cardNo;
    int cvv;

    public:
    Users() {};
    void setDetails(string username, string cardNo, int cvv) {
        this->username = username;
        this->cardNo = cardNo;
        this->cvv = cvv;
    }
    int getAmount() {
        return amount;
    }
    bool validateUser(string, string, int);
    void displayProfile();
    bool checkPayment();
    void paymentDetails();


};

void Committee:: paymentDone()
{
    cout << "\n***Payment is Done***\n"
         << endl;

    // char choice3;
    // int exit = 0;
    // tolower(choice3);
    // while (!exit)
    // {
    //     cin >> choice3;
    //     switch (choice3)
    //     {
    //     case 'y':
    //         cout << "\n***Payment is Done***\n"<< endl;
    //         break;

    //     case 'n':
    //         exit = 1;
    //         break;

    //     default:
    //         cout << "Invalid choice. Please select again.\n";
    //         // break;
    //     }
    //     // fflush(stdin);
    // }
}
bool Users:: validateUser(string username, string cardNo, int cvv)
{
    if (username == "amit" && cardNo == "12345" && cvv == 123)
        return 1;
    return false;
}
bool Users:: checkPayment()
{
    Users user1;
    string username, cardNo;
    int cvv, amt;


    amt = user1.getAmount();
    cout << "\nAmount to be paid\t:\t" << amt;

    cout << "\n**PROCEED DETAILS" << endl;
    cout << "Enter Username \t:\t";
    cin >> username;
    cout << endl;

    cout << "Enter Card no.\t:\t";
    cin >> cardNo;
    cout << endl;

    cout << "Enter CVV\t:\t";
    cin >> cvv;
    cout << endl;

    user1.setDetails(username,cardNo,cvv);
    // cout << "Enter to Pay \t:";
    // getch();
    int isValidate = user1.validateUser(username, cardNo, cvv);
    if (isValidate)
        return 1;
    else
        return 0;
    // cout << "Y. Continue\nN. Menu\n";
    // cout << "Enter your choice: ";
}

void Users:: paymentDetails()
{
    Committee cm;
    char choice2;
    int exit = 0, done = 0;
    while (!exit)
    {
        cout << "\nDo you want to Pay?\nY. Continue\nN. Menu\n";
        cout << "Enter your choice: ";
        cin >> choice2;
        tolower(choice2);
        switch (choice2)
        {
        case 'y':
            // done;
            if (checkPayment())
            {
                cm.paymentDone();
                break;
            }
            else
            {
                cout << "\nIncorrect Details\n";
                // done = checkPayment();
                break;
            }
            break;

        case 'n':
            exit = 1;
            break;

        default:
            cout << "Invalid choice. Please select again.\n";
            // break;
        }
    }
}

void Users:: displayProfile()
{
    char choice;
    int exit = 0;
    while (!exit)
    {
        cout << "\nMy Profile:\nTotal Amount\t: 300.00\nInvested\t: 100.00\nBorrowed\t: 0.00\nROI\t\t: 150.00" << endl;
        cout << "Status\t\t: Not PAID" << endl;
        cout << endl;
        cout << "You want to pay?\nY. Continue\nN. Menu\n";
        cout << "Enter your choice: ";

        cin >> choice;
        tolower(choice);
        switch (choice)
        {
        case 'y':
            cout << "\nPAY AMOUNT \nTotal Amount\t\t: 300\nAmount to be paid\t: 100" << endl;
            paymentDetails();
            break;

        case 'n':
            exit = 1;
            break;

        default:
            cout << "Invalid choice. Please select again.\n";
            break;
        }
    }
}

void Committee:: menu()
{
    Users user;
    char choice;
    int exit = 0;
    while (!exit)
    {
        cout << "Menu:\n";
        cout << "1. Display Profile\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            user.displayProfile();
            break;
        case '2':
            exit = 1;
            cout << "\t\t\tExiting...\n";
            break;
        default:
            cout << "Invalid choice. Please select again.\n";
            // break;
        }
    }
}

int main()
{
    Committee cm;
    cm.menu();
    cout << "Thanks.." << endl;
    return 0;
}
