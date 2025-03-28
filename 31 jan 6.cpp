#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    sort(str.rbegin(),str.rend());
    cout<<str<<endl;
    cout<<*(str.begin()+5)<<endl;
}
