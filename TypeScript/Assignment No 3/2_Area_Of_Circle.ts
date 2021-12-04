/*2. Create one typescript application which contains one class named as Circle.
Circle class contains two characteristics (Class data members) as Radius, PI.
Create one parametrised constructor which accept one value and assign it to Radius. Value of
PI member is set to 3.14.
In Circle class we have to one method (Behaviours) as Area which will return area of Circle.
After designing the class create two objects of that class by providing some hardcoded value.
Call the method Area by using both the objects.
*/



class Circle
{
	Radius : number;
	PI : number = 3.14;
	ans : number;
	
	constructor( rad : number ) 
	{
		this.Radius = rad;
		
	}
	
	Area() : number
	{
		this.ans = this.PI * this.Radius * this.Radius;
		return this.ans;
	}
	
}


	var Radius : number = 0;
	var obj1 = new Circle(10);
	var obj2 = new Circle(20);
	var ret : number = 0;
	
	ret = obj1.Area();
	console.log("Area of obj1 is: " , ret);
	
	ret = obj2.Area();
	console.log("Area of obj2 is : ", ret);
	

/*
Output:

Area of obj1 is:  314
Area of obj2 is :  1256

*/
