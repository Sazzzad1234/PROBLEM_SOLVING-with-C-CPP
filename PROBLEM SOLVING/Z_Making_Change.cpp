#include <iostream>
#include <cmath>
using namespace std;

// Denominations of New Zealand coins in cents
const int COIN_VALUES[6] = {5, 10, 20, 50, 100, 200};

// Function to compute the minimum number of coins exchanged
int calculate_min_coins(int available_coins[], double transaction_amount) {
    int amount_to_pay = round(transaction_amount * 100); // Convert to cents
    int total_coins_used = 0;
    
    // Iterate over coins to pay the amount
    for (int i = 5; i >= 0 && amount_to_pay > 0; --i) {
        int num_coins = min(amount_to_pay / COIN_VALUES[i], available_coins[i]);
        total_coins_used += num_coins;
        amount_to_pay -= num_coins * COIN_VALUES[i];
    }

    // If we couldn't exactly pay the amount, we assume infinite shopkeeper coins
    if (amount_to_pay > 0) {
        for (int i = 5; i >= 0 && amount_to_pay > 0; --i) {
            int num_coins = amount_to_pay / COIN_VALUES[i];
            total_coins_used += num_coins;
            amount_to_pay -= num_coins * COIN_VALUES[i];
        }
    }

    // Now calculate the change
    int change = -amount_to_pay; // Negative value means we gave more than required
    int shopkeeper_coins_used = 0;

    for (int i = 5; i >= 0 && change > 0; --i) {
        int num_coins = change / COIN_VALUES[i];
        shopkeeper_coins_used += num_coins;
        change -= num_coins * COIN_VALUES[i];
    }

    return total_coins_used + shopkeeper_coins_used;
}

int main() {
    int available_coins[6];
    double transaction_amount;

    while (true) {
        // Read input
        cin >> available_coins[0] >> available_coins[1] >> available_coins[2]
            >> available_coins[3] >> available_coins[4] >> available_coins[5];

        if (available_coins[0] == 0 && available_coins[1] == 0 && available_coins[2] == 0 &&
            available_coins[3] == 0 && available_coins[4] == 0 && available_coins[5] == 0) {
            break; // Terminate on six zeroes
        }

        cin >> transaction_amount;

        // Compute the minimum coins exchanged
        int result = calculate_min_coins(available_coins, transaction_amount);

        // Print result, right justified in a field of width 3
        cout.width(3);
        cout << result << endl;
    }

    return 0;
}
