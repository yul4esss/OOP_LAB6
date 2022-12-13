#include <iostream>
#include <time.h>

using namespace std;

//template function that finds max element of array

template <typename T> 
	T Max(T *Array, int size) {

		T max = Array[0];
		for (int i = 0; i < size; i++)
			if (Array[i] > max)
				max = Array[i];
		return max;

}

int main() {
	int size;

	cout << "--------Set size of array---------" << endl;
	cin >> size;

	int *Array = new int[size];

	srand(time(0));

	for (int i = 0; i < size; i++) {
		Array[i] = -10 + rand() % 35;
	}

	cout << "--------------Your array--------------" << endl;
	for (int i = 0; i < size; i++) {
		cout << *(Array+i) << "\t";
	}

	cout << "\n\nMax element of array: ";
	int max = Max(Array, size);
	cout << max << endl;

	delete [] Array;

	return 0;
}