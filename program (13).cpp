#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT ToggleRange(UNIT iNo,UNIT iStart,UNIT iEnd)
{
   
   UNIT iMask=0;
   UNIT iResult=0;
   
   iMask=(0xffffffff<<(iStart-1))&(0xffffffff>>(32-iEnd));
		
	iResult=iNo^iMask;
	
    return iResult;
	
}

int main()
{
	UNIT iValue=0,iRet=0,i,j;
	
	cout<<"enter number\n";
	cin>>iValue;
	
	cout<<"enter starting position\n";
	cin>>i;
	
	cout<<"enter ending position\n";
	cin>>j;
		
	iRet=ToggleRange(iValue,i,j);
	
	cout<<"updated number is:"<<iRet<<"\n";
	
	return 0;
}