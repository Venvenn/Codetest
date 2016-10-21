#include "Money.h"

void Money::money_function(static Money coin[3], static Money note[3])
{

	coin[0].weight = 0.01f;
	coin[0].t = fifty_cent;
	coin[1].weight = 0.1f;
	coin[1].t = one;
	coin[2].weight = 1.0f;
	coin[2].t = two;

	note[0].weight = 0.001f;
	note[0].t = five;
	note[1].weight = 0.005f;
	note[1].t = ten;
	note[2].weight = 0.009f;
	note[2].t = hundred;




} 