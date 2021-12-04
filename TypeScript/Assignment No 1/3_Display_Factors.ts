/*3. Write a typescript program which contains one function named as DisplayFactors. That function
should accept one number and display factors of that number.

Input : 20
Output : 1 2 4 5 10 
*/

main();

function DisplayFactors(iNo : number) 
{
   var i : number = 0;
   for(i=0; i<iNo; i++)
   if (iNo%i == 0)
   {
		console.log(i);
   }
}

function main()

{
	var iNo: number =20;
	DisplayFactors(iNo);
}


