#include <iostream>
#include <string>
using namespace std;

string largestOddDigit(const string& str) {
    char largestOdd = '\0'; 

    for (char c : str) {
        if ((c - '0') % 2 != 0) { 
            if (largestOdd == '\0' || c > largestOdd) {
                largestOdd = c;
            }
        }
    }

    if (largestOdd != '\0')
        return string(1, largestOdd); 
    else
        return ""; 
}

int main() {
    string input = "123456789";
    string result = largestOddDigit(input);

    if (!result.empty())
        cout << "Largest odd digit: " << result << endl;
    else
        cout << "No odd digit found" << endl;

    return 0;
}
