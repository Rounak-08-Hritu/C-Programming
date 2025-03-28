#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<str.size()<<endl;
    str.push_back('a');
    str.push_back('b');
    str.push_back('x');
    cout<<str<<endl;
    cout<<str.size()<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.size()<<endl;
}
