#include <iostream>
using namespace std;

int main() {
    float celsius;
    float fahrenheit;
    
    char exit; 
    
    cout << "Write inn temperature you want converted to fahrenheit: ";
    cin >> celsius;
    fahrenheit = 1.8 * celsius + 32;
    cout << "Fahrenheit = " << fahrenheit << endl;
    cin >>exit;
    
    system("PAUSE");     //makes sure that the program waits for your input.
return 0;
}
