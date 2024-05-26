//
//  Subarray Divisibility.cpp
//  competitive-problem-solving
//
//  Created by Md. Abul Kashem on 26/5/24.
//

#include <iostream>
#include <unordered_map>

#define ll long long
#define input "input.txt"
//#define output "output.txt"

using namespace std;



int main() {
    ll n;
    ll val,count;
    
    while(scanf("%lld",&n)==1){
        ll carry = 0;
        count = 0;
        unordered_map<ll, ll>myMap;
        for(int i=0;i<n;i++){
            scanf("%lld",&val);
            carry += val;
            carry %= n;
            if(carry==0){
                count++;
                count += myMap[carry];
            } else if(carry>0) {
                count += myMap[carry];
                val = carry - n;
                count += myMap[val];
            }
            else {
                count += myMap[carry];
                val = carry+n;
                count += myMap[val];
            }
            myMap[carry]++;
        }
        printf("%lld\n", count);
    }
}

/*
 5
 3 1 2 7 4
*/
