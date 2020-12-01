// VacuumlabInterview.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];
    int sumAl = 0; //sum after loop

    cout << "Insert length of the sequence of numbers to consider" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Insert numbers in subsequence (one by one)" << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }

        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];
            if (sum == 0)
            {
                sumAl = sum;
                break;
            }

        }
    }
    if (sumAl == 0)
    {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
