#include "Money.h"
#include "Wallet.h"
#include <iostream>

static Money coins[3];
static Money notes[3];

Money m_object;
Wallet w_object;

int main()
{
	float weight1 = 0;
	float weight2 = 0;

	m_object.money_function(coins, notes);
	weight1 = w_object.wallet_function(coins, notes, 0);
	weight2 = w_object.wallet_function(coins, notes, 1);
	std::cout << "Tom: " << weight1 << std::endl << "Jack: " << weight2 << std::endl;
	system("pause");
}