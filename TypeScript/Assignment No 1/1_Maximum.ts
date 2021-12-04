/*1. Write a typescript program which contains one function named as Maximum. That function accepts
three parameters and it should returns largest value from three input parameters.

Input : 23 89 6
Output : Maximum number is 89*/

main()

function Maximum(iNo1:number, iNo2:number, iNo3:number) : number
{
	var iMax : number = 0 ;
	
	if((iNo1>iNo2) && (iNo1>iNo3))
	{
		iMax=iNo1;
	}
	else if((iNo2>iNo1) && (iNo2>iNo3))
	{
		iMax=iNo2;
	}
	else 
	{
		iMax=iNo3;
	}
	return iMax;
}
function main()
{

	var iNo1 : number = 23;
	var iNo2 : number = 89;
	var iNo3 : number = 6;
	var iRet : number =0;

	iRet=Maximum (iNo1,iNo2,iNo3);

	console.log("Mximum No. is: ", iRet);
}

