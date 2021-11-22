#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT ToggleBit(UNIT iNo,UNIT iPos)
{
   UNIT iMask=0x00000001;
   UNIT iResult=0;
	
	if((iPos<1)||(iPos>32))
	{
		return 0;
	}
	
	iMask=iMask<<(iPos-1);
	
	iResult=iNo^iMask;
	
	return iResult;
	
}
int main()
{
	UNIT iValue=0,iRet=0,i=0;
	
	cout<<"enter number\n";
	cin>>iValue;
	
	cout<<"enter the position of bit\n";
	cin>>i;
	
	iRet=ToggleBit(iValue,i);
	
	cout<<"updated number is:"<<iRet<<"\n";
	
	return 0;
}