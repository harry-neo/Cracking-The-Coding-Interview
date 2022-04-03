
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

    bool isPermuatation(string str1, string str2){
        char arr[128] = {0};
        for(int i=0; i<str1.size(); i++){
            int val = str1[i]-'a';
            arr[val] +=1;
        }
        for(int i=0; i<str2.size(); i++){
            int val = str2[i] - 'a';
            arr[val] -= 1;
        }
        for(int i=0; i<128; i++){
            if(arr[i] == 1 ||arr[i] == -1)
                return false;
        }
        return true;
    }

    //O(nlogn) approach
    bool checkPermutation(string str1, string str2){
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        // for(int i=0 ; i<str1.size() && i<str2.size(); i++){
        //     if(str1[i] != str2[i])
        //         return false;
        // }

        int i=0;
        while(i<str1.size() && i<str2.size()){
            if(str1[i] != str2[i])
                return false;
            i++;
        }

        return true;
    }

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string str1 = "abzfte";
        string str2 = "abzfte";

        if(checkPermutation(str1, str2))
            cout<<"Yes, Permutation\n";
        else
            cout<<"No, not permutation\n";


        return 0;
    }

    /*
    2
    5
    1 3 5 7 9
    6
    16 11 34 23 12  45
    */