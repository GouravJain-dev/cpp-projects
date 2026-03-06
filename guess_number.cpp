#include <iostream>
using namespace std;

int main()
{

    int num;
    int random_number = 65;
    char user;
    
    cout << "let's play a number guessing game\n";

    while (true)
    {
    cout << "\nGuess the number between 1-100: ";
    cin >> num;
        if (num == random_number)
        {
            cout << "YOU WON , number  is :" << num;
            cout << "\nWant to contiune?(y/n)";
            cin>>user;
            if(user == 'y'){
                continue;
            }
            else{
                break;
            }
        }
        else if (num > random_number)
        {
            cout << "\nTooo high";
        }
        else
        {
            cout << "\nTooo LoW";
        }
    }
}