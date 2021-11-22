#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT ToggleBit(UNIT iNo,UNIT iPos1,UNIT iPos2)
{
   UNIT iMask1=0x00000001;
   UNIT iMask2=0x00000001,iMask=0;
   UNIT iResult=0;
	
    iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	iMask=iMask1|iMask2;
	
	iResult=iNo^iMask;
	
    return iResult;
	
}
int main()
{
	UNIT iValue=0,iRet=0,i=0,j=0;
	
	cout<<"enter number\n";
	cin>>iValue;
	
	cout<<"enter the first position of bit\n";
	cin>>i;
	cout<<"enter the second position of bit\n";
	cin>>j;
	
	iRet=ToggleBit(iValue,i,j);
	
	cout<<"updated number is:"<<iRet<<"\n";
	
	return 0;
}