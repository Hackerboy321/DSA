#include <iostream>
using namespace std;

void buy_price(int *price, int m)
{

    int best_buy_price[500000];

    best_buy_price[0] = INT16_MAX;

    for (int i = 1; i < m; i++)
    {

        best_buy_price[i] = min(best_buy_price[i - 1], price[i - 1]);
    }

    int maxprofit = 0;

    for (int i = 0; i < m; i++)
    {

        int current_profit = price[i] - best_buy_price[i];

        maxprofit = max(maxprofit, current_profit);
    }

    cout << "the maximum profit is = " << maxprofit;
}

int main()
{

    int price[] = {5, 4, 3, 2, 1};

    int n = sizeof(price) / sizeof(int);

    buy_price(price, n);

    return 0;
}
