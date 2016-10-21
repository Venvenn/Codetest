#ifndef _MONEY_H
#define _MONEY_H




class Money
{
	enum type { fifty_cent, one, two, five, ten, hundred};
	type t;
public:
	float weight;
	void money_function(static Money coin[3], static Money note[3]);


};



#endif