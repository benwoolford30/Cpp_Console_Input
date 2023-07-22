#pragma-region ""
    

#include <iostream>
#include <string>
using namespace std;

#pragma-endregion
/*
    
    Welcome to Input- take a look at line 25.

    We can use that to take text from the user and assign it to a string like so!

*/
#pragma-region ""
int main()
{

#pragma-endregion ""
    cout <<"I will output what you type!" <<endl;

    string userinput;

    getline(cin,userinput);

    cout << userinput << endl;

    cin;

#pragma-region ""
}
#pragma-endregion ""
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
