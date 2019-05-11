#include "../include/bigint.h"
using namespace std;
//------------------------------------
//private method defintion begins here
//------------------------------------

bool bigint::IsCorrectValue(char *value)
{
	if(strlen(value) > 1000000)
	{
		return false;		
	}
	
	for(int i = 0; value[i] != '\0'; ++i)
	{
		//if the character is not digit
		if(value[i] < 48 || value[i] > 57)
		{
			return false;			
		}
	}
	
	return true;
}

//-----------------------------------
//private method definition ends here
//-----------------------------------


//------------------------------------
//public method definition begins here
//------------------------------------

bigint::bigint()
{ 
	_value = new char[1000001];
}

bigint::bigint(const bigint &obj)
{
	//perform a deep copy of object
	strcpy(obj._value, this->_value);
}

void bigint::operator =(char *value)
{
	if(IsCorrectValue(value))
	{
		strcpy(this->_value, value);
	}
	else
	{
		std::cout<<"invalid value of bigint. Program terminated.";
		exit(0);
	}
}

char* bigint::ToString()
{
	return this->_value;
}

//---------------------------------
//public method defintion ends here
//---------------------------------