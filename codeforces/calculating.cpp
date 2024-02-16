#include<bits/stdc++.h>

using namespace std;




int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin>>n;
    long long int e,o;

    if(n%2==0){
        e = n/2;
        o = n/2;
    }
    else{
        e = (n-1)/2;
        o = (n+1)/2;
    }

    long long int even =  e*(e+1);
    long long int odd  = o*o;
    odd = odd * -1;

    long long int balsal = odd + even;
    cout<<balsal<<'\n';

    return 0;
}