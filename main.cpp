#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string all;
    string s;
    string x;
    map<string,string> words;
    while(true){
        bool k = false;
        getline(cin, all);
        if(all.empty()) break;
        for(char i : all){
            if(!k and i !=' ') s.push_back(i);
            if(k) x.push_back(i);
            if(i == ' ') k = true;
        }
        words[x] = s;
        s.clear();
        x.clear();
    }
    while(cin>>x){
        if(!words[x].empty()) cout<<words[x];
        else cout<<"eh";
        cout<<'\n';
    }
    return 0;
}