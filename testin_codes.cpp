#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    
    map<int, int> freq;
    
    // Counting frequency of each element
    for (int num : arr) {
        freq[num]++;
    }
    
    // Printing the frequencies
    for (auto &entry : freq) {
        cout << "Element " << entry.first << " occurs " << entry.second << " times." << endl;
    }
    return 0;
}
