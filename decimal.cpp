#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int i = 0 ,ans = 0;
    while(n)
    {
        int digit = n%10;
        if(digit==1)
            ans = ans + pow(2, i);
        n/=10;
        i++;
    }
    cout<<ans;
    return 0;
} 
