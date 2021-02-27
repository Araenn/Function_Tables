/*This program captures the number of elements N of an int table (the table is initially defined with a maximum MAX size that N must not exceed), 
fills in the table with values and displays it. The program then deletes all occurrences of the value 0 in the table, 
compacts the elements and displays the modified table.*/


#include <stdio.h>
#include <math.h>

#define MAX 50
void TypeTab (int *Tab, int n);
void ShowTab(int *Tab, int n);
int PackTab(int *Tab , int n);


main()
{
    int u[MAX];
    int n,m;

    do
    {
        printf("Choose the tab size (MAX.%d) : ", MAX);
        scanf("%d", &n );
    }
    while(n>MAX);
    {
        TypeTab(u,n);
        ShowTab(u,n);
        m = PackTab(u,n);
        ShowTab(u ,m);
    }
}
void TypeTab(int *Tab, int n) 
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Choose the n°%d value, element of u", i);
        scanf("%d", &Tab[i]);
    }

}
void ShowTab(int *Tab, int n)
{
    printf("Tab : \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Tab[i]);
        printf("\n");
    }

}
int PackTab(int *Tab , int n) /*The PackTab function will be responsible for packing the elements in the Tab table (thus changing its contents).
and will return the new number of elements in the packed array (without the null values). */
{
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        Tab[j] = Tab[i];
        if(Tab[j])
        {
            j++;
        }
    }
    return j;
}
