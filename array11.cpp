	//to find sum of all elements of an array
	#include <iostream>
	using namespace std;

	/*
	1.take values from the user
	2.use function
	3.use FOR loop in function  to add i-th  element in array
	*/

	//function to add elements
	int fun(int arr[],int n)
	{int sum=0;		
		for(int i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		return sum;
	}
			

	//DRIVER FUNCTION
	int main()
	{
		int n;
		cout << "HEY!! how many elements do you want in your ARRAY ?" << endl;
		cin >> n;
		cout << "enter the elements in your array:";

		int arr[n - 1];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

	//	for (int i = 0; i < n; i++)
		//{
			//cout << arr[i];
		//}//

	cout<<fun(arr,n);
		return 0;
	}
