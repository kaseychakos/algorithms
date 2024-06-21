#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        vector<int> sortedSquares(vector<int> &nums) {
            // empty temp vector
            vector<int> temp;
            // for each int, square then add to temp vector
            for(int num : nums) {
                temp.push_back(num * num);
            }
            // sort temp & return
            sort(temp.begin(), temp.end());
            return temp;
        }
};

int main() {
    Solution solution;
    vector<int> v{-4,-1,0,3,10};
    vector<int> answer = solution.sortedSquares(v);
    
    for (int i : answer) {
        cout << i;
    }
    cout << endl;
    return 0;
};