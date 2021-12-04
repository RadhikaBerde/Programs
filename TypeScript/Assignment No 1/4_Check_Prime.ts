/*4. Write a typescript program which contains one function named as ChkPrime. That function should
accept one number and it should return true if the given number is prime and otherwise return false.
Input : 11
Output : It is prime number */

main();

function ChkPrime (iNo : number) : boolean
{
	var i : number = 0;
	var bTemp : boolean = false;
	for ( i =0 ; i<= iNo/2 ; i++ )
	{
		if(iNo%2 == 0)
		{
			bTemp = true;
		}
	}
	return bTemp;
	 
}

function main()
{
	var iNo : number = 11;
	var bRet : boolean = false;

	bRet=ChkPrime(iNo);

	if(bRet== false )
	{
		console.log("It is a Prime no. ");
	}
	else 
	{
		console.log("It is not a Prime no. ");
	}
}
