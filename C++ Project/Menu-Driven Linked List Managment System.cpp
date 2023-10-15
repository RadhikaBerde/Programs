#include<iostream>

using namespace std;


template <class T>
struct node
{
    T Data;
    node<T>* Next;
};

template <class T>
class Singly_linkList
{
private:
    node<T>* Head;

public:
    Singly_linkList();
    ~Singly_linkList();
    bool InsertFirst(T);
    bool InsertLast(T);
    bool InsertAtPos(T, int);
    inline void Display();
    inline int Count();
    bool DeleteFirst();
    bool DeleteLast();
    bool DeleteAtPos(int);
};

template <class T>
Singly_linkList<T>::Singly_linkList()
{
    Head = NULL;
}

template <class T>
Singly_linkList<T>::~Singly_linkList()
{
    node<T>* Navigate;
    node<T>* Temp;

    if (Head != Temp)
    {
        Navigate = Head;

        while (Navigate != NULL)
        {
            Temp = Navigate->Next;
            delete Navigate;
            Navigate = Temp;
        }
    }
}

template <class T>
bool Singly_linkList<T>::InsertFirst(T iNo)
{
    node<T>* newn = new node<T>;

    if (newn == NULL)
    {
        return false;
    }

    newn->Data = iNo;
    newn->Next = NULL;

    if (Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->Next = Head;
        Head = newn;
    }

    return true;
}

template <class T>
bool Singly_linkList<T>::InsertLast(T iNo)
{
    node<T>* newn = new node<T>;
    node<T>* temp = Head;

    if (newn == NULL)
    {
        return false;
    }

    newn->Data = iNo;
    newn->Next = NULL;

    if (Head == NULL)
    {
        Head = newn;
    }
    else
    {
        while (temp->Next != NULL)
        {
            temp = temp->Next;
        }

        temp->Next = newn;
    }

    return true;
}

template <class T>
bool Singly_linkList<T>::InsertAtPos(T iNo, int iPos)
{
    if ((Head == NULL) || (iPos > Count() + 1) || (iPos <= 0))
    {
        return false;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos > Count() + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        node<T>* newn;
        node<T>* temp = Head;
        int iCnt = 1;

        newn = new node<T>;

        if (newn == NULL)
        {
            return false;
        }

        newn->Data = iNo;
        newn->Next = NULL;

        while (iCnt != iPos - 1)
        {
            temp = temp->Next;
            iCnt++;
        }

        newn->Next = temp->Next;
        temp->Next = newn;
    }

    return true;
}

template <class T>
void Singly_linkList<T>::Display()
{
    node<T>* Temp;

    Temp = Head;

    while (Temp != NULL)
    {
        cout << Temp->Data << "->";
        Temp = Temp->Next;
    }

    cout << "NULL \n";
}

template <class T>
int Singly_linkList<T>::Count()
{
    node<T>* Temp;
    int iCnt = 0;

    Temp = Head;

    while (Temp != NULL)
    {
        iCnt++;
        Temp = Temp->Next;
    }

    return iCnt;
}

template <class T>
bool Singly_linkList<T>::DeleteFirst()
{
    node<T>* Temp = Head;

    if (Head == NULL)
    {
        return false;
    }
    else
    {
        Head = Head->Next;
        delete Temp;
    }

    return true;
}

template <class T>
bool Singly_linkList<T>::DeleteLast()
{
    node<T>* Temp1 = Head;
    node<T>* Temp2 = NULL;

    if (Head == NULL)
    {
        return false;
    }
    else if (Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        while (Temp1->Next->Next != NULL)
        {
            Temp1 = Temp1->Next;
        }

        Temp2 = Temp1->Next;
        Temp1->Next = NULL;

        delete Temp2;
    }

    return true;
}

template <class T>
bool Singly_linkList<T>::DeleteAtPos(int iPos)
{
    if ((Head == NULL) || (iPos > Count()) || (iPos <= 0))
    {
        return false;
    }
    else if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == Count())
    {
        DeleteLast();
    }
    else
    {
        node<T>* Temp1 = Head;
        node<T>* Temp2 = Head;
        int iCnt = 0;
        int i = 0;

        for (i = 1; i <= (iPos - 2); i++)
        {
            Temp1 = Temp1->Next;
        }

        Temp2 = Temp1->Next;
        Temp1->Next = Temp1->Next->Next;

        delete Temp2;
    }
}

