#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    int T; cin>>T;
    
    while(T--){
        vector<int>a,b;
        
        int n; cin>>n;
        int ans=0;
        for(int i=0; i<3; i++){
            int inp1; cin>>inp1;
            a.push_back(inp1);
        }
        for(int i=0; i<3; i++){
            int inp2; cin>>inp2;
            b.push_back(inp2);
        }
        
        if(a[0]!=0&&b[2]!=0){
            if(a[0]>=b[2]){    //영희가 가위를 가지고 있을때
                ans+=b[2];        //철수가 보자기를 낼때
            }
            else ans+=a[0];
        }
        
        if(a[1]!=0&&b[0]!=0){
            if(a[1]>=b[0]){   //영희가 바위를 가지고 있을때
                ans+=b[0];      //철수가 가위를 낼 때
            }
            else ans+=a[1];
        }
        
        if(a[2]!=0&&b[1]!=0){
            if(a[2]>=b[1]){   //영희가 보자기를 가지고 있을때
                ans+=b[1];      //철수가 바위를 낼 때
            }
            else ans+=a[2];
            
        }
        cout<<ans<<'\n';
    }
}
