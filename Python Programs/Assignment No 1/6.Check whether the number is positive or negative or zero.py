"""6.Write a program which accept number from user and check whether that number is positive or negative or zero.

Input : 11 
Output : Positive Number

Input : -8 
Output : Negative Number

Input : 0 
Output : Zero 

"""
def PosNeg(iNo):
    if iNo<0:
        return False
    else:
        return True
        
def main():
    print("Enter No: ")
    iNo=int(input())
    
    if iNo==0:
        print("No is Zero")
    else:
        bRet=PosNeg(iNo)
    
        if bRet==True:
            print("No is Positive")
        else:
            print("No is Negative")
        
if __name__=="__main__":
    main()
