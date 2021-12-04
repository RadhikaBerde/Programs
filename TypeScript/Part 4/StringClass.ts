
// Create object of string class as 
var str = new String("Marvellous"); 
var ptr = new String("Infosystems"); 

// charAt function gives character at specific index. 
console.log("str.charAt(0) is:" + str.charAt(0)); 
console.log("str.charAt(1) is:" + str.charAt(1)); 

// charCodeAt gives unicode result 
console.log("str.charCodeAt(0) is:" + str.charCodeAt(0)); 
console.log("str.charCodeAt(1) is:" + str.charCodeAt(1)); 

// length gives legth of the string 
console.log("length of str is " + str.length); 
console.log("length of ptr is " + ptr.length); 

// Create object of string class as 
var str = "Marvellous"; 
var ptr = "Infosystems"; 

// concat method is used to concat two strings 
var final = str.concat(ptr) 
console.log("String after concatenation : "+final);
 
// indexOf method is used to find index of specific substring inn string 
var ret = ptr.indexOf("sys"); 
console.log("Index of sys is : "+ret); 
var ret = ptr.indexOf("Pune"); 
console.log("Index of Pune is : "+ret); 

// lastIndexOf method is used to find last index of specific substring in string 
var str2 = "MarvellousInfosystemsMarvellousPuneAndNasik"; 
var ret = str2.lastIndexOf("Marvellous"); 
console.log("Last Index of Marvellous is : "+ret); 

// replace method is used to replace substring with another substring 
var replace = /Marvellous/gi; 
var str = "Marvellous Infosystems Pune & Marvellous Magic Thoughts Pune"; 
var newstr = str.replace(replace, "NewMarvellous"); 
console.log(newstr) 

// Search method is used to check whether specific substring is present or not. 
var replace = /Marvellous/gi; 
var str = "Marvellous Infosystems Pune & Marvellous Magic Thoughts Pune"; 
if (str.search(replace) == -1 ) 
{ 
 console.log("Does not contain Marvellous" ); 
} 
else 
{ 
 console.log("Contains Marvellous" ); 
} 

// It is used to break string by considering specific delimiter. 
var str = "Marvellous Infosystems Educating for better tomorrow"; 
var arr = str.split(" ", 6); 
console.log(arr); 

// toString method is used to convert any type of data type into string 
var MarvellousStr:number = 112151; 
console.log(MarvellousStr.toString());
