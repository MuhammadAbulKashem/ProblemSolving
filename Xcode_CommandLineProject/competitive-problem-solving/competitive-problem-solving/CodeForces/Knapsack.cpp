//
//  Knapsack.cpp
//  competitive-problem-solving
//
//  Created by Md. Abul Kashem on 26/5/24.
//

/*#include <stdio.h>
#include<iostream>
#include <vector>
#define N 101

using namespace  std;

int myVisit[25],answer;

void backTrack(int current, int count, int target, vector<pair<int,int>>&val) {
    if(current>=target){
        answer = max(answer, count);
        return;
    }
    
    for(int i=0;i<val.size();i++){
        if(!myVisit[i]){
            if(val[i].first+current<=target){
                myVisit[i]=1;
                backTrack(val[i].first+current, count+val[i].second,target,val);
                myVisit[i]=0;
            }
        }
    }
    answer = max(answer,count);
   
}

int main() {
    int n,w,w1,v1;
    while(cin>>n>>w){
        answer = 0;
        vector<pair<int,int>>vc;
        for(int i=0;i<n;i++){
            cin>>w1>>v1;
            vc.push_back({w1,v1});
            myVisit[i]=0;
        }
        
        backTrack(0,0,w,vc);
        
        cout<<answer<<endl;
        
    }
}
*/
