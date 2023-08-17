//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int zeroes = 0, ones = 0, twos = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                zeroes++;
            else if (a[i] == 1)
                ones++;
            else
                twos++;
        }
        for (int i = 0; i < zeroes; i++)
        {
            a[i] = 0;
        }
        for (int i = zeroes; i < ones + zeroes; i++)
        {
            a[i] = 1;
        }
        for (int i = ones + zeroes; i < ones + zeroes + twos; i++)
        {
            a[i] = 2;
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
// void sort012(int a[], int n)
// {
//     int l = 0, mid = 0, h = n - 1;
//     while (mid <= h)
//     {
//         if (a[mid] == 0)
//         {
//             swap(a[l++], a[mid++]);
//         }
//         else if (a[mid] == 1)
//             mid++;
//         else
//         {
//             swap(a[mid], a[h--]);
//         }
//     }
// }