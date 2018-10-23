	//to merge two arrays and finding maxima and minima,,,using function
	#include <iostream>
	using namespace std;

	/*
	1.get 2 arrays 
	2.redefine a new array with size ....size1 + size2.
	3.sort this new array 
	*/

	//finding maxima...

		/*     1..FUNCTION FOR LARGEST
		1.get the array.
		2.use for loop to select each element then compare  all	*/
	
		int larg(int merge[], int c)
		{
			int larg = 0;
			for (int i = 1; i < c; i++)
			{
				if (larg < merge[i])
					larg =merge[i];
			}
			return larg;
		}


	//finding minima....
	 
	   /* 2..FUNCTION FOR SMALLEST
		1.get the array.
		2.use for loop to select each element then compare  all	*/

		int small(int merge[], int c)
		{
			int small = merge[1];
			for (int i = 0; i < c; i++)
			{
				if (small >merge[i])
					small = merge[i];
			}
			return small;
		}


	//DRIVER FUNCTION
	int main()
	{
		int m;
		cout << "HEY!! how many elements do you want in your 1st ARRAY ?" << endl;
		cin >> m;
		cout << "enter the elements in your array:";

		int a[m];
		for (int i = 0; i < m; i++)
		{
		
	cin >> a[i];
		}
	
	
		int n;
		cout << "HEY!! how many elements do you want in your 2nd ARRAY ?" << endl;
		cin >> n;
		cout << "enter the elements in your array:";

		int b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		

		int merge[m+n];
		for(int i=0;i<(m+n);i++)
		{	if (i<m)
			merge[i]=a[i];
			else
			merge[i]=b[i-m];
		}
		cout<<"new array has elements :"<<endl;		
		for(int i=0;i<(m+n);i++)
		{cout<<merge[i]<<endl;}
		int c=m+n;
	
		cout<<"smallest element in new merged array is:"<<small(merge,c)<<endl;
		cout<<"largest element in new merged array is:"<<larg(merge,c);
	return 0;
	}
