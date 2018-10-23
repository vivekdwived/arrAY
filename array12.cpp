	//TO FIND LARGEST ,SMALLEST,MEAN, MEDIAN  &MODE of elments in an array
	#include <iostream>
	using namespace std;

	

	/*     1..FUNCTION FOR LARGEST
	1.get the array.
	2.use for loop to select each element then compare  all	*/
	
	int larg(int arr[], int n)
	{
		int larg = 0;
		for (int i = 1; i < n; i++)
		{
			if (larg < arr[i])
				larg = arr[i];
		}
		return larg;
	}

	/*     2..FUNCTION FOR SMALLEST
	1.get the array.
	2.use for loop to select each element then compare  all	*/

	int small(int arr[], int n)
	{
		int small = arr[1];
		for (int i = 0; i < n; i++)
		{
			if (small > arr[i])
				small = arr[i];
		}
		return small;
	}

	/*    3...FUNCTION FOR MEAN
	1.get the aray 
	2.use for loop to add each element to a PARAMETER SUM...then divide by n */

	int mean(int arr[], int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		int mean = sum / n;
		return mean;
	}

	//  4...FUNCTION FOR MEDIAN
	// 1st sort all the elements...then if n = even or odd....
	int median(int arr[], int n)
	{	
		int i,j,temp,med;

		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j])
				{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
			}
		}
	/*this is sorted array..	cout<<"I GOT IT";
		for(i=0;i<n;i++)
		cout<<arr[i]<<endl;*/
		
		if(n%2==0)
		med=(arr[(n-2)/2]+arr[((n-2)/2)+1])/2;
		else
		med=(arr[(n-1)/2]);
	return med;
	}

	/*
	1.get the numbrs from the user
	2.1ST   USE FOR LOOP TO SELECT EACH ELEMENT use count as parameter
	3. 2ND FOR LOOP TO COMPARE ALL ELEMENTS WITH THE SELECTED ELEMENT....
	4.IF any element == TO ANY ARR[i]....SUM=SUM+1..ADD 1...
	5.PUT count =sum...AS IT IS FOR THAT SELECTED NO. IN LOOP 1....
	6.cout 	 the results...
	*/

	//    5...FUNCTION FOR MODE
	int mode(int arr[],int n)
	{	int element;
		int count=0;
		for(int i=0;i<n;i++)			//to select an element..
		{	int temp=arr[i];
			int sum=0;
			for(int j=0;j<n;j++)		//to compare each element with selected element..
			{	if(arr[j]==temp)
				sum++;
				if(sum>count)		//if sum is more then previous count..assign sum  to count.
				{	element=temp;
					count=sum;
				}
		
			}
		}
	cout<<"MODE is:"<<element<<" which appeared "<<count<<" times in array"<<endl;
	return element;
	}
	

	//DRIVER FUNCTION
	int main()
	{	int n;
		cout<<"HEY!! how many elements do you want in your array?"<<endl;	
		cin >> n;
		int arr[n ];
		cout << "enter the elemenrs in your array:" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		cout << "largest element is :" << larg(arr, n) << endl;
		cout << "smallest element is:" << small(arr, n) << endl;
		cout << "mean of elements :" << mean(arr, n) << endl;
		cout<<"median is:"<<median(arr,n)<<endl;
		mode(arr,n);

		return 0;
	}
