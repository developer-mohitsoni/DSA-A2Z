//! Program the Allocate Minimum Number of Pages (Allocate Books)

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C =>  O(N * (sum(arr[])-max(arr[])+1))

// Reason:- We are using a loop from max(arr[]) to sum(arr[]) to check all possible numbers of pages. Inside the loop, we are calling the countStudents() function for each number. Now, inside the countStudents() function, we are using a loop that runs for N times.

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int countStudents(vector<int> &arr, int pages)
{
    int n = arr.size(); // size of array.
    int students = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesStudent + arr[i] <= pages)
        {
            // add pages to current student
            pagesStudent += arr[i];
        }
        else
        {
            // add pages to next student
            students++;
            pagesStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int> &arr, int n, int m)
{
    // book allocation impossible:
    if (m > n)
        return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    for (int pages = low; pages <= high; pages++)
    {
        if (countStudents(arr, pages) == m)
        {
            return pages;
        }
    }
    return low;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m;
    cout << "Enter the number of students: ";
    cin >> m;

    int ans = findPages(arr, n, m);

    cout << "The answer is: " << ans << "\n";

    return 0;
}