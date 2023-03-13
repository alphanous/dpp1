#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s, s1;
    cin >> s >> s1;
    int a1[26]={0}, a2[26]={0};
    if (s.size() != s1.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            a1[s[i]-'a']++;
            a2[s1[i]-'a']++;
        }

        int flag=1;
        for(int i=0;i<s.size();i++)
        {
            if(a1[s[i]-'a']!=a2[s1[i]-'a'])
            {
                flag=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}