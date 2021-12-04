/*1. Write a typescript program which contains one function named as Maximum. That function accepts
array of numbers and returns the largest number from array.

Input : 23 89 6 29 56 45 77 32
Output : Maximum number is 89 
*/

main();

function Maximum( arr : number[] )
{
	var iTemp : number = 0;
	var i : number = 0;
	
	for ( i=0; i<8; i++)
	{
		if(arr[i]>iTemp)
		{
			iTemp = arr[i];
		}
		
	}
	return iTemp;
}

function main()
{
	var Arr : number[] = [23,89,6,29,56,45,77,32];
	var iRet : number = 0;

	iRet = Maximum (Arr);

	console.log("Maximum no.is : ", iRet);
}
