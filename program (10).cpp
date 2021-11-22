#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT ToggleNibble(UNIT iNo)
{
   UNIT iMask=0xf000000f;
   UNIT iResult=0;
		
	iResult=iNo^iMask;
	
    return iResult;
	
}
int main()
{
	UNIT iValue=0,iRet=0;
	
	cout<<"enter number\n";
	cin>>iValue;
		
	iRet=ToggleNibble(iValue);
	
	cout<<"updated number is:"<<iRet<<"\n";
	
	return 0;
}