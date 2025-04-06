#include <iostream>

#include <map>

using namespace std;
int binary_searh(int* a,int size, int poisk) {
	int high = size - 1;
	int low = 0;
	while (low <= high){
		int mid = (low + high) / 2;
		if (a[mid] == poisk){
			return mid;
		}
		else if (a[mid] < poisk) {
			low = mid + 1;
		}
		else if (a[mid] > poisk){
			high = mid - 1;
		}
	}
	return 0;
}
int main()
{
	int a[8] = { 1,2,3,4,5, 6 ,7, 8 };
	cout<<binary_searh(a, 8, 8);
}