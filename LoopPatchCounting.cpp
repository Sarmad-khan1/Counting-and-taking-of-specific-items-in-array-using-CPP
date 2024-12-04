#include<iostream>
using namespace std;
main()

{
	int size = 12 ;
	int arr[size] = {4, 2, 4, 3, 3, 3, 1, 1, 2, 2, 1, 1};
	int ind1 = 0;
	int ind2 = 1;
	int ind3 = 2;
	int sum = 0;
	
	for(int x = 0; x<size/3; x++)
	{
		sum = (arr[ind1]*arr[ind2]*arr[ind3]) + sum;
		ind1 = ind1 + 3;
		ind2 = ind2 + 3;
		ind3 = ind3 + 3;
	}
	cout << sum << " ";
}