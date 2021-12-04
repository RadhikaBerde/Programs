//Below application demonstrates use of each type of loop. 

var no:number = 5; 
var i:number; 
console.log("Marvellous : for loop demonstration :"); 
for(i = 1; i<= no; i++) 
{ 
 console.log(i); 
} 
console.log("Marvellous : while loop demonstration :"); 
i = 1; 
while(i<=no) 
{ 
 console.log(i); 
 i++; 
} 
console.log("Marvellous : do-while loop demonstration :"); 
i = 1; 
do 
{ 
 console.log(i); 
 i++; 
}while(i<=no);

/*
O/P:
Marvellous : for loop demonstration :
1
2
3
4
5
Marvellous : while loop demonstration :
1
2
3
4
5
Marvellous : do-while loop demonstration :
1
2
3
4
5

*/
