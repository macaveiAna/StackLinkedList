//=================================================================
// @author:     Ana Macavei
// @version:    1.2
//
//  Demonstrates: class definitiion for stack implemented with linked list
//=================================================================



struct Node {
	int data;
	Node* next;
};

class Stack {
public:
	//constructor
	Stack();

	//Destructor
	~Stack(); //going to have dynamic allocated memory so need a destructor

	/**--------------------------------------------------------------------
	*	Pushes item on stack
	*
	*	@param itemToPush - the item to push onto the stack
	*	@return true if successful, false otherwise
	*/
	bool push(int itemToPush);

	/**--------------------------------------------------------------------
	*	Pops item off of stack
	*
	*	@param itemPopped - the item removed from the stack (if successful)
	*	@return true if successful, false otherwise
	*/
	bool pop(int& itemPopped);

	/**--------------------------------------------------------------------
	*	is stack full
	*
	*
	*	@return true if full, false otherwise
	*/
	bool full();

	/**--------------------------------------------------------------------
	*	is stack empty
	*
	*
	*	@return true if empty, false otherwise
	*/
	bool empty();

private:
	Node* head;
};
