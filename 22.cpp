#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // Space Printing
        for (int j = 1; j <= n-i; j++)
        {
            cout << "  ";
        }
        // left star Printing
        for (int j = i; j <=2*i-1; j++)
        {
            cout << j <<  " " ;
        }


        //  right star Printing
         for (int j =2*i-2; j >=i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}