#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // Logic for even and odd:
    // x%2==0 ==> even
    // else odd

    // continue ==> skip
    // break ==> exit


    // for
    /*for(i=1;i<=n;i++){
        if(i==5){
            continue;
        }
        if(i%2==0){
            cout<<"Even"<<"\n";
        }
        else{
            cout<<"Odd"<<"\n";
        }
        if(i==10){
            break;
        }
    }*/


    // while
    //  int i=1;
    //  while(i<10){
    //      i++;
    //  }


    // do-while
    //  int i=11;
    //  do{
    //      cout<<i<<" ";
    //      i++;
    //  }while(i<10);

    // Q.
    // *
    // **
    // ***
    // ****
    // *****

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << '*';
    //     }
    //     cout << "\n";
    // }

    /*
    Q.
        ****
        *  *
        *  *
        ****

    int n = 4;
    for (int i = 0; i < n; i++)
    {

        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << '*';
            }
            cout << "\n";
        }
        else
        {

            for (int j = 0; j < n; j++)
            {

                if (j == 0 || j == n - 1)
                {
                    cout << '*';
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
    }
    */
        return 0;
    }