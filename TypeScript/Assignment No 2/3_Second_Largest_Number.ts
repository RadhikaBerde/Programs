/* 3. Write a typescript program which contains one function named as Maximum. That function accepts
array of numbers and returns the second largest number from array.

Input : 23 89 6 29 56 45 77 32
Output : Second Maximum number is 77
*/

function Second_Largest( arr : number[]) : number
{
	var i : number = 0;
	var iTemp1 : number = arr[0];
	var iTemp2 : number = 0;
	
	
	for ( i=0; i< 8 ; i++)
	{
		if(arr[i]>iTemp1)
		{
			iTemp1 = arr[i];
		}
		if((arr[i]>iTemp2)&&(arr[i]<iTemp1))
		{
			iTemp2 = arr[i];
		}
	
		
	}
	return iTemp2;
}

var arr : number [] = [23, 89, 6 , 29 , 56 , 45, 77 ,32];

var iRet : number = 0;

iRet = Second_Largest( arr );

console.log("Second Maximum no. is : ", iRet);
