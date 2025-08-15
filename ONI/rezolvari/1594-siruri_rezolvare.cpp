#include <bits/stdc++.h>

using namespace std;

bool distinct(string s)
{
    set<char> st;
    
    for(int i = 0; i < s.size(); i++)
        st.insert(s[i]);
    
    if(st.size() == s.size())
        return 1;
    
    return 0;
}

string transform(string s)
{
    string ans;
    
    set<char> st;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(st.find(s[i]) == st.end())
        {
            ans += s[i];
            st.insert(s[i]);
        }
    }
    return ans;
    
}
int main()
{
    
    ifstream cin ("siruri.in");
    ofstream cout ("siruri.out");
    
    int c;
    cin >> c;
    
    int n;
    cin >> n;
    
    vector<string> v(n);
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    if(c == 1)
    {
        int ans = 0;
        
        for(int i = 0; i < n; i++)
            if(distinct(v[i]))
                ans++;
        
        cout << ans << '\n';
        return 0;
        
    }
    
    vector<string> vs;
        
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
            vs.push_back(v[i]);
        else
        {
            string ult = vs.back();
            if(v[i][0] == ult.back())
            {
                ult += v[i];
                ult = transform(ult);
                vs.back() = ult;
            }
            else
            {
                vs.push_back(v[i]);
            }
        }
    }
    
    
    if(c == 2)
        cout << vs.size() << '\n';
    
    if(c == 3)
    {
        int mx = 0;
        int cnt = 0;
        for(int i = 0; i < vs.size(); i++)
        {
            vs[i] = transform(vs[i]);
            if(vs[i].size() > mx)
                mx = vs[i].size(), cnt = 1;
            else
                if(vs[i].size() == mx)  
                    cnt++;
        }
        cout << mx << " " << cnt << '\n';
    }
}