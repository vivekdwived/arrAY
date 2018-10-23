	/*FOR K-th largest and K-th smallest elment in array using function 
	klarge(int array;int size;int n)...similar for k-th smallest..
	*/

	#include <iostream>
	using namespace std;

	/*
	1.for K -th largest first SORT in ascending order .. then view the arr[k]...
	2. for K -th  smallest first SORT in decending order ...then view the arr[k]
	*/



	//SORTING IN ASCENDING ORDER.....
	int ksmall(int arr[], int n,int k)
	{	int temp;

		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
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
		
	cout<<"required k-th smallest element is:"<<arr[k-1]<<endl;
	return arr[k];
	}



	//SORTING IN DECENDING ORDER......
	int klarge(int arr[], int n,int k)
	{	int temp;
		for(int i=0;i<n;i++)
		{	for(int j=0;j<n-i;j++)
			{
				if(arr[j]<arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}

	
	

	/*YEAH !! we got sorted array..
		for(int i=0;i<n;i++)
		cout<<arr[i];	*/
	cout<<"required k-th largest element is:"<<arr[k]<<endl;
	return arr[k];
	}




	//DRIVER FUNCTION
	int main()
	{
		int n,k;
		cout << "HEY!! how many elements do you want in your ARRAY ?" << endl;
		cin >> n;
		cout << "enter the elements in your array:";
		
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		
		cout<<"enter the a no. k and i shall GIVE YOU K-TH smallest element in the array:"<<endl;;
		cin>>k;
		ksmall(arr,n,k);
		klarge(arr,n,k);
	return 0;
	}


