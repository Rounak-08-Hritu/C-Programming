#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<*find(str.begin(),str.end(),'z')<<endl;
    cout<<find(str.begin(),str.end(),'a')-str.begin()<<endl;
    return 0;
}
