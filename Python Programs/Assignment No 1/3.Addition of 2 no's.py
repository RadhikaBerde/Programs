"""3. Write a program which contains one function named as Add() which accepts two numbers from user and return addition of that two numbers.

Input : 11 5 
Output : 16 

"""

def Addition(iNo1,iNo2):
    iSum=iNo1+iNo2
    return iSum
    
def main():
    print("Enter first No: ")
    iNo1=int(input())
    
    print("Enter Second No: ")
    iNo2=int(input())
    
    iRet=Addition(iNo1,iNo2)
    
    print("Addition is: ",iRet)
    
if __name__=="__main__":
    main()
    
