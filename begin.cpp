#include <begin.h>

int your_number(const std::string_view message) {
	std::cout << message << std::endl;
	std::cout << "Please enter your favorite number: ";
	int number;
	std::cin >> number;
	std::cout << "Hey! This is your number: ";
	return number;
}
void bubble_sort(const std::span<int32_t> v) {

	for (int i = 0; i < v.size() - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < v.size() - 1 - i; j++) {
			if (v[j + 1] < v[j]) {
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped) break;

	}
}

void insertion_sort(const std::span<int32_t> v) {
	int size = v.size();
	for (int i = 1; i < v.size(); i++) {
		int anchor = v[i];
		int j = i - 1;
		while (j >= 0 && v[j] > anchor) {
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = anchor;
	}
}

void view(const std::span<char> v) {
	for (const signed char i : v) printf("%d", i);
	std::cout << std::endl;
}

void fav_numbers() {
	short a, b, c;
	std::cin >> a >> b >> c;
	std::cout << a << " " << b << " " << c << " ";
	std::cout << std::endl;
}

inline int sum(std::span<const int> vec) {
	int sum = 0;
	for (int i : vec) sum += i;
	return sum;
}

inline int number() {
	short a, b, c;
	std::cin >> a >> b >> c;
	std::cout << a << " " << b << " " << c;
	return a;
}

static void print() {
	std::cout << "Hello world!";
}