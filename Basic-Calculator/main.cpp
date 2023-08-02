//
//  main.cpp
//  01 Basic Calculator
//
//  Created by Rudolph Gutierrez on 7/28/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double firstVal;
    char mathOperator;
    double secondVal;
    int tryAgainVal;
    bool isWrongFormat  = false;
    bool isCalcAgain    = true;
    
    cout << "Calculator program. Enter a simple math calculation.\n";
    cout << "Acceptable operators: + , - , * , /" << endl;
    cout << "Example: 1 + 1\n\n";
    
    while (isCalcAgain) {
        cout << "Enter a calculation: ";
        cin >> firstVal >> mathOperator >> secondVal;
            
        switch (mathOperator) {
            case '+':
                cout << firstVal << " + " << secondVal << " = ";
                cout << firstVal + secondVal << endl << endl;
                break;
            case '-':
                cout << firstVal << " - " << secondVal << " = ";
                cout << firstVal - secondVal << endl << endl;
                break;
            case '*':
                cout << firstVal << " * " << secondVal << " = ";
                cout << firstVal * secondVal << endl << endl;
                break;
            case '/':
                if (secondVal != 0.0) {
                    cout << firstVal << "/" << secondVal << " = ";
                    cout << firstVal/secondVal << endl << endl;
                }
                else {
                    cout << "Cannot divide by 0. Try again." << endl << endl;
                }
                break;
            default:
                isWrongFormat = true;
                cout << "Wrong Format. Closing program.";
                break;
        }
        
        if (!isWrongFormat) {
            cout << "Enter 1 to retry or any key to exit: ";
        }
        cin >> tryAgainVal;
        if (tryAgainVal != 1) {
            cout << "Closing program." << endl;
            isCalcAgain = false;
        }
        cout << endl;
    }

    return 0;
}
