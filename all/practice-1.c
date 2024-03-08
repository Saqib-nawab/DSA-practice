/* Question 1 : Consider the recursive algorithm below, where the random(int n) spends one unit of time to return a random integer where the probability of each integer coming as random is evenly distributed within the range[0, n].If the average processing time is T(n), what is the value of T(6) ?*/

#include <stdio.h>
#include <stdlib.h>

int randomm(int a) // random name conflicts with the built-in random number generator hence the name randomm
{
    int i;
    int num = (rand() % (a + 1));
    return num;
}

int function(int n)
{
    int i = 0;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = randomm(n - 1);
        printf("this\n");
        return function(i) + function(n - 1 - i);
    }
}

int main()
{
    function(6);
    return 0;
}