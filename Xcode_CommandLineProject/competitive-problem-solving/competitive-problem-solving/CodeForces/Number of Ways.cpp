//
//  Number of Ways.cpp
//  competitive-problem-solving
//
//  Created by Md. Abul Kashem on 26/5/24.
//
/*
#include <iostream>
#define N 18


using namespace std;

int arr[N];

void brackTracking(int current, int target) {
    if(current == target){
        arr[target] = 0;
        return;
    }
    
    if(arr[current]!=-1) {
        return;
    }
    
    int val, count = 0;
    for(int i=1;i<4;i++){
        val = current + i;
        if(val<=target){
            if(val==target){
                count++;
            }
            if(arr[val]==-1){
                brackTracking(val,target);
            }
            count += arr[val];
        }
    }
    arr[current] = count;
}

int answer;
void anotherBackTracking(int start, int end) {
    if(start == end){
        answer++;
    }
    
    for(int i=1;i<4;i++){
        if(start+i<=end){
            anotherBackTracking(start+i,end);
        }
    }
}


int main() {
    
    int s,e;
    while(scanf("%d %d",&s, &e)==2){
        if(s==e){
            printf("1\n");
            continue;
        }
        
        for(int i=s;i<=e;i++){
            arr[i] = -1;
        }
        brackTracking(s,e);
        printf("%d\n", arr[s]);
        //        answer = 0;
        
        //        anotherBackTracking(s, e);
        //        //}
        //        //printf("%d\n", arr[s]);
        //        printf("%d\n", answer);
    }
}
*/
