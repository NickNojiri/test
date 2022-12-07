#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& aVector);

int main()
{
	// (1) Using the default constructor

	vector<int> vector1;
	vector1.push_back(10);
	vector1.push_back(80);
	vector1.push_back(54);

	cout << "vector1 = ";
	printVector(vector1);

	// =================================================
	// (2) Using the copy constructor

	vector<int> vector2(vector1);

	cout << "\nvector2 = ";
	printVector(vector2);

	// =================================================
	// (3) Using the initializer list constructor with values

	vector<int> vector3{ 130, 740, 320, 890 };
	vector<int> vector4 = { 13, 74, 32, 89 };	// same as statement above

	cout << "\nvector3 = ";
	printVector(vector3);

	// =================================================
	// (4) Using the range constructor

	vector<int>::iterator iter = vector3.begin() + 2;
	vector<int> vector5(iter, vector3.end());

	cout << "\nvector5 = ";
	printVector(vector5);

	int array1[] = { 10, 11, 12, 13, 14, 15 };
	vector<int> vector6(array1, array1 + 3);

	cout << "\narray1 = ";
	for (auto i : array1) cout << i << " ";
	cout << "\n";
	cout << "\nvector6 = ";
	printVector(vector6);

	// Why was 13 NOT printed?
	// Remember that the interval is [ ... ) where the 
	// square bracket includes the element, but the 
	// ending parenthesis does not include the element.

	cout << "\n";
	return 0;
}

void printVector(const vector<int>& aVector)
{
	for (const auto& elem : aVector)
		cout << elem << " ";

	cout << "\n";
}

