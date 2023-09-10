#include <iostream>
#include <climits>
using namespace std;

void sort(long long int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                swap(a[j], a[i]);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int N;
        cin >> N;
        long long int price[N];
        for (int i = 0; i < N; i++)
        {
            cin >> price[i];
        }

        int balance;
        cin >> balance;

        sort(price, N);
        int i = 0, j = N - 1;
        int mini = 0, minj = 0;
        int diff = 10000;
        while (i < j)
        {
            if (price[i] + price[j] == balance)
            {
                if (diff >= price[j] - price[i])
                {
                    mini = i;
                    minj = j;
                    diff = price[j] - price[i];
                }
                i++;
                j--;
            }
            else if (price[i] + price[j] < balance){
                i++;
            }
            else{
                j--;
            }
        }
        cout << "Deepak should buy roses whose prices are " << price[mini] << " and " << price[minj] << endl;
        t--;
    }
    return 0;
}