#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>
using namespace std;

int visited[10001];
int arr[10001][10001];
int n,element=1,ans;
vector<int>v[10001];
vector<int>permutation_element_cnt;

void permutation_check(int start,int curr){
    visited[start]=1;
    if(start==curr){
        permutation_element_cnt.push_back(element);
        return;
    }
    if(!visited[curr]){
        visited[curr]=1;
        element++;
        permutation_check(start,v[curr][0]);
    }
}
void init(){
    for(int i=0; i<10001; i++){
        v[i].clear();
    }
    memset(visited,0,sizeof(visited));
    memset(arr,0,sizeof(arr));
    permutation_element_cnt.clear();
    ans=0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin>>T;
    
    while(T--){
        init();
        cin>>n;
        for(int i=1; i<=n; i++){
            int inp; cin>>inp;
            v[i].push_back(inp);
        }
        for(int i=1; i<=n; i++){ //순열의 초기 갯수를 체크함.
            element=1;
            permutation_check(i,v[i][0]);
        }
        for(int i=0; i<permutation_element_cnt.size(); i++){
            if(permutation_element_cnt[i]>1){   //조합을 구하는 부분
                int n=permutation_element_cnt[i];
                for(int i=0; i<=n; i++){
                    for(int k=0; k<=2; k++){
                        if(i==k||k==0)arr[i][k]=1;
                        else arr[i][k]=(arr[i-1][k-1]+arr[i-1][k]);
                    }
                }
                ans+=arr[n][2];
            }
            
        }
        cout<<ans<<'\n';
    }
    
}
