#include <iostream>
using std::cout;
using std::endl;
using std::cin;

// Апаратна Виключна ситауція 
/*
int main()
{

    int a = 0, b = 0;
    float c = 0;

    cout << "Введіть два числа: ";
    cin >> a >> b;

    try {
        c = a / b;
    }
    catch (...) {
        cout << "Division by zero!\n";
    }

    cout << "Result: " << c << std::endl;
}
*/


float average(int arr[], int size) {
	if (size == 0) throw "Array is empty!";
	if (arr == nullptr) throw "Array is empty!";

	int amount = 0;
	float sum = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			amount++;
			sum += arr[i];
		}
	}
	if (amount == 0) throw "Odd numbers not found!";

	return sum / amount;
}

int main() {
	int A[5]{ 4, 2, 4, 76, 6 };
	int B[5]{ 1, 2, 7, 76, 6 };

	float a1 = 0, b1 = 0;

	try { a1 = average(A, 5); }	catch (const char* m) { cout << m << endl; }
	try { b1 = average(B, 5);	}	catch (const char* m) { cout << m << endl; }
	try { a1 = average(nullptr, 0);	}	catch (const char* m) { cout << m << endl; }

	cout << "Результат: " << a1 << endl;
	cout << "Результат: " << b1 << endl;

}
