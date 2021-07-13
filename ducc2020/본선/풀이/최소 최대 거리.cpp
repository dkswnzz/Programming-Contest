#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T; cin>>T;
    
    while(T--){
        int n; cin>>n;
        vector<int>v;
        
        int max_v=-1,min_v=10001;
        
        for(int i=0; i<n; i++){ //배열에 갑 삽입
            int inp; cin>>inp;
            v.push_back(inp);
            max_v=max(inp,max_v);   //최댓값 찾기
            min_v=min(inp,min_v);   //최솟값 찾기
        }
        
        int max_i=0,min_i=0,ans=10001;
        
        for(int i=0; i<v.size(); i++){
            if(v[i]==max_v) max_i=i+1;
            if(v[i]==min_v) min_i=i+1;
            if(max_i!=0&&min_i!=0) ans=min(ans,abs(max_i-min_i));
           
            if(max_v==min_i) ans=0;
        }
        cout<<ans<<'\n';
    }
}
