#include <iostream>
#include <map>
using namespace std;
int main() {
    string all, s, x;
    map<string,string> words;
    while(getline(cin, all)){
        bool k = false;
        if(all.empty()) break;
        for(char i : all){
            if(!k and i != ' ') s.push_back(i);
            if(k) x.push_back(i);
            if(i == ' ') k = true;
        }
        words[x] = s;
        s.clear();
        x.clear();
    }
    while(cin>>x){
        if(!words[x].empty()) cout<<words[x]<<'\n';
        else cout<<"eh\n";
    }
    return 0;
}
