#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

template<typename T>
int BinarySearch(const T list[], T key, int arraySize) {
 int low = 0;
 int high = arraySize - 1;
 while (high >= low) {
  int mid = (low + high) / 2;
  if (key < list[mid])
   high = mid - 1;
  else if (key == list[mid])
   return mid;
  else
   low = mid + 1;
 }
 return -1;
}

template<typename T>
void InsertionSort(T list[], int listSize) {
 for (int i = 1; i < listSize; i++) {
  T currentElement = list[i];
  int k;
  for (k = i - 1; k >= 0 && list[k] > currentElement; k--) {
   list[k + 1] = list[k];
  }
  list[k + 1] = currentElement;
 }
}

template<typename T>
void printArray(const T list[], int listSize)
{
 for (int i = 0; i < listSize; i++)
 {
  if (i < listSize - 1)
   cout << list[i] << ",";
  else
   cout << list[i] << " ";
 }
 cout << endl;
}

int main() {
 double a, b, c;
 cin >> a >> b >> c;
 double d, e, f;
 cin >> d >> e >> f;
 double list1[] = { 1,5,6,2,3,7,9,8,4 };
 cout << "From:";
 printArray(list1, 9);
 InsertionSort(list1, 9);
 cout << "To:";
 printArray(list1, 9);
 cout << a << " at " << BinarySearch(list1, a, 9) << endl;
 cout << b << " at " << BinarySearch(list1, b, 9) << endl;
 cout << c << " at " << BinarySearch(list1, c, 9) << endl;

 cout << endl;
 cout << endl;

 double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
 cout << "From:";
 printArray(list2, 9);
 InsertionSort(list2, 9);
 cout << "To:";
 printArray(list2, 9);
 cout << d << " at " << BinarySearch(list2, d, 9) << endl;
 cout << e << " at " << BinarySearch(list2, e, 9) << endl;
 cout << f << " at " << BinarySearch(list2, f, 9) << endl;

 system("pause");
}