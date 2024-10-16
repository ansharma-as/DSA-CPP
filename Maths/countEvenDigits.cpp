#include <iostream>


using namespace std;

int EvenlyDivides(int n) {
    int original = n;
    int count = 0;
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        if (digit != 0 && original % digit == 0) {
            count++;  // Increment count if digit divides the original number
        }
        n = n / 10;  // Reduce the number by one digit
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Call the function to find how many digits divide the number
    int divisors = EvenlyDivides(n);
    
    cout << "Number of digits that evenly divide the number: " << divisors << endl;
    
    return 0;
}
