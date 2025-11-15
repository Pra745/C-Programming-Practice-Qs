#include <stdio.h>

int main() 
{
    int n, i, s, start, end, mid, f = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &s);
    start = 0;
    end = n - 1;
    while (start <= end) 
    {
        mid = (start + end) / 2;
        if (arr[mid] == s) {
            f = 1;
            break;
        }
        else if (s < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    if (f==1)
        printf("Element %d found at position %d.\n", s, mid + 1);
    else
        printf("Element %d not found in the array.\n", s);
    return 0;
}
