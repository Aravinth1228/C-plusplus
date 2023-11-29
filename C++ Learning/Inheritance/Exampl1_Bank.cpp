#include <iostream>
using namespace std;

class account
{
protected:
    string acname;
    int acno;
    string actype;

public:
    void GetUserDetail()
    {
        cout << " Enter the Account Name :" ;
        cin >> acname;
        cout << " Enter the Account Number :" ;
        cin >> acno;
        cout << "Enter the Account type :" ;
        cin >> actype;
    }
};

class current_account : public account
{
private:
    float balance;

public:
    void c_display()
    {
        cout << "Balance :" << balance << endl;
    }
    void c_deposit()
    {
        float deposit;
        cout << "Enter the Deposit Number :" << endl;
        cin >> deposit;
        balance = balance + deposit;
    }
    void c_widthrow()
    {
        float widthrow;

        cout << "Enter the Widthrow Amount :" << endl;
        cin >> widthrow;
        if (balance > 1000)
        {
            balance = balance - widthrow;
            cout << "Balance Amount After Widthrow :" << balance << endl;
        }
        else
        {
            cout << " Insufficient Balance ";
        }
    }
};

class saving_account : public account
{
private:
    float s_balance, interest;

public:
    void s_display()
    {
        cout << "Balance :" << s_balance << endl;
    }
    void s_deposit()
    {
        float s_deposit;
        cout << "Enter the Deposit Number :" << endl;
        cin >> s_deposit;
        s_balance = s_balance + s_deposit;
        interest = (s_balance * 2) / 100;
        s_balance = s_balance + interest;
    }
    void s_widthrow()
    {
        float widthrow;

        cout << "Balance :" << s_balance << endl;
        cin >> widthrow;
        if (s_balance > 500)
        {
            s_balance = s_balance - widthrow;
            cout << "Balance Amount After Widthrow :" << s_balance << endl;
        }
        else
        {
            cout << " Insufficient Balance ";
        }
    }
};

int main()
{
    current_account c1;
    saving_account s1;
    char type;
    cout << " Enter the S for saving account & C for current account: " << endl;
    cin >> type;
    int choice;
    if (type == 's' || type == 'S')
    {
        s1.GetUserDetail();
        while (1)
        {
            cout << "choose Your Choice     :" << endl;
            cout << "1. Deposit               : " << endl;
            cout << "2. Withdraw              :" << endl;
            cout << "3. Check the Balance    :" << endl;
            cout << "4. Check the Full Details :" << endl;
            cout << "5. Exit." << endl;
            cout << " Enter Your Choice       :" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                s1.s_deposit();
                break;
            case 2:
                s1.s_widthrow();
                break;
            case 3:
                s1.s_display();
                break;
            case 4:
                s1.GetUserDetail();
                s1.s_display();
                break;
            case 5:
                goto end;
            default:
                cout << " Enter choice is invalid,\"Try Again\"" << endl;
            }
        }
    }
    else if (type == 'c' || type == 'C')
    {
        c1.GetUserDetail();
        while (1)
        {
            cout << "choose Your Choice     :" << endl;
            cout << "1. Deposit               : " << endl;
            cout << "2. Withdraw              :" << endl;
            cout << "3. Check the Balance    :" << endl;
            cout << "4. Check the Full Details :" << endl;
            cout << "5. Exit." << endl;
            cout << " Enter Your Choice       :" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                c1.c_deposit();
                break;
            case 2:
                c1.c_widthrow();
                break;
            case 3:
                c1.c_display();
                break;
            case 4:
                c1.GetUserDetail();
                c1.c_display();
                break;
            case 5:
                goto end;
            default:
                cout << " Enter choice is invalid,\"Try Again\"" << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Invalid Letter";
    }

end:
    cout << " \nThank You for Banking With us..";
    return 0;
}
