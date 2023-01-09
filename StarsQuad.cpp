#include <iostream>

using namespace std;

int InputSide()
{
	int side;
	cin >> side;

	return side;
}

void Stars(int length, int height)
{
	for (int r = 0; r < length; r++)
	{
		for (int c = 0; c < height; c++)
		{
			if (r == 0 || c == 0 || r == length - 1 || c == height - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

int main()
{
	setlocale(0, "");

	int length{}, height{};

	cout << "Введите ширину четырехугольника: " << endl;
	height = InputSide();

	cout << "Введите высоту четырехугольника: " << endl;
	length = InputSide();

	Stars(height, length);

	return 0;
}