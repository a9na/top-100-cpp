// c++ program to convert decimal to binary
#include <bitset>
#include <iostream>

using namespace std;

int main()
{
    int decimal = 7;

    // simplest method to convert decimal to binary
    bitset<32> binary(decimal);

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
