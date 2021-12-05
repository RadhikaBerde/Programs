/*3. Create one typescript application which contains one class named as CircleX which sill
inherits above Circle class.
In CircleX class we have to write one method (Behaviours) as Circumference which will return
circumference of circle.
After designing the class create two objects of that class by providing some hardcoded value.
Call Circumference and Area methods by using both the objects. 
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
		this.ans = this.PI* this.Radius * this.Radius;
		return this.ans;
	}
	
}
class CircleX extends Circle
{
	Circumference()
	{
		this.ans = this.Radius * 2 * this.PI;
		return this.ans;
	}
}


	var iRadius : number = 0;
	var obj1 = new CircleX(10);
	var obj2 = new CircleX(20);
	var ret : number = 0;
	
	ret = obj1.Area();
	console.log("Area of circle is : ", ret);
	
	ret = obj1.Circumference();
	console.log("Circumference of circle is : " , ret);
	
	ret = obj2.Area();
	console.log("Area of circle is : ", ret);
	
	ret = obj2.Circumference();
	console.log("Circumference of circle is : " , ret);
	

/*
Output:

Area of circle is :  314
Circumference of circle is :  62.800000000000004
Area of circle is :  1256
Circumference of circle is :  125.60000000000001

*/
