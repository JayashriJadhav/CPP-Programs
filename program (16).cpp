#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT SwapByte(UNIT iNo)
{
   UNIT iMask=0x00ffff00;
   UNIT iTemp=iNo&iMask;
   
   UNIT Byte1=iNo<<24;
   UNIT Byte4=iNo>>24;
   
   UNIT iResult=iTemp|Byte1|Byte4;
   return iResult;
   
   
	
}

int main()
{
	UNIT iValue=0,iRet=0;
	
	cout<<"enter number\n";
	cin>>iValue;
	
	SwapByte(iValue);
	
	cout<<"updated number is:"<<iRet<<"\n";
	
	
	return 0;
}