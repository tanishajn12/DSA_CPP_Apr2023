#include<iostream>
using namespace std;

class trie {
    node* root;
    public:
        trie() {
            root=new node('\0');
        
        }

        void insert(string str) {
            node* cur=root;
            for(char ch : str) {
                if(cur->childMap.find(ch)==cur->childMap.end()){
                    //current node does not have a child node 
                    node* n=new node(ch);
                    cur->childMap[ch]=n;
                }
                cur=cur->childMap[ch];
            }
            cur->terminal=true;

        }

        bool search(string str){
            node* cur=root;
            for(char ch: str){
                if (cur->childMap.find(ch)==cur->childMap.end()){
                    return false;
                }
                cur=cur->childMap[ch];
            }
            cur->terminal=true;
        }
        
        
}

int main() {
    string words[]={"code","coder","coding","block","blocks","news"};

    trie t;
    for(string word: words){
        t.insert(word);
    }
    
    string words[]={"code","coder","coding","block","blocks","news"};

}