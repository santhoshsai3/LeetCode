

#include <iostream>
#include<vector>
#include<map>
using namespace std;


void pushInMap(map<int,int> & mp, vector<int> &input){
    for(int i = 0; i<input.size();i++){
        if(mp.find(input[i])!=mp.end())
            mp[input[i]]++;
        else
            mp.insert(pair<int,int>(input[i],1));
    }
}

bool checkIfSubset(vector<int> &input, vector<int> &test){
    map<int, int> mp;
    pushInMap(mp,input);
    for(int i = 0;i<test.size();i++){
        if(mp.find(test[i])!=mp.end())
        {
            if(mp[test[i]]==0)
                return false;
            mp[test[i]]--;
        }
        else
            return false;
    }
    return true;
    
}

int main()
{
    vector<int> input{1,2,3,4,5,6,7,8,9};
    vector<int> testArray{1,2,3,4,4};
    cout<<checkIfSubset(input, testArray);
    return 0;
}
