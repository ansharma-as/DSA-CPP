#include <map>
#include <iostream>
using namespace std;

void explain_map() {
    map<int, int> m;

    // Inserting elements
    m[1] = 2; // Method 1: Using [] operator
    m.insert(make_pair(2, 3)); // Method 2: Using insert
    m.insert(pair<int, int>(3, 4)); // Method 3: Another way to use insert

    // Displaying the map
    cout << "Map elements:\n";
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

int main() {
    explain_map();
    return 0;
}
