/* Write a code to understand the concept of vector in C++.

Functions of vectors :
1. push_back
2. pop_back
3. insert
4. max_size
5. empty
6. front
7. back
8. begin
9. erase

*/

#include <iostream>
#include <vector>

using namespace std;

void Display(vector<int> &v)
{
    int i = 0;
	
    for(i=0; i<v.size(); i++) 
    {
        cout<<v[i]<<" ";
    }
	
    cout<<"\n";
}

int main() 
{

    vector<int> vec;
	
    int iSize = 0;
    int Element = 0;
    int i = 0;
    
	cout<<"Enter the Size of vector : " << " ";
    cin>>iSize;
		
    for(i = 0;i<iSize;i++)
    {
        cout<<"Enter the Elements of vector : " << " ";  
        cin>>Element;
		
        vec.push_back(Element); /*Insert Element in vector */
    }
    
    Display(vec);
	
    vec.pop_back(); /* Remove last element from vector */
	
    Display(vec);
	
	vector<int>::iterator iter = vec.begin();
	
	vec.insert(iter,10); /* It is used to insert 10 at the beginning */
	
	vec.insert(iter+1,12); /* It is used to insert 10 at the 2nd position */
	
	Display(vec);
	
	cout<<"Size of vector is : " <<vec.size() << endl;                    /*  It will give size of vector */
	cout<<"Maximum size of vector is : " <<vec.max_size() << endl;        /*  It will give maximum size of vector */
	cout<<"Check whether the vector is empty : " << vec.empty() << endl ; /*  It will check if the vector is empty */
    cout<<"First element is : " << vec.front() <<endl;                    /* It is used to access first element in the vector */
	cout<<"Last element is : " << vec.back() <<endl;                     /* It is used to access last element in the vector */

	vec.erase(vec.begin()+1); /* Erase 2nd element from vector */
	
	Display(vec);
	
    return 0;
}

/*

Output :

Enter the Size of vector : 4
Enter the Elements of vector :  1
Enter the Elements of vector :  2
Enter the Elements of vector :  3
Enter the Elements of vector :  4
1 2 3 4 
1 2 3 
10 12 1 2 3 
Size of vector is : 5
Maximum size of vector is : 2305843009213693951
Check whether the vector is empty : 0
First element is : 10
Last element is : 3
10 1 2 3 
*/
