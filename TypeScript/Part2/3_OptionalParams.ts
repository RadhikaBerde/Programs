/*
Application to demonstrate concept of Optional Parameters.

Optional Parameters - 
Optional parameters can be used when arguments need not be compulsorily passed
for a function’s execution. 
A parameter can be marked optional by appending a question mark to its name.
*/

function Area(radious:number,PI?:number):number 
{ 
    var area:number;

    // Check whether second parameter is provided or not.
    if(PI == undefined)
    {
        PI = 3.14;
    }
    area = radious*radious*PI;

    return area; 
 }

 var iret:number;
 iret = Area(10.0);
 console.log("Area is : "+iret);

 iret = Area(10.0,7.2);
 console.log("Area is : "+iret);
 
 /*
 Output:
 
Area is : 314
Area is : 720
 */
