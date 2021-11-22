#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT ToggleRange(UNIT iNo,UNIT iStart,UNIT iEnd)
{
   UNIT iMask1=0xffffffff;
   UNIT iMask2=0xffffffff;
   UNIT iMask=0;
   UNIT iResult=0;
   
   iMask1=iMask1<<(iStart-1);
   iMask2=iMask2>>(32-iEnd);
   iMask=iMask1&iMask2;
		
	iResult=iNo|iMask;
	
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