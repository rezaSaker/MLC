#ifndef BIGINT_H
#define BIGINT_H

#define B "\""
#include<bits/stdc++.h>

class bigint
{
	private:
		char *_value;
		
		bool _IsCorrectValue(char *value);
	
	public:
		bigint();	
		bigint(const bigint &obj);
		void operator =(char *value); 
		char* ToString();
};

#endif