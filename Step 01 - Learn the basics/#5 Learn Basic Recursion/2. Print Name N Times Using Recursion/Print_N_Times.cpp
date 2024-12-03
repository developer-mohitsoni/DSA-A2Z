#include <bits/stdc++.h>
using namespace std;

void display(vector<string> &solve, int x)
{
	// base case
	if (x == 0)
		return;

	solve.push_back("Coding Ninjas");

	display(solve, x - 1);
}
vector<string> printNTimes(int n)
{
	// Write your code here.
	vector<string> ans;

	display(ans, n);

	return ans;
}
int main()
{
	int n;

	cout << "Enter The Number:- " << endl;
	cin >> n;

	vector<string> name = printNTimes(n);

	for (auto it : name)
		cout << it << ", ";
}