#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout << *max_element(str.begin(),str.end()) << endl;
    cout << *min_element(str.begin(),str.end()) << endl;
    return 0;
}
