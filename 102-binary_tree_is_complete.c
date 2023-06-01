#include "binary_trees.h"
int binary_tree_is_complete(const binary_tree_t *tree);
levelorder_queue_t *create_node(binary_tree_t *node);
void free_queue(levelorder_queue_t *head);
void push(binary_tree_t *node, levelorder_queue_t *head,
levelorder_queue_t **tail);
void pop(levelorder_queue_t **head);
/**
* binary_tree_is_complete - function checks
* complete binary tree
* @tree: points to check the root node of the tree
* Return: returns value 0 if tree is null.
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
levelorder_queue_t *head, *tail;
unsigned char flag = 0;
if (tree == NULL)
return (0);
head = tail = create_node((binary_tree_t *)tree);
if (head == NULL)
exit(1);
while (head != NULL)
{
if (head->node->left != NULL)
{
if (flag == 1)
{
free_queue(head);
return (0);
}
push(head->node->left, head, &tail);
}
else
flag = 1;
if (head->node->right != NULL)
{
if (flag == 1)
{
free_queue(head);
return (0);
}
push(head->node->right, head, &tail);
}
else
flag = 1;
pop(&head);
}
return (1);
}
/**
* create_node - function creates new levelorder
* @node: binary tree node for new node.
* Return: returns null value if an error occurs.
*/
levelorder_queue_t *create_node(binary_tree_t *node)
{
levelorder_queue_t *newNode;
newNode = malloc(sizeof(levelorder_queue_t));
if (newNode == NULL)
return (NULL);
newNode->node = node;
newNode->next = NULL;
return (newNode);
}
/**
* free_queue - the function frees levelorder_queue_t queue.
* @head: the point is towards head of the queue.
*/
void free_queue(levelorder_queue_t *head)
{
levelorder_queue_t *newTmp;
while (head != NULL)
{
newTmp = head->next;
free(head);
head = newTmp;
}
}
/**
* push - the function pushes the node back.
* @head: the pointer is double the queue head.
* @tail: the pointer to the queue tail.
* @node: pushes & prints binary tree node.
* Description: returns value 1 upon malloc failure.
*/
void push(binary_tree_t *node, levelorder_queue_t *head,
levelorder_queue_t **tail)
{
levelorder_queue_t *newNode;
newNode = create_node(node);
if (newNode == NULL)
{
free_queue(head);
exit(1);
}
(*tail)->next = newNode;
*tail = newNode;
}
/**
* pop - the function pops the queue head.
* @head: a double pointer to the queue head.
*/
void pop(levelorder_queue_t **head)
{
levelorder_queue_t *newTmp;
newTmp = (*head)->next;
free(*head);
*head = newTmp;
}
