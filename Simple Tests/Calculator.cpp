#include <cstdlib>
#include <iostream>

using namespace std;
void Start ();
void GetResults ();

char c;
int main()
{  
    
    char y = 'y';
    int num1;
    char op;
    int num2;
    while (y == 'y')
    {
    
    cout << "******Calculator******\n";
    cout << "Enter the task you want to run with operator\n";
    
    cin >> num1;
    cin >> op;
    cin >> num2;
    cout << " = ";
    
    if (op == '+')
        cout << num1 + num2;
    else if (op == '-')
         cout << num1 - num2;
    else if (op == '*')
         cout << num1 * num2;  
    else if (op == '/')
         cout << num1 / num2;
    cout << "\n Do you want to continue with another calculation y/N ? ";
    cin >> y;
    }
    return 0;  
}
