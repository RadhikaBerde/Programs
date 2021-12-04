/*2. Write a typescript program which contains one function named as Summation. That function
accepts array of numbers and returns the summation of each number from array.

Input : 23 6 7 4 5 7
Output : Addition is 52 

*/

main();

function Summation ( arr : number [] ) : number
{
	var iSum : number = 0;
	var i : number = 0 ;
	
	for ( i=0; i<= 5; i++)
	{
		iSum=iSum + arr[i];
	}
	
	return iSum;
}

function main()
{

	var arr : number[] = [23,6,7,4,5,7];
	var iRet : number = 0;

	iRet=Summation ( arr );

	console.log("Addition  is : ", iRet);
}
