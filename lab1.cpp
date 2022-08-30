#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>
void printDump(const T& x, int N) {
    const unsigned char* p = reinterpret_cast<const unsigned char*>(&x);
    cout << "Value = " << x << endl << "Dump:" << hex << uppercase << setfill('0');
    for (size_t i = 0; i < N; ++i)
    {
        cout << setw(2) << static_cast<unsigned>(*(p + i));
    }
    cout << dec << endl << endl;
}

int main()
{
    int x = 0x8A8B8C8D;
    int y = 6;
    int z = -3;
    int mas[3] = { x,y,z };
    double d = 6;
    printDump(x, 4);
    printDump(y, 4);
    printDump(z, 4);
    printDump(mas, 12);
    printDump(d, 8);
    return 0;
}
