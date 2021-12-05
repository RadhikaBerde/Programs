/*
4. Write a typescript program which contains one arrow function named as ChkArmstrong. 
That function accepts one numbers and check whether number is Armstrong number or not. 

Input : 153 
Output : It is Armstrong number

*/


var ChkArmstrong = ( iNo : number) => {
	
	var iTemp : number =iNo;
	while(iNo>0)
	{
		var iTemp=iNo%10;
		var iAns= iAns+(iTemp*iTemp*iTemp);
		iNo=iNo/10;
	}
	
	if(iTemp == iAns)
	{
		console.log("It is Armstrong no.");
	}
	else
	{
		console.log("It is not Armstrong no ");
	}
	
}

ChkArmstrong(153);
