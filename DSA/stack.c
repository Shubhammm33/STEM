#include <stdio.h>
#define MAX 10

int top = -1;  

void push(int a[], int x)
{
    if (top == MAX - 1)
    {
        printf("Overflow\n");
        return;
    }
    top++;
    a[top] = x;
    printf("Pushed %d\n", x);
}

void pop(int a[])
{
    int val;
    if (top== -1)
    {
    
        printf("Underflow\n");
        return;
    }
    val = a[top];
    top--;
    printf("Popped %d\n", val);
}

int main()
{
    int a[MAX] = {0, 1, 2, 3, 4, 5};
    top = 5;  

    int n, i;
    int x;
    int j;
    while (1)
    {
        printf("\n1 - push\n2 - pop\n3 - display\n4 - exit\n");
        printf("Enter the operation to perform: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &x);
            push(a, x);
            break;
        case 2:
            pop(a);
            break;
        case 3:
            printf("Stack elements: ");
            for (i = 0; i <= top; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        case 4:
            return 0;
        default:
            printf("Invalid option\n");
            break;
        }
    }
    return 0;
}