# POSSIBLE EQUAL MAXIMUM SUM ASSIGNMENT


##### Name : Janak Mandavgade
##### Sec  : A
##### Roll No : 43
##### Branch : CSE - 1
##### Subject : DAA 

### PROBLEM STATEMENT

*You are given 3 stacks. Find the maximum sum possible such that sum of elements of each stack are equal and maximum.You can only remove elements from top of the stack*


### Algorithm

1. Make 3 stacks.
2. Initialise variables for sum of stack,top of stack etc.
3. Find the sum of each of the stacks using loops.
4. Check if stacks are empty or not. If empty go to step 
5. Check if sum of stacks are equal or not.If equal go to step 
6. Check using an infinite loop which stack has maximum sum. Then the stack which is found ,it's sum is decreased by the no present at top of stack and the        value of top is increased. Go to step 3.
7. Return 0 if empty ,or if equal sum found then return the sum.

### Example 

Lets take the stacks as shown in the image .

Sum of stack1 = 8 , sum of stack2 = 9 , sum of stack3 = 12

Now if we remove the top element from stack 3 , i.e) 2 ,we get sum of stack3 as 12 - 2 = 10

if we remove the top element from stack 3 , i.e) 5 ,we get sum of stack3 as 10 - 5 = 5

if we remove the top element from stack 2 , i.e) 4 ,we get sum of stack3 as 9 - 4 = 5

if we remove the top element from stack 1 , i.e) 3 ,we get sum of stack3 as 8 - 3 = 5

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Find-maximum-sum-possible-equal-sum-of-three-stacks-2.png)
