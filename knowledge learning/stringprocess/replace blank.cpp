#include<bits/stdc++.h>
using namespace std;
string replace_blank(string s){
    int count=0;
    int l=s.size()-1;
    for(auto c:s){
        if(c==' ') count++;
    }
    s.resize(s.length()+count*2);
    int r=s.size()-1;
    for(r,l;l<r;l--,r--){
        if(s[l]==' '){
            s[r]='0';
            s[r-1]='2';
            s[r-2]='%';
            r-=2;
        }else{
            s[r]=s[l];
        }
    }
    return s;
}
int main(){
    string s="ajl jkl uio";
    cout<<replace_blank(s);
    return 0;
}