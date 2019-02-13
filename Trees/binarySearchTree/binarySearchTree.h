struct Node{
	int data;
	Node* left; 
	Node* right;
};

class BinaryTree{
public:
	void insert(int);
	void search(int);
private:
	Node* root = NULL;
};

extern BinaryTree bst;