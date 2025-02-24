#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double banknotes[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};


    double N;
    cin >> N;

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int count = N / banknotes[i];
        cout << count << " nota(s) de R$ " << fixed << setprecision(2) << banknotes[i] << endl;
        N -= count * banknotes[i];
    }


    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        double count = N / coins[i];
        cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] << endl;
        N -= count * coins[i];
    }

    return 0;

}

