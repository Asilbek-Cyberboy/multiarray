#include <iostream>
#include <string>
using namespace std;
void search(string& s, char& key) {
    int a=0;
     for( char  c : s) {
         if( c == key) {
             a=1;
         }
     }
    if(a==1) {
        cout<<"found"<<endl;
    }else {
        cout<<"not found"<<endl;
    }
}
int main() {
    string s;
    char key;
    cin>>key;
    string ff;
    getline(cin, ff);
    cout << (int(ff[0]) == int(' ')) << endl;;
    // cin.ignore();
    // cin.clear();
    getline(cin, s);
    search(s, key);
}