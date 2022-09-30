#include <iostream>
#include <string.h>

#define MAX_SIZE 10000

using namespace std;

struct Deque
{
    int dq[MAX_SIZE];
    int frnt;
    int bak;
    Deque(){
        frnt=5000;
        bak=5000;
    }
    int size(){
        return bak-frnt;
    }
    bool empty(){
        if(size()==0) return true;
        else return false;
    }
    void swap(){
        if(frnt>bak){
            int sw=frnt;
            frnt=bak;
            bak=sw;
        }
    }
    void push_front(int x){
        dq[--frnt]=x;
        swap();
    }
    void push_back(int x){
        dq[bak++]=x;
        swap();
    }
    int pop_front(){
        if(empty()) return -1;
        else return dq[frnt++];
    }
    int pop_back(){
        if(empty()) return -1;
        else return dq[--bak];
    }
    int front(){
        if(empty()) return -1;
        else return dq[frnt];
    }
    int back(){
        if(empty()) return -1;
        else return dq[bak-1];
    }
};

int main(){
    int n;
    cin>>n;
    
    Deque dq;

    while(n--){
        string cmd;
        cin>>cmd;
        int x=0;

        if(cmd=="push_front"){
            cin>>x;
            dq.push_front(x);
        }
        else if(cmd=="push_back"){
            cin>>x;
            dq.push_back(x);
        }
        else if(cmd=="pop_front"){
            cout<<dq.pop_front()<<"\n";
        }
        else if(cmd=="pop_back"){
            cout<<dq.pop_back()<<"\n";
        }
        else if(cmd=="size"){
            cout<<dq.size()<<"\n";
        }
        else if(cmd=="empty"){
            cout<<dq.empty()<<"\n";
        }
        else if(cmd=="front"){
            cout<<dq.front()<<"\n";
        }
        else if(cmd=="back"){
            cout<<dq.back()<<"\n";
        }
    }

    return 0;
}