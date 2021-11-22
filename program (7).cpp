#include<iostream>
using namespace std;
typedef unsigned int UNIT;

UNIT CountBit(UNIT iNo)
{
	int i=0,iCnt=0,iResult=0;
	int iMask=0x00000001;

    for(i=1;i<32;i++)
    {
		iResult=iNo&iMask;
		if(iResult==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	return iCnt;
	
}
int main()
{
	UNIT iValue=0,iRet=0;
	
	cout<<"enter number\n";
	cin>>iValue;
	
	iRet=CountBit(iValue);
	
	cout<<"Number of bits which are ON:"<<iRet<<"\n";
	
	return 0;
}