int main()
{
    
    int  LinkedListName;
	char dataType;
	int  choice;
    
    while (true) 
	{
        cout << "Choose the type of linked list to create a node:" << "\n";
        cout << "1. Singly Linear Linked List" << "\n";
        cout << "2. Singly Circular Linked List" << "\n";
        cout << "3. Doubly Linear Linked List" << "\n";
        cout << "4. Doubly Circular Linked List" << "\n";
        cout << "5. Quit" << "\n";

        cout << "Enter your LinkedListName: ";
        cin >> LinkedListName;
		
		if (LinkedListName == 5) 
		{
			cout << "Invalid Option ";
            break;
        }
	
		cout << "Enter data type ('i' for int, 'c' for char, 'f' for float, 'd' for double): "<<"\n";
		cin >> dataType;
		
		switch (LinkedListName) 
		{
			case 1:
			{
			    cout << "Inside Singly Linear Linked list" << endl;
				if (dataType == 'i')
				{
					Singly_linkList<int> obj1;
					
					do
					{
						cout << "Choose an option:" << "\n";
						cout << "1. Insert First" << "\n";
						cout << "2. Insert Last" << "\n";
						cout << "3. Insert at Position" << "\n";
						cout << "4. Delete First" << "\n";
						cout << "5. Delete Last" << "\n";
						cout << "6. Delete at Position" << "\n";
						cout << "7. Display" << "\n";
						cout << "8. Count" << "\n";
						cout << "0. Exit" << "\n";
				
						cout << "Enter your choice: " << "\n";
						cin >> choice;
				
						switch (choice)
						{
						case 1:
						{
							int Data;
							cout << "Enter Data: ";
							cin >> Data;
							if (obj1.InsertFirst(Data))
							{
								cout << "Node inserted successfully." << "\n";
							}
							else
							{
								cout << "Node insertion failed." << "\n";
							}
				
							break;
						}
						case 2:
						{
							int Data;
							cout << "Enter Data: ";
							cin >> Data;
							if (obj1.InsertLast(Data))
							{
								cout << "Node inserted successfully." << "\n";
							}
							else
							{
								cout << "Node insertion failed." << "\n";
							}
				
							break;
						}
						case 3:
						{
							int Data;
							int position;
							int iFlag = 0;
				
							cout << "Enter Data: ";
							cin >> Data;
							cout << "Enter position: ";
							cin >> position;
				
							if (obj1.InsertAtPos(Data, position))
							{
								cout << "Node inserted successfully." << "\n";
							}
							else
							{
								cout << "Invalid position." << "\n";
							}
							break;
						}
						case 4:
						{
							if (obj1.DeleteFirst())
							{
								cout << "Node deleted successfully." << "\n";
							}
							else
							{
								cout << "Node deletion failed." << "\n";
							}
							break;
						}
						case 5:
						{
							if (obj1.DeleteLast())
							{
								cout << "Node deleted successfully." << "\n";
							}
							else
							{
								cout << "Node deletion failed." << "\n";
							}
							break;
						}
						case 6:
						{
							int position;
				
							cout << "Enter position: ";
							cin >> position;
				
							if (obj1.DeleteAtPos(position))
							{
								cout << "Node deleted successfully." << "\n";
							}
							else
							{
								cout << "Node deletion failed. Invalid position." << "\n";
							}
							break;
						}
						case 7:
							obj1.Display();
							break;
				
						case 8:
							cout << "Count: " << obj1.Count() << "\n";
							break;
				
						case 0:
							break;
				
						default:
							cout << "Invalid choice. Try again." << "\n";
						}
					} while (choice != 0);
				}
				else if (dataType == 'c')
				{
					Singly_linkList<char> objc;
					
					do
					{
						cout << "Choose an option:" << "\n";
						cout << "1. Insert First" << "\n";
						cout << "2. Insert Last" << "\n";
						cout << "3. Insert at Position" << "\n";
						cout << "4. Delete First" << "\n";
						cout << "5. Delete Last" << "\n";
						cout << "6. Delete at Position" << "\n";
						cout << "7. Display" << "\n";
						cout << "8. Count" << "\n";
						cout << "0. Exit" << "\n";
				
						cout << "Enter your choice: " << "\n";
						cin >> choice;
				
						switch (choice)
						{
							case 1:
							{
								char Data;
								cout << "Enter Data: ";
								cin >> Data;
								if (objc.InsertFirst(Data))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Node insertion failed." << "\n";
								}
					
								break;
							}
							case 2:
							{
								int Data;
								cout << "Enter Data: ";
								cin >> Data;
								if (objc.InsertLast(Data))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Node insertion failed." << "\n";
								}
					
								break;
							}
							case 3:
							{
								int Data;
								int position;
								int iFlag = 0;
					
								cout << "Enter Data: ";
								cin >> Data;
								cout << "Enter position: ";
								cin >> position;
					
								if (objc.InsertAtPos(Data, position))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Invalid position." << "\n";
								}
								break;
							}
							case 4:
							{
								if (objc.DeleteFirst())
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed." << "\n";
								}
								break;
							}
							case 5:
							{
								if (objc.DeleteLast())
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed." << "\n";
								}
								break;
							}
							case 6:
							{
								int position;
					
								cout << "Enter position: ";
								cin >> position;
					
								if (objc.DeleteAtPos(position))
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed. Invalid position." << "\n";
								}
								break;
							}
							case 7:
								objc.Display();
								break;
					
							case 8:
								cout << "Count: " << objc.Count() << "\n";
								break;
					
							case 0:
								break;
					
							default:
								cout << "Invalid choice. Try again." << "\n";
						}
					} while (choice != 0);
				}
				else if (dataType == 'f')
				{
					
					Singly_linkList<float> objf;
					
					do
					{
						cout << "Choose an option:" << "\n";
						cout << "1. Insert First" << "\n";
						cout << "2. Insert Last" << "\n";
						cout << "3. Insert at Position" << "\n";
						cout << "4. Delete First" << "\n";
						cout << "5. Delete Last" << "\n";
						cout << "6. Delete at Position" << "\n";
						cout << "7. Display" << "\n";
						cout << "8. Count" << "\n";
						cout << "0. Exit" << "\n";
				
						cout << "Enter your choice: " << "\n";
						cin >> choice;
				
						switch (choice)
						{
							case 1:
							{
								float Data;
								cout << "Enter Data: ";
								cin >> Data;
								if (objf.InsertFirst(Data))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Node insertion failed." << "\n";
								}
					
								break;
							}
							case 2:
							{
								float Data;
								cout << "Enter Data: ";
								cin >> Data;
								if (objf.InsertLast(Data))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Node insertion failed." << "\n";
								}
					
								break;
							}
							case 3:
							{
								float Data;
								int position;
								int iFlag = 0;
					
								cout << "Enter Data: ";
								cin >> Data;
								cout << "Enter position: ";
								cin >> position;
					
								if (objf.InsertAtPos(Data, position))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Invalid position." << "\n";
								}
								break;
							}
							case 4:
							{
								if (objf.DeleteFirst())
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed." << "\n";
								}
								break;
							}
							case 5:
							{
								if (objf.DeleteLast())
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed." << "\n";
								}
								break;
							}
							case 6:
							{
								int position;
					
								cout << "Enter position: ";
								cin >> position;
					
								if (objf.DeleteAtPos(position))
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed. Invalid position." << "\n";
								}
								break;
							}
							case 7:
								objf.Display();
								break;
					
							case 8:
								cout << "Count: " << objf.Count() << "\n";
								break;
					
							case 0:
								break;
					
							default:
								cout << "Invalid choice. Try again." << "\n";
						}
					} while (choice != 0);
				}
				else if (dataType == 'd')
				{
					Singly_linkList<double> objd;
					
					do
					{
						cout << "Choose an option:" << "\n";
						cout << "1. Insert First" << "\n";
						cout << "2. Insert Last" << "\n";
						cout << "3. Insert at Position" << "\n";
						cout << "4. Delete First" << "\n";
						cout << "5. Delete Last" << "\n";
						cout << "6. Delete at Position" << "\n";
						cout << "7. Display" << "\n";
						cout << "8. Count" << "\n";
						cout << "0. Exit" << "\n";
				
						cout << "Enter your choice: " << "\n";
						cin >> choice;
				
						switch (choice)
						{
							case 1:
							{
								double Data;
								cout << "Enter Data: ";
								cin >> Data;
								if (objd.InsertFirst(Data))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Node insertion failed." << "\n";
								}
					
								break;
							}
							case 2:
							{
								double Data;
								cout << "Enter Data: ";
								cin >> Data;
								if (objd.InsertLast(Data))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Node insertion failed." << "\n";
								}
					
								break;
							}
							case 3:
							{
								double Data;
								int position;
								int iFlag = 0;
					
								cout << "Enter Data: ";
								cin >> Data;
								cout << "Enter position: ";
								cin >> position;
					
								if (objd.InsertAtPos(Data, position))
								{
									cout << "Node inserted successfully." << "\n";
								}
								else
								{
									cout << "Invalid position." << "\n";
								}
								break;
							}
							case 4:
							{
								if (objd.DeleteFirst())
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed." << "\n";
								}
								break;
							}
							case 5:
							{
								if (objd.DeleteLast())
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed." << "\n";
								}
								break;
							}
							case 6:
							{
								int position;
					
								cout << "Enter position: ";
								cin >> position;
					
								if (objd.DeleteAtPos(position))
								{
									cout << "Node deleted successfully." << "\n";
								}
								else
								{
									cout << "Node deletion failed. Invalid position." << "\n";
								}
								break;
							}
							case 7:
								objd.Display();
								break;
					
							case 8:
								cout << "Count: " << objd.Count() << "\n";
								break;
					
							case 0:
								break;
					
							default:
								cout << "Invalid choice. Try again." << "\n";
						}
					} while (choice != 0);
				}
				else
				{
					cout << "Invalid data type selection." << endl;
				}
				
				break;
			}
			
			case 2:
			{
				cout << "Inside Singly Circular Linked list" << endl;
				break;
			}
			
			case 3:
			{
				cout << "Inside Doubly Linear Linked list" << endl;
				break;
			}
				
			case 4:
			{
				cout << "Inside Doubly Circular Linked list" << endl;
				break;
			}
				
			default:
			{
				cout << "Invalid choice of Linked List. Try again." << "\n";
				break;
			}
		}	
	}
    return 0;
}

