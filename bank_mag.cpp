#include <iostream>
using namespace std;

class bank {
public:
    char name[100], address[100], y;
    int balance;

    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account() {
    cout << "Enter your name: ";
    cin.ignore();
    cin.getline(name, 100);

    cout << "Enter your address: ";
    cin.getline(address, 100);

    cout << "Type of account you want to open saving (s) or current (c): ";
    cin >> y;

    cout << "Enter amount for deposit: ";
    cin >> balance;

    cout << "Your account is created\n";
}

void bank::deposit_money() {
    int a;
    cout << "Enter how much you want to deposit: ";
    cin >> a;
    balance += a;
    cout << "Total amount after deposit: " << balance << endl;
}

void bank::withdraw_money() {
    int a;
    cout << "Enter how much you want to withdraw: ";
    cin >> a;
    if (a > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        balance -= a;
        cout << "Total amount after withdrawal: " << balance << endl;
    }
}

void bank::display_account() {
    cout << "Your full name: " << name << endl;
    cout << "Your address: " << address << endl;
    cout << "Type of account: " << y << endl;
    cout << "Amount in account: " << balance << endl;
}

int main() {
    int ch;
    char x;
    bank obj;

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1) Open Account\n";
        cout << "2) Deposit Money\n";
        cout << "3) Withdraw Money\n";
        cout << "4) Display Account\n";
        cout << "5) Exit\n";
        cout << "Select the option: ";
        cin >> ch;

        switch (ch) {
            case 1:
                obj.open_account();
                break;
            case 2:
                obj.deposit_money();
                break;
            case 3:
                obj.withdraw_money();
                break;
            case 4:
                obj.display_account();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid option, try again.\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> x;

    } while (x == 'y' || x == 'Y');

    return 0;
}
