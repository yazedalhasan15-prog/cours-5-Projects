
#include <iostream>   
#include <string>     
#include <cstdlib>    
#include <ctime>
using namespace std;

int readPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int RandomNumber(int from, int to)
{
    int RandNum = rand() % (to - from + 1) + from;

    return RandNum;
}

void PrintGenerateKeys(int Number)
{

    for (int i = 1;i <= Number;i++)
    {
        cout << "Key [" << i << "]: ";
        for (int j = 1; j <= 4;j++)
        {
            cout << (char)RandomNumber(65, 90);
            cout << (char)RandomNumber(65, 90);
            cout << (char)RandomNumber(65, 90);
            cout << (char)RandomNumber(65, 90);
            
            if (j <= 3)
            {
                cout << "-";
            }
        }
        cout << "\n";
        
    }
}



int main()
{
    srand((unsigned)time(NULL));

    PrintGenerateKeys(readPositiveNumber("Please enter a positive number\n"));

    return 0;
}

