

#include <iostream>
#include<vector>
#include<map>
using namespace std;

void pushIntoMap(vector<int> &input, map<int,int> &mp){
    for(int i = 0;i<input.size();i++){        
        mp.insert(pair<int,int>(input[i],1));
    }
}

bool findElement(map<int,int> &mp, int target){
    for( auto itr : mp){
        if(mp.find((target - itr.first)) != mp.end()  && mp.find((target - itr.first))->first!=itr.first)
            return true;
    }
    return false;
}

int main()
{
    vector<int> input{1,2,3,4,5,6,7,8,9,10};
    int target;
    cin>>target;
    map<int, int> mp;
    pushIntoMap(input, mp);
    cout<<findElement(mp,target);
    return 0;
}
