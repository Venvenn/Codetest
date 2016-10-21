#include "Money.h"
#include "Wallet.h"

Wallet Tom;
Wallet Jack;


float Wallet::wallet_function(static Money coin[3], static Money note[3], int person)
{
	float theWeight = 0;

	if (person = 0)
	{
		Tom.inWallet[0] = coin[0];
		Tom.inWallet[1] = note[1];
		Tom.inWallet[2] = note[2];
		Tom.total_weight = calc_Weight(Tom);
		theWeight = Tom.total_weight;
	}
	if (person = 1)
	{
		Jack.inWallet[0] = coin[0];
		Jack.inWallet[1] = note[1];
		Jack.inWallet[2] = note[0];
		Jack.total_weight = calc_Weight(Jack);
		theWeight = Jack.total_weight;
	}

	return theWeight;
}

float Wallet::calc_Weight(Wallet w_object)
{
	float w = 0;

	w = ( w_object.inWallet[0].weight + w_object.inWallet[1].weight + w_object.inWallet[2].weight);

	return w;
}