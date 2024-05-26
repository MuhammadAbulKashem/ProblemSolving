//
//  Subarray Sums II.cpp
//  competitive-problem-solving
//
//  Created by Md. Abul Kashem on 22/5/24.
//

#include <stdio.h>
#include <iostream>

#define ll long long

using namespace std;



int main() {
    ll n,m;
    ll val,req,count;
    
    while(scanf("%lld %lld",&n, &m)==2){
        vector<ll> subArray;
        count = 0;
        unordered_map<ll, ll>myMap;
        myMap[0]=1;
        for(int i=0;i<n;i++){
            scanf("%lld",&val);
            if(i==0){
                subArray.push_back(val);
                if(val!=0)
                myMap[subArray[subArray.size()-1]]++;
            } else {
                subArray.push_back(val+subArray[subArray.size()-1]);
                myMap[subArray[subArray.size()-1]]++;
            }
            
            if(subArray[subArray.size()-1]>=m){
                req = subArray[subArray.size()-1] - m;
                if(myMap[req]){
                    cout<<myMap[req]<<endl;
                    count += myMap[req];
                }
            }
        }
        printf("%lld\n", count);
    }
    
}

/*
5 7
2 -1 3 5 -2
*/
