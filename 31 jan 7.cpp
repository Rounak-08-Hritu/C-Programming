#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    str.insert(str.begin(),'a');
    cout<<str<<endl;
    str.insert(str.begin()+3,'z');
    cout<<str<<endl;
    return 0;
}
