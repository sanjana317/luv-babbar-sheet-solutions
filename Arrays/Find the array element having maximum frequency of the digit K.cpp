// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the count of
// digits, k in the given number n
int countFreq(int N, int K)
{

    // Stores count of occurrence
    // of digit K in N
    int count = 0;

    // Iterate over digits of N
    while (N > 0)
    {

        // If current digit is k
        if (N % 10 == K)
        {

            // Update count
            count++;
        }

        // Update N
        N = N / 10;
    }
    return count;
}

// Utility function to find an array element
// having maximum frequency of digit k
int findElementUtil(int arr[], int N, int K)
{

    // Stores frequency of
    // digit K in arr[i]
    int c = 0;

    // Stores maximum frequency of
    // digit K in the array
    int max = 0;

    // Stores an array element having
    // maximum frequency of digit k
    int ele;

    // Initialize max
    max = 0;

    // Traverse the array
    for (int i = 0; i < N; i++)
    {

        // Count the frequency of
        // digit k in arr[i]
        c = countFreq(arr[i], K);

        // Update max with maximum
        // frequency found so far
        if (c > max)
        {
            max = c;

            // Update ele
            ele = arr[i];
        }
    }

    // If there is no array element
    // having digit k in it
    if (max == 0)
        return -1;
    else
        return ele;
}

// Function to find an array element
// having maximum frequency of digit k
void findElement(int arr[], int K, int N)
{

    // Stores an array element having
    // maximum frequency of digit k
    int ele = findElementUtil(arr, N, K);

    // If there is no element found
    // having digit k in it
    if (ele == -1)
        cout << "-1";

    else

        // Print the element having max
        // frequency of digit k
        cout << ele;
}

// Driver Code
int main()
{

    // The digit whose max
    // occurrence has to be found
    int K = 1;

    // Given array
    int arr[] = {1, 1111, 111, 11};

    // Size of array
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    findElement(arr, K, N);

    return 0;
}
