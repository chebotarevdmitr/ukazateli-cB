#include <iostream>
using namespace std;

int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

int main()
{
    int numbers[5] = { 5,4,-2,29,6 };
    cout << "Min is =" << getMin(numbers, 5);

    system("pause>0");
    return 0;
}