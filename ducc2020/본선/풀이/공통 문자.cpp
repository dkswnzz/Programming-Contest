#include<iostream>
#include<map>

using namespace std;

int main(){
    
    int n; cin>>n;
    
    while(n--){
        map<char,int>m;
        string a,b;
        cin>>a>>b;
        
        int ans=0;
        for(int i=0; i<a.length(); i++){
            m[a[i]]=1;
        }
        for(int i=0; i<b.length(); i++){
            if(m[b[i]]!=0){
                m[b[i]]=0;
                ans++;
            }
        }
        
        cout<<ans<<'\n';
    }
}
