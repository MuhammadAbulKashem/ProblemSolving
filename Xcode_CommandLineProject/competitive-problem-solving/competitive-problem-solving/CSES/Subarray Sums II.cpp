//
//  Subarray Sums II.cpp
//  competitive-problem-solving
//
//  Created by Md. Abul Kashem on 22/5/24.
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>

#define ll long long
#define input "input.txt"
//#define output "output.txt"

using namespace std;



int main() {
    ll n,m;
    ll val,count;
    //FILE *read = fopen(input,"r");
    
    while(scanf("%lld %lld",&n, &m)==2){
        ll carry = 0;
        count = 0;
        unordered_map<ll, ll>myMap;
        for(int i=0;i<n;i++){
            scanf("%lld",&val);
            carry+= val;
            if(carry>=m){
                if(carry == m){
                    count++;
                    count += myMap[0];
                } else {
                    val = carry - m;
                    count += myMap[val];
                }
            } else {
                val = carry - m;
                count += myMap[val];
            }
            
            myMap[carry]++;
        }
        printf("%lld\n", count);
    }
    
}

/*
5 7
2 -1 3 5 -2
*/
