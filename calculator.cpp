#include <iostream>
using namespace std;

int main()
{

    float num_1, num_2;
    float result;
    char user;
    int oper;
    
    while (true)
    {
        cout << "Enter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;
        cout << "Enter the operation that you want to perform: ";
        cout << "\n1:Sum\n2:Subtraction\n3:Multiplication\n4:Division\n";
        cin >> oper;
        
        if (oper == 1)
        {
            result = num_1 + num_2;
            cout << "Sum of the numbers is : " << result;
        }
        else if (oper == 2)
        {
            result = num_1 - num_2;
            cout << "Subtraction of the numbers is : " << result;
        }
        else if (oper == 3)
        {
            result = num_1 * num_2;
            cout << "Multiplication of the numbers is : " << result;
        }
        else if (oper == 4)
        {
            if (num_2 == 0)
            {
                cout << "Division by zero is not allowed";
            }
            else
            {
                result = num_1 / num_2;
                cout << "Division of the numbers is : " << result;
            }
        }
        else
        {
            cout << "INVALID INPUT";
        }
        cout << "\nDo you want to do more calculation? press(y/n)";
        cin >> user;
        if (user == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}