#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT SwapByte(UNIT iNo)
{
  
  return  (iNo&0x00ffff00)|(iNo<<24)|(iNo>>24);
   
   
	
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