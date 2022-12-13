#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = { 10, 11, 12, 13, 14, 15 };

	cout << "Vector is: \n";
	vector<int>::const_iterator iter = v.begin();	
	vector<int>::const_iterator iterEnd = v.end();
	while (iter != iterEnd)
	{
		cout << *iter << " ";
		++iter;
	}
	cout << "\n";

	iter = v.begin();
	cout << "\niter = v.begin() => " << *iter << "\n";		
	++iter;
	cout << "++iter => " << *iter << "\n";					
	--iter;
	cout << "--iter => " << *iter << "\n";					
	++iter;
	cout << "++iter => " << *iter << "\n";					
	cout << "iter[2] => " << iter[2] << "\n";				
	cout << "*iter => " << *iter << "\n";				
	cout << "*(iter + 2) => " << *(iter + 2) << "\n";		
	cout << "*iter => " << *iter << "\n";	
	cout << "\n";

	vector<int>::const_iterator firstIter = v.begin();
	vector<int>::iterator secondIter = v.begin() + 1;
	cout << "firstIter = v.begin() => " << *firstIter << "\n";
	cout << "*secondIter = v.begin() + 1 => " << *secondIter << "\n";
	if (secondIter == firstIter)
		cout << "secondIter == firstIter? => TRUE\n";
	else
		cout << "secondIter == firstIter? => FALSE\n";

	cout << "\nChange value of secondIter, BUT do not change position\n";
	*secondIter = 10;
	cout << "Vector is now:\n";
	for (iter = v.begin(); iter != iterEnd; ++iter)
		cout << *iter << " ";
	cout << "\n";
	cout << "*firstIter => " << *firstIter << "\n";
	cout << "*secondIter => " << *secondIter << "\n";
	if (secondIter == firstIter)
		cout << "secondIter == firstIter? => TRUE\n";
	else
		cout << "secondIter == firstIter? => FALSE\n";
	
	cout << "\nMove both iterators to index 3 and compare again\n";
	firstIter += 3;
	secondIter += 2;
	cout << "*firstIter => " << *firstIter << "\n";
	cout << "*secondIter => " << *secondIter << "\n";
	if (secondIter == firstIter)
		cout << "secondIter == firstIter? => TRUE\n";
	else
		cout << "secondIter == firstIter? => FALSE\n";

	cout << "\n";

	cout << "\n";
	system("Pause");
	return 0;
}