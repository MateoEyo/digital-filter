// Digital filter

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int array[10] = {0,1,1,1,2,2,2,1,1,1};
    int result[10];
    int length = sizeof(array) / sizeof(array[0]);

    for (size_t i = 1; i < length; i++) {
        result[i] = abs(array[i] - array[i - 1]);
        cout << result[i];
    }

    return 0;
}