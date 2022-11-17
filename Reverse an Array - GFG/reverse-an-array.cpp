#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
 {
	int t =0 ;
	int n=0;
	cin>>t;
	while(t--){
	   cin>>n;
	   int arr[n];
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   
	   reverseArray(arr,0,n-1);
	   printArray(arr,n);
	   
	}
	return 0;
}