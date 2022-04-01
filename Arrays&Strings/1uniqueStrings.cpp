
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    #define p 1000000007
    #define inf 1e18
    #define endl "\n"
    #define pb emplace_back
    #define vi vector<int>
    #define vll vector<ll>
    #define vs vector<string>
    #define pii pair<int, int>
    #define pll pair<ll, ll>
    #define ump unordered_map
    #define mp map
    #define pq_max priority_queue<ll>
    #define pq_min priority_queue<ll, vll, greater<ll>>
    #define ff first
    #define ss second
    #define mid(l, r) (l + (r - l) / 2)
    #define loop(i, a, b) for (int i = (a); i <= (b); i++)
    #define looprev(i, a, b) for (int i = (a); i >= (b); i--)

    int isUnique(string s){
        if(s.size() >  128) return false;

        char arr[128] ={0};
        for(int i=0; i<s.size(); i++){
            int idx = s[i]-'a';
            if(arr[idx] != 0)
                return false;
            else
                arr[idx] += 1;
        }
        return true;
    }

    //O(nlogn) appraoch
    int isUnique2(string s){
        sort(s.begin(), s.end());
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]) 
                return false;
        }
        return true;
    }

    // int isUniqueChars(string str)
    // {
    //     int checker = 0;
    //     for (int i = 0; i < str.length(); i++)
    //     {

    //         int val = str[i] - 'a';
    //         cout << (1 << val) << " ";
    //         if ((checker & (1 << val)) > 0)
    //         {
    //             return false;
    //         }
    //         checker |= (1 << val);
    //     }
    //     return true;
    // }

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        cout<<isUnique("abdegf")<<endl;
        cout<<isUnique2("abdefghhf")<<endl;

        return 0;
    }

