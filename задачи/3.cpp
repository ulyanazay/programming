#include <iostream>
#include <vector>
using namespace std;

class MedianFinder {
    vector<int> arr;

public:
    MedianFinder() {
    }
    void addNum(int num) {
        arr.push_back(num);
        insertion_sort(arr);
    }

    double findMedian() {
        int n = arr.size();
        return n % 2 == 1 ? arr[n / 2] : (double)(arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    }

    void insertion_sort(vector<int>& arr) {
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (i - 1 >= 0 and arr[i] < arr[i - 1]) swap(arr[i], arr[i - 1]);
            else break;
        }
    }
};

int main() {
    MedianFinder medianFinder1;
    medianFinder1.addNum(1);
    medianFinder1.addNum(2);
    cout << medianFinder1.findMedian() << endl; 
    medianFinder1.addNum(3);
    cout << medianFinder1.findMedian() << endl;

    return 0;
}