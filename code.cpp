#include <bits/stdc++.h>
using namespace std;

int pems(int st1[], int st2[], int st3[], int s1, int s2, int s3)
{

    // Find out the minimum of the sum of stacks
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < s1; i++)
    {
        sum1 += st1[i];
    }

    for (int i = 0; i < s2; i++)
    {
        sum2 += st2[i];
    }

    for (int i = 0; i < s3; i++)
    {
        sum3 += st3[i];
    }

    int t1 = 0, t2 = 0, t3 = 0;

    while (1)
    {
        // sum of even 1 stak is empty then sum would be 0;
        if (t1 == sum1 || t2 == sum2 || t3 == sum3)
        {
            return 0;
        }

        // if sum becomes equal for all three stacks
        if (sum1 == sum2 && sum2 == sum3)
        {
            return sum1;
        }

        // if currently the maximum sum is of stack 1 and sum of all three stacks is not zero
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= st1[t1++];
        }

        // if currently the maximum sum is of stack 3 and sum of all three stacks is not zero
        else if (sum3 >= sum2 && sum3 >= sum1)
        {
            sum3 -= st3[t3++];
        }
        // if currently the maximum sum is of stack 2 and sum of all three stacks is not zero
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= st2[t2++];
        }
    }
}

int main()
{
    int st1[] = {3, 2, 1, 1, 1};
    int st2[] = {4, 3, 2};
    int st3[] = {1, 1, 4, 1};

    int s1 = sizeof(st1) / sizeof(st1[0]);
    int s2 = sizeof(st2) / sizeof(st2[0]);
    int s3 = sizeof(st3) / sizeof(st3[0]);

    cout <<"The maximum Equal Possible Sum achievable is : "<< pems(st1, st2, st3, s1, s2, s3) << endl;
    ;
}