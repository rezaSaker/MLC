#include"../mlc.h"
using namespace std;

//this is just the basic step. Soon we will start testing
//this program with a suitable unit testing framework

int main()
{
	bigint num;
	
	num = "12345";
	
	cout<<"Test 1 -> Expected 12345, Resulted: "<<num.ToString()<<endl;
	
	return 0;
}