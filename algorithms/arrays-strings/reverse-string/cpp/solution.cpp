#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        // Two pointers from each end, swap characters

        int i = 0;
        int j = s.size() -1;

        while(i < j) {
            // swap letters
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            // move pointers towards each other
            i++;
            j--;
        }
    }
};

int main() {
    Solution s;
    vector<char> v{'B','a','s','e','b','a','l','l'};

    s.reverseString(v);
    for (char c : v) {
        cout << c;
    }
    cout << endl;
    return 0;
};
