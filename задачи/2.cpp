#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    bool pair(vector<int>& nums, int indexDiff, int valueDiff) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (j - i <= indexDiff && abs((long)nums[i] - nums[j]) <= valueDiff) {
                    return true;
                }
                if (j - i > indexDiff) break;
            }
        }
        return false;
    }
};




int main() {

    setlocale(LC_ALL, "Russian");

    Solution solution;
    vector<int> nums;
    int size, n;
    cout << "Введите количество элементов в векторе: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "Введите число: ";
        cin >> n;
        nums.push_back(n);
    }
    int indexDiff, valueDiff;
    cout << "Введите indexDiff: ";
    cin >> indexDiff;
    cout << "Введите valueDiff: ";
    cin >> valueDiff;
    cout << "Ответ: " << solution.pair(nums, indexDiff, valueDiff) << endl;
    return 0;
}