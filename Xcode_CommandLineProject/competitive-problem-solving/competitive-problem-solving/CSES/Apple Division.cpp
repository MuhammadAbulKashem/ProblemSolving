//
//  Apple Division.cpp
//  competitive-problem-solving
//
//  Created by Md. Abul Kashem on 26/5/24.
//

#include <stdio.h>
#include<iostream>
#include <vector>
#include <climits>
#define ll long long

using namespace std;

ll total,answer;

void backTrack(int index,ll val, vector<int>&vc){
    ll diff = total-val;
    diff = abs(diff-val);
    if(index==vc.size()){
        answer = min(answer,diff);
        return;
    }
    
    backTrack(index+1,val,vc);
    backTrack(index+1,val+vc[index],vc);
}

int main() {
    int n,p;
    
    while(cin>>n){
        total = 0;
        vector<int>vc;
        for(int i=0;i<n;i++){
            cin>>p;
            vc.push_back(p);
            total+=p;
        }
        answer = INT_MAX;
        backTrack(0,0,vc);
        cout<<answer<<endl;
    }
}
