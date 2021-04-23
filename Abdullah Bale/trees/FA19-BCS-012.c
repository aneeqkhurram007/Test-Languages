#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode()
{
    int data;
    struct node *node = (struct node *)malloc(sizeof(struct node));
    printf("Enter elements of the tree: ");
    scanf("%d", &data);
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void Postorder(struct node *node)
{
    if (node == NULL)
        return;

    Postorder(node->left);

    Postorder(node->right);

    printf("%d ", node->data);
}

void Inorder(struct node *node)
{
    if (node == NULL)
        return;

    Inorder(node->left);

    printf("%d ", node->data);

    Inorder(node->right);
}

void Preorder(struct node *node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);

    Preorder(node->left);

    Preorder(node->right);
}
void givenLevel(struct node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        givenLevel(root->left, level - 1);
        givenLevel(root->right, level - 1);
    }
}

int height(struct node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);

        if (leftHeight > rightHeight)
            return (leftHeight + 1);
        else
            return (rightHeight + 1);
    }
}
void LevelOrder(struct node *root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        givenLevel(root, i);
}

int getLevelUtil(struct node *node, int data, int level)
{
    if (node == NULL)
        return 0;

    if (node->data == data)
        return level;

    int downlevel = getLevelUtil(node->left, data, level + 1);
    if (downlevel != 0)
        return downlevel;

    downlevel = getLevelUtil(node->right, data, level + 1);
    return downlevel;
}

int getLevel(struct node *node, int data)
{
    return getLevelUtil(node, data, 1);
}

static int count = 0;
int countnodes(struct node *root)
{
    if (root != NULL)
    {
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;
}

int returnParent(int n, struct node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else if (root->data == n)
    {
        return root->data;
    }
    else
    {
        struct node *temp = root;
        struct node *store = NULL;
        while (temp->left != NULL || temp->right != NULL)
        {
            store = temp;

            if (n > temp->data)
            {
                temp = temp->right;
            }
            else if (n < temp->data)
            {
                temp = temp->left;
            }
        }

        return store->data;
    }
}

int main()
{
    int choice, nodeVal, x;
    struct node *root = newNode();
    root->left = newNode();
    root->right = newNode();
    root->left->left = newNode();
    root->left->right = newNode();

    printf("\n\nFunctions on trees!\n");

    do
    {
        printf("\nWhich operation do you want to perform?\n");
        printf("1 for Pre-order traversal!\n");
        printf("2 for In-order traversal!\n");
        printf("3 for Post-order traversal!\n");
        printf("4 for Level order traversal!\n");
        printf("5 to find parent of a given node!\n");
        printf("6 to find depth of a given node!\n");
        printf("7 to find the height of the tree!\n");
        printf("8 to check if 2 nodes are on the same level!\n");
        printf("9 to find the number of nodes in the tree!\n");
        printf("0 for exit!\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nPre-order traversal of binary tree is \n");
            Preorder(root);
            break;
        case 2:
            printf("\nIn-order traversal of binary tree is \n");
            Inorder(root);
            break;
        case 3:
            printf("\nPost-order traversal of binary tree is \n");
            Postorder(root);
            break;
        case 4:
            printf("Level Order traversal of binary tree is \n");
            LevelOrder(root);
            break;
        case 5:
            printf("Enter the node whose parent you want to print: \n");
            scanf("%d", &nodeVal);
            printf("Parent: %d", returnParent(nodeVal, root));
            break;
        case 6:
            printf("Enter the node whose depth you want to find: \n");
            scanf("%d", &x);
            int level = getLevel(root, x);
            if (level)
                printf("Level of %d is %d\n", x, getLevel(root, x));
            else
                printf(" %d is not present in tree \n", x);
            break;
        case 7:
            printf("Height of tree is %d\n", height(root));
            break;
        case 8:
            int node1, node2;
            printf("Enter node1: ");
            scanf("%d", &node1);
            printf("\nEnter node2: ");
            scanf("%d", &node2);

            node1 = getLevel(root, node1);
            node2 = getLevel(root, node2);
            if (node1 == node2)
            {
                printf("They are at same level.");
            }
            else
            {
                printf("\nThey are not at same level.");
            }

            break;
        case 9:
            printf("Number of nodes in tree are: ");
            countnodes(root);
            break;
        case 0:
            printf("Exit. \n");
            break;
        default:
            printf("Invalid Choice.\n");
        }
    } while (choice != 0);
    getchar();
    return 0;
}
