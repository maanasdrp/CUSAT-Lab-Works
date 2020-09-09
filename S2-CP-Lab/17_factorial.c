// A S Nandanunni
// Roll No: 23
// CS - A

#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
        return n;
    else
        return n * factorial(n - 1);
}

void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
}

/*
OUTPUT


*/