#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=1;
    for (int i =1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout << "  \t";
        }
        for(int j=0;j<2*i-1;j++)
        {
            cout <<cnt<<"\t";
                cnt++; 
        }
        cout <<endl;
    }
    return 0;
}  