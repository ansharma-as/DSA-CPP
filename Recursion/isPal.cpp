#include <iostream>
using namespace std;

bool isPal(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return ((str[start] == str[end]) && isPal(str, start + 1, end - 1));
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << isPal(str, 0, str.length() - 1) << endl;
    return 0;
}