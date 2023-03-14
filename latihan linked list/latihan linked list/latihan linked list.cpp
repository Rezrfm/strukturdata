#include <iostream>

using namespace std;

struct Node {
	char data;
	Node *next;
};

Node* head = NULL;

void insert(char value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		Node* current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}

void display()
{
	Node* current = head;
	while (current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
}

int main()
{
	char input;
	int i = 0;
	while (i != 5)
	{
		cout << "Masukkan data ke-" << i+1 << " : ";
		cin >> input;
		insert(input);
		++i;
	}
	display();
}