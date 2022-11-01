#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main(){

    unordered_map<string,int> m;

    pair<string,int> p = make_pair("babbar", 3);
    m.insert(p);

    pair<string,int> p2("love", 2);
    m.insert(p2);

    m["mera"] = 1;

    m["mera"] = 2;

    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    cout << m["unknownKey"] << endl;
    cout << m.at("unknownKey") << endl;

    cout << m.size() << endl;

    cout << m.count("love") << endl;

    m.erase("love");
    cout << m.size() << endl;

    for (auto i:m){
        cout << i.first << " " << i.second << endl;
    }


}