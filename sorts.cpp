#include <iostream>

const int size = 5;
void bubble(int* arr, int size);
//void insertion(int* arr, int size);
//void selection(int* arr, int size);
//void quick(int* arr, int size);

int main()
{
	int arr[size];
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	bubble(arr, size);
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i];
	}
}

void bubble (int* arr, int size)
{	
	bool flag = false;
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1];
				flag = true;
			}
		}
			if (!flag) {
				break;
				}
	}

}
