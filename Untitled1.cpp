#include<iostream>    
 
using namespace std;
int main()
{  //Given array
   int  arr[] = {1,2,3,4,5,6,7,8,9,0};
   
//   int len = *(&arr + 1) - arr;
	int len = sizeof(arr) / sizeof(arr[0]);

   //*(&arr + 1) is the address of the next memory location
   // just after the last element of the array
   
   cout << "The length of the array is: " << len;
   
   return 0;
}
