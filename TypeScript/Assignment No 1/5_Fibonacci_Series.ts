/*5. Write a typescript program which contains one function named as Fibonacci. That function accept
one number from user and print Fibonacci series till that number.
Input : 21
Output : 1 1 2 3 5 8 13 21
*/

main();

function Fibonacci ( iNo : number ) 
{
	var iFirst : number = 0;
	var iSecond : number = 1;
	var iThird : number = 0;
	var i : number = 0;
	
  console.log(iSecond);//printing 1 
	for(i=2;iThird<iNo;i++)//loop starts from 2 because 1 are already printed    
	{    
	  iThird=iFirst+iSecond;    
	  console.log(iThird);    
	  iFirst=iSecond;    
	  iSecond=iThird;    
	}  
	
}

function main()
{

	var iNo : number = 21;

	Fibonacci( iNo);
}

