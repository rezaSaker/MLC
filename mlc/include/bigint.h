#ifndef BIGINT_H
#define BIGINT_H

#include<bits/stdc++.h>

#define B "\""

class bigint
{
	private:
		char *_value;
		
		bool IsCorrectValue(char *value);
	
	public:
		bigint();	
		bigint(const bigint &obj);
		void operator =(char *value); 
		char* ToString();
};

#endif