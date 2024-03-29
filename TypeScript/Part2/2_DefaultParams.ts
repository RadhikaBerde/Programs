/*
Program to demonstrate conncept of default parameters to function.

Default Parameters
Function parameters can also be assigned values by default. 
However, such parameters can also be explicitly passed values.
Default parameters should be assigned from right to left.

*/

function percentage(marks:number,outof:number = 300) 
{ 
   var per = (marks/outof) * 100; 
   return per; 
} 

var iret:number;

// In this call value of second parameter is considered as 300
iret = percentage(250); 
console.log(iret);

// In this call value of second parameter is considered as 500
iret = percentage(250,500); 
console.log(iret);

/*
Output:

Institute name :Marvellous Infosystems
Students Count: 1500

*/
