#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string big="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string small="abcdefghijklmnopqrstuvwxyz";


int main(){
    
    int T; cin>>T;
    cin.ignore(1);
    
    
    while(T--){
        string s;
        getline(cin,s);
        
        string memory,temp;
        
        for(int i=0; i<s.length(); i++){        //1.(환형이동)
            if(!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='A'&&s[i]<='Z')){   //문자가 아닌게 나왔을때 이전 값들 전부 환형이동 시킨다.
                char first=temp[temp.length()-1];
                string sub=temp.substr(0,temp.length()-1);
                memory+=first+sub;
                memory+=s[i];
                temp.clear();
            }
            else{   //문자일때 임시로 담는다.
                temp+=s[i];
            }
            
        }
        
        if(temp!=" "){
            char first=temp[temp.length()-1];
            string sub=temp.substr(0,temp.length()-1);
            memory+=first+sub;
        }
        
        s=memory;
        
        for(int i=0; i<s.length(); i++){
            
            if(!(s[i]>='0'&&s[i]<='9')&&s[i]!=' '){    //각 단어가 숫자가 아니고 공백이 아닐때
                
                if(s[i]>='A'&&s[i]<='Z'){   //2.(대소변환)
                    s[i]=tolower(s[i]); //대문자->소문자
                    for(int k=0; k<small.length(); k++){    //3.(다음문자 변환)
                        if(s[i]==small[k]){
                            s[i]=small[(k+1)%26];
                            break;
                        }
                    }
                }
                
                else if(s[i]>='a'&&s[i]<='z'){  //2.(대소변환)
                    s[i]=toupper(s[i]);  //소문자->대문자
                    for(int k=0; k<big.length(); k++){  //3.(다음문자 변환)
                        if(s[i]==big[k]){
                            s[i]=big[(k+1)%26];
                            break;
                        }
                    }
                }
            }
        }
        cout<<s<<'\n';
    }
    
    
}
