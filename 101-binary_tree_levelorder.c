#include "binary_trees.h"
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
levelorder_queue_t *create_node(binary_tree_t *node);
void free_queue(levelorder_queue_t *head);
void pint_push(binary_tree_t *node, levelorder_queue_t *head,
levelorder_queue_t **tail, void (*func)(int));
void pop(levelorder_queue_t **head);
/**
* binary_tree_levelorder - function traverses a binary-tree.
* @func: points to a function call for each node.
* @tree: points to root node of tree being traversed.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
levelorder_queue_t *head, *tail;
if (tree == NULL || func == NULL)
return;
head = tail = create_node((binary_tree_t *)tree);
if (head == NULL)
return;
while (head != NULL)
{
pint_push(head->node, head, &tail, func);
pop(&head);
}
}
/**
* create_node - function creates new node.
* @node: function contains binary tree node.
* Return: returns value null incase of error.
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
* pint_push -function for a given binary tree node
* @head: points double to the head of the queue.
* @tail: points double to the tail of the queue.
* @node: binary tree node that prints & push.
* @func: function that points on @node.
* Description: malloc failure exits with
* code of 1.
*/
void pint_push(binary_tree_t *node, levelorder_queue_t *head,
levelorder_queue_t **tail, void (*func)(int))
{
levelorder_queue_t *new;
func(node->n);
if (node->left != NULL)
{
new = create_node(node->left);
if (new == NULL)
{
free_queue(head);
exit(1);
}
(*tail)->next = new;
*tail = new;
}
if (node->right != NULL)
{
new = create_node(node->right);
if (new == NULL)
{
free_queue(head);
exit(1);
}
(*tail)->next = new;
*tail = new;
}
}
/**
* free_queue - function frees levelorder_queue_t queue.
* @head: points to the head of the queue.
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
* pop - function pops the head
* levelorder_queue_t queue
* @head: points to the head of the queue.
*/
void pop(levelorder_queue_t **head)
{
levelorder_queue_t *temp;
temp = (*head)->next;
free(*head);
*head = temp;
}
