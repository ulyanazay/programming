#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int purchase1 = INT_MAX, profit1 = 0, purchase2 = INT_MAX, profit2 = 0;

        for (int i = 0; i < prices.size(); i++) {
            purchase1 = min(purchase1, prices[i]);  //продаю в день с минимальной ценой
            profit1 = max(profit1, prices[i] - purchase1);

            purchase2 = min(purchase2, prices[i] - profit1); //покупаю с прибылью от 1й покупки
            profit2 = max(profit2, prices[i] - purchase2);
        }
        return profit2;
    }
};
int main() {
    setlocale(LC_ALL, "Russian");
    Solution solution;
    vector<int> prices;
    int n;
    cout << "Введите количество дней: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int price;
        cout << "Введите цену для " << i+1 << " дня: ";
        cin >> price;
        prices.push_back(price);
    }
    int maxProfit = solution.maxProfit(prices);
    cout << "Максимальная прибыль: " << maxProfit << endl;
    return 0;
}