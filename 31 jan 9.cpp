#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<count(str.begin(),str.end(),'a')<<endl;
    fill(str.begin(),str.end(),'z');
    cout<<str<<endl;

    return 0;

}
