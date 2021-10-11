/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here

void printOrder(int arr[], int n, int k)
{
    int len1 = k, len2 = n - k;
    int arr1[k], arr2[n - k];
    for (int i = 0; i < k; i++)
        arr1[i] = arr[i];
    for (int i = k; i < n; i++)
        arr2[i - k] = arr[i];
    sort(arr1, arr1 + len1);
    sort(arr2, arr2 + len2);
    for (int i = 0; i < n; i++) {
        if (i < k)
            arr[i] = arr1[i];
 
        else {
            arr[i] = arr2[len2 - 1];
            len2--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = { 8, 7, 9 ,2 ,1 ,5 ,2, 0      };
    int k = 4;
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printOrder(arr, n, k);
 
    return 0;
}
