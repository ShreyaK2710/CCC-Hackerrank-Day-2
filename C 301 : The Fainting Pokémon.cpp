#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;





int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int p,n,count=1,flag=1;

    cin>>p>>n;

    int arr[n];

    for(int i=0;i<n;i++)

        cin>>arr[i];

    int d = p;

    for(int i=0;i<n;i++)

    {

        if(arr[i]>=p)

        {

            cout<<-1;

            flag = 0;

            break;

        }

        else if(arr[i]<d)

            d-=arr[i]; 



        else

        {

            d = p;


            count++;

            i--;

        }



    }

    if(flag)

        cout<<count<<endl;

    return 0;

}
