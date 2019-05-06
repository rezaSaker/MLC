#include "../include/bigint.h"

//------------------------------------
//private method defintion begins here
//------------------------------------

bool bigint::_IsCorrectValue(char *value)
{
	for(int i = 0; value[i] != '\0'; ++i)
	{
		//if the character is not digit
		if(value[i] < 30 || value[i] > 39)
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
	if(_IsCorrectValue(value))
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