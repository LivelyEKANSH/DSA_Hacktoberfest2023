#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of series: ";
    cin>>n;

    for (int i =0; i <n ; i++)
    {
        for (int j = 0; j<n ; j++)
        {
            if (j<=i)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   " ;
            }
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;

}



OUTPUT:

Enter the length of series: 5
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
