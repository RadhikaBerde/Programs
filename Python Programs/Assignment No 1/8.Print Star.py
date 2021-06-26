"""8. Write a program which accept number from user and print that number of “*” on screen.

Input : 5 
Output : * * * * * 

"""

def PrintStar(iNo):
	for i in range(iNo):
		print("*\t",end='')
		
def main():
    iNo=int(input("Enter No.: "))
    PrintStar(iNo)
	
if __name__=="__main__":
	main()
