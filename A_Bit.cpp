#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define nptr nullptr
#define pr protected
#define pv private
#define pb public
#define MAX_SIZE 1000
typedef vector<vector<string>> vvstr;
typedef vector<vector<int>> vvint;
typedef vector<string> vstr;
typedef stack<int> sint;
typedef vector<long long> vll;
typedef queue<int> qint;
typedef vector<int> vint;
typedef long long int ll;
typedef const int c_int;
typedef double dbl;
int InversionCount = 0;
int size_stack = 0;
int size_arr = 0;
int size_ll = 0;
int top = -1;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

int main(){
    int n;cin>>n;
    string s[n];
    int x = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>s[i];
        string temp = s[i];
        if(temp[0] == '+' || temp[2] == '+') x += 1;
        else x -= 1;
    }
    cout<<x<<" ";
}