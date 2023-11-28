/*#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> TwoSum(vector<int> &v, int target)
{
    unordered_map<int, int> m;
    for(int i = 0; i<v.size(); i++){
        int more = target - v[i];
        if(m.find(more) != m.end()){
            return {i, m[more]};
        }
        m[v[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> v{6, 2, 4, 3, 7, 9, 11, 5};

    vector<int> ans = TwoSum(v, 11);
    for(int i:ans){
        cout<< i <<" ";
    }
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> M;
    M['a'] = 1;
    M['b'] = 2;
    M['c'] = 3;

    auto it = M.begin();
    auto itr = M.end();
    cout<< it->first << it->second <<endl;
    cout<< itr->first << itr->second <<endl;
}