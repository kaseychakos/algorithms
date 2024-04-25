#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        // Two pointers from each end, swap characters

        int i = 0;
        int j = s.size() -1;

        while(i < j) {
            // swap letters
            int temp = s[i];
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
    s.reverseString()
}
