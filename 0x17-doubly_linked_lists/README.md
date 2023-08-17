lists.h: project header file.

0-print_distint.c:
	- function that prints all the elements of a dlistint_t list.
	- Prototype: size_t print_dlistint(const dlistint_t *h);

1-distint_len.c:
	- function that returns the number of elements in a linked dlistint_t list.
	- Prototype: size_t dlistint_len(const dlistint_t *h);

2-add_dnodeint.c:
	- function that adds a new node at the beginning of a dlistint_t list.
	- Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
	- Return: the address of the new element, or NULL if it failed.

3-add_dnodeint_end.c:
	- function that adds a new node at the end of a dlistint_t list.
	- Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
	- Return: the address of the new element, or NULL if it failed.

4-free_distint.c:
	- function that frees a dlistint_t list.
	- Prototype: void free_dlistint(dlistint_t *head);

5-get_dnodeint.c:
	- function that returns the nth node of a dlistint_t linked list.
	- Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
	- where index is the index of the node, starting from 0
	- if the node does not exist, return NULL.

6-sum_distint.c:
	- function that returns the sum of all the data (n) of a dlistint_t linked list.
	- Prototype: int sum_dlistint(dlistint_t *head);
	- if the list is empty, return 0.

7-insert_dnodeint.c:
	- function that inserts a new node at a given position.
	- Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
	- where idx is the index of the list where the new node should be added. Index starts at 0
	- Returns: the address of the new node, or NULL if it failed
	- if it is not possible to add the new node at index idx, do not add the new node and return NULL.

8-delete_dnodeint.c:
	- function that deletes the node at index index of a dlistint_t linked list.
	- Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
	- where index is the index of the node that should be deleted. Index starts at 0
	- Returns: 1 if it succeeded, -1 if it failed.

100-password:
	- find the password of an executable file(crackme4).

102-result:
	- Find the largest palindrome made from the product of two 3-digit numbers.

103-keygen.c:
	- Write a keygen for crackme5.
	- Usage of the crackme: ./crackme5 username key
	- The crackme will segfault if you do not enter the correct key for the user
	- Usage for your keygen: ./keygen5 username
	- Your keygen should print a valid key for the username
