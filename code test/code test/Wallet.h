#ifndef _WALLET_H
#define _WALLET_H
#include "Money.h"



class Wallet
{
	float total_weight;
	Money inWallet[3];
	float calc_Weight(Wallet w_object);
public:
	float wallet_function(static Money coin[3], static Money note[3], int person);

};



#endif