#include <iostream>
#include <iterator>
#include <deque>
using namespace std;

int main()
{
    deque<int> Storage;

    int Input;
    for (int i = 0; i <= 4; i++)
    {
        cin >> Input;
        Storage.push_back(Input);
    }

    //deque<int>::iterator IT;
    //int Sum = 0;
    //for(IT = Storage.begin(); IT != Storage.end(); IT++)
    //{
    //    Sum+=*IT;
    //}
    //cout << Sum;

    int Sum = 0;
    for(int i = 0; i <= 4; i++)
    {
        Sum += Storage[i];
    }
    cout << Sum << "\n";

    int Result;
    if (Sum % 5 == 0 && Sum > 0)
    {
        Result = (Sum / 5);
        cout << Result;
    }
    else
    {
        cout << -1 << endl;
    }



}
