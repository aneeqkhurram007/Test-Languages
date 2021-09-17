#include <iostream>
#include <fstream>
using namespace std;
void take_input(ifstream &IN, int &N)
{

    IN >> N;
}
void int2binary(int *N, int *&binary, int &SizeOfBinary)
{
    int N[32];

    // counter for binary array
    int i = 0;
    while (N > 0)
    {

        // storing remainder in binary array
        N[i] = N[i] % 2;
        N[i] = N[i] / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << N[j];
}
void write_data(ofstream &OUT, int *data, int sizeOFBinary)
{
    for (int i = 0; !OUT.eof(); i++)
    {
        OUT << data[i];
        /* code */
    }
}
int main()
{
    ifstream file;
    ofstream out;
    file.open("file.txt");
    out.open("output.txt");
    int *arr = new int[10]{0};
    int i = 0;
    while (!file.eof())
    {
        take_input(file, arr[i]);
        i++;
    }
    write_data(out, arr, 5);
    return 0;
}