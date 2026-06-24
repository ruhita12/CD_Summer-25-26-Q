#include <iostream>
#include <string>
using namespace std;

//task1
void numericConstant()
{
    string str;
    cout << "Enter input: ";
    cin >> str;
    bool numeric = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= 48 && str[i] <= 57))
        {
            numeric = false;
            break;
        }
    }
    if (numeric)
        cout << "Numeric Constant\n";
    else
        cout << "Not Numeric\n";
}

//task2
void operatorsCheck()
{
    string str;
    cout << "Enter expression: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
            str[i] == '/' || str[i] == '%' || str[i] == '=')
        {
            cout << "Operator: " << str[i] << endl;
        }
    }
}

//task3
void commentCheck()
{
    string str;
    cout << "Enter comment line: ";
    getline(cin >> ws, str);
    if (str.substr(0, 2) == "//")
        cout << "Single Line Comment\n";
    else if (str.substr(0, 2) == "/*" &&
             str.substr(str.length() - 2, 2) == "*/")
        cout << "Multi Line Comment\n";
    else
        cout << "Not a Comment\n";
}

//task4
void identifierCheck()
{
    string str;
    cout << "Enter identifier: ";
    cin >> str;
    bool valid = true;
    if (!((str[0] >= 'A' && str[0] <= 'Z') ||
          (str[0] >= 'a' && str[0] <= 'z') ||
          str[0] == '_'))
    {
        valid = false;
    }
    for (int i = 1; i < str.length(); i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ||
              str[i] == '_'))
        {
            valid = false;
            break;
        }
    }
    if (valid)
        cout << "Valid Identifier\n";
    else
        cout << "Invalid Identifier\n";
}

//task5
void averageArray()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Average = " << (float)sum / n << endl;
}

//task6
void minMaxArray()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mn = arr[0];
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }
    cout << "Minimum = " << mn << endl;
    cout << "Maximum = " << mx << endl;
}

//task7
void fullName()
{
    string firstName, lastName;
    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Last Name: ";
    cin >> lastName;
    string full = firstName + " " + lastName;
    cout << "Full Name = " << full << endl;
}

int main()
{
    numericConstant();
    operatorsCheck();
    commentCheck();
    identifierCheck();
    averageArray();
    minMaxArray();
    fullName();
    return 0;
}
