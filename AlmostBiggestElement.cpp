/*Description

Suppose a sequence of integer numbers is given. Find the k-th biggest element.

Input
 Quantity of the members in the sequence, a positive integer.
 The number k, a positive integer.
  Four positive integers S, A, B, M. Using numbers S, A, B, M, the following pseudocode will generate the sequence of numbers.
X[0] = S
for i = 1 to n-1:
 X[i] = (A * X[i-1] + B) mod M*/


#include <iostream>
#include <vector>
#include <algorithm>
void inputArray(const int& n, int& S, int& A, int& B, int& M, std::vector<int>& X)
{
	std::cin >> S;
	std::cin >> A;
	std::cin >> B;
	std::cin >> M;
	X[0] = S;
	for (int i{ 1 }; i < X.size(); i++)
	{
		X[i] = (A * X[i - 1] + B) % M;
	}
}

int main()
{
	int n;
	std::cin >> n;
	int k;
	std::cin >> k;
	int S, A, B, M;
	std::vector<int> X(n);
	inputArray(n, S, A, B, M, X);
	sort(X.begin(), X.end());
	std::cout << X[X.size() - k];
}
