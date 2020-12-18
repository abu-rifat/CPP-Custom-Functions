#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string strNumMul(string str, int num)
{
    int strLen=str.size();
    string tmpStr[strLen];
    int carry=0;
    int val=0;
    for(ll i=strLen-1;i>=0;i--){
        val=num*(str[i]-'0');
        val+=carry;
        carry=val/10;
        val%=10;
        str[i]=(val+'0');
    }
    if(carry){
        while(carry){
            char ch=(carry%10)+'0';
            str=ch+str;
            carry/=10;
        }
    }
    return str;
}

int main()
{
    int num;
    string s;
    s="5";
    num=22;
    s=strNumMul(s,num);
    cout<<s<<"\n";
    return 0;
}
