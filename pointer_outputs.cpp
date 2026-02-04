/* ================================================== */
/*
QUESTION 1
What is the output of the following program?
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 3) << endl;
    return 0;
}

/*
Output:
10
20
40

Explanation:
- The array `arr` is stored in contiguous memory locations.
- The array name `arr` acts as a pointer to the first element (arr[0]).
- `p` is initialized to `arr`, so `p` points to arr[0].
- `*p` dereferences `p` to get the value of arr[0] → 10.
- `*(p + 1)` moves the pointer to the next element (arr[1]) and prints 20.
- `*(p + 3)` moves the pointer 3 steps ahead to arr[3] and prints 40.
- This demonstrates pointer arithmetic where adding an integer to a pointer moves it by that many elements.
*/

/* ================================================== */
/*
QUESTION 2
*/

int arr2[] = {5, 10, 15, 20};
int *p2 = arr2 + 2;

cout << *p2 << endl;
cout << *(p2 - 1) << endl;

/*
Output:
15
10

Explanation:
- `arr2 + 2` points to the third element arr2[2], which has value 15.
- `*p2` prints the value at the current pointer → 15.
- `*(p2 - 1)` moves the pointer back by one element to arr2[1] and prints 10.
- This demonstrates that pointers can move both forward and backward within an array.
*/

/* ================================================== */
/*
QUESTION 3
*/

int arr3[5] = {1, 2, 3, 4, 5};
for(int i = 0; i < 5; i++)
    cout << *(arr3 + i) << " ";

/*
Output:
1 2 3 4 5

Explanation:
- `(arr3 + i)` gives the address of the i-th element of the array.
- `*(arr3 + i)` dereferences that address to get the value.
- Loop iterates from i = 0 to 4, printing all elements sequentially.
- Shows how arrays and pointers are closely related; array indexing is equivalent to pointer arithmetic.
*/

/* ================================================== */
/*
QUESTION 4
*/

int arr4[] = {2, 4, 6, 8};
int *p4 = arr4;
p4++;
cout << *p4 << endl;

/*
Output:
4

Explanation:
- `p4` initially points to arr4[0], which is 2.
- `p4++` moves the pointer to arr4[1], the next element.
- `*p4` dereferences the pointer to print 4.
- Demonstrates how pointer increment moves to the next element in memory.
*/

/* ================================================== */
/*
QUESTION 5
*/

int arr5[] = {7, 14, 21};
cout << arr5[1] << endl;
cout << 1[arr5] << endl;

/*
Output:
14
14

Explanation:
- `arr5[1]` accesses the second element using standard array notation → 14.
- `1[arr5]` is equivalent to `*(arr5 + 1)`; it works because `x[y]` is defined as `*(x + y)` in C++.
- Shows that pointer arithmetic and array indexing are interchangeable.
*/

/* ================================================== */
/*
QUESTION 6
*/

int arr6[] = {10, 20, 30};
int *p6 = arr6;
cout << *p6 + 1 << endl;
cout << *(p6 + 1) << endl;

/*
Output:
11
20

Explanation:
- `*p6` dereferences the pointer to give the value of arr6[0] → 10.
- `*p6 + 1` adds 1 to the value stored at arr6[0], so 10 + 1 = 11.
- `*(p6 + 1)` moves the pointer to arr6[1] (value 20) and prints it.
- Shows the difference between adding to the pointer vs. adding to the value pointed to.
*/

/* ================================================== */
/*
QUESTION 7
*/

int arr7[] = {3, 6, 9, 12};
int *p7 = arr7;
for(int i = 0; i < 4; i++)
    cout << *(p7 + i) << " ";

/*
Output:
3 6 9 12

Explanation:
- `p7` points to arr7[0] initially.
- Loop increments i from 0 to 3.
- `(p7 + i)` moves the pointer to the i-th element each time.
- `*(p7 + i)` dereferences it to print the value.
- Demonstrates sequential access of array elements using a pointer.
*/

/* ================================================== */
/*
QUESTION 8
*/

int arr8[] = {1, 2, 3};
int *p8 = arr8;
for(int i = 0; i < 3; i++)
    cout << *(p8++) << " ";

/*
Output:
1 2 3

Explanation:
- `*(p8++)` prints the value pointed by p8 first, then increments the pointer.
- First iteration: prints 1, p8 moves to arr8[1].
- Second iteration: prints 2, p8 moves to arr8[2].
- Third iteration: prints 3, p8 moves past the array (not used further).
- Demonstrates post-increment on pointers.
*/

/* ================================================== */
/*
QUESTION 9
*/

int arr9[] = {10, 20, 30};
int *p9 = arr9;
cout << p9 << endl;
cout << p9 + 1 << endl;

/*
Output:
(Address of arr9[0])
(Address of arr9[1])

Explanation:
- `p9` stores the address of the first element of arr9.
- `p9 + 1` moves to the next element (arr9[1]) address.
- Printing a pointer shows the memory address.
- Shows how pointer arithmetic affects addresses in memory.
*/

/* ================================================== */
/*
QUESTION 10
*/

char arr10[] = "ABC";
char *p10 = arr10;
cout << p10 << endl;
cout << p10 + 1 << endl;

/*
Output:
ABC
BC

Explanation:
- `arr10` is a character array with a null terminator '\0'.
- `cout << p10` prints the string starting at p10 → "ABC".
- `cout << p10 + 1` prints the string starting from the second character → "BC".
- Demonstrates pointer arithmetic on character arrays (strings).
*/

/* ================================================== */
/*
QUESTION 11
*/

struct Data {
    int x;
    int y;
};

Data arr11[] = {{1,2}, {3,4}, {5,6}};
Data *p11 = arr11;
cout << p11->x << endl;
cout << (p11 + 1)->y << endl;

/*
Output:
1
4

Explanation:
- `p11->x` accesses the x member of the first structure → 1.
- `p11 + 1` points to the second structure in the array.
- `(p11 + 1)->y` accesses the y member of the second structure → 4.
- Shows how pointers can access structure members inside arrays.
*/

/* ================================================== */
/*
QUESTION 12
*/

struct Item {
    int price;
};

Item arr12[] = {{100}, {200}, {300}};
Item *p12 = arr12;
cout << p12->price << endl;
cout << (p12 + 2)->price << endl;

/*
Output:
100
300

Explanation:
- `p12` points to arr12[0].
- `p12->price` prints the price of the first element → 100.
- `p12 + 2` points to arr12[2].
- `(p12 + 2)->price` prints the price of the third element → 300.
- Demonstrates pointer arithmetic with arrays of structures.
*/
