#include <iostream>
#include <string.h>

#define MAX_SIZE 10000

using namespace std;

struct queue
{
    int q[MAX_SIZE];
    int frnt, bak;

    queue(){
        frnt=0;
        bak=0;
    }

    void push(int x){
        q[bak++]=x;
    }
    int size(){
        return bak-frnt;
    }
    int pop(){
        if(size()==0) return -1;
        else return q[frnt++];
    }
    bool empty(){
        if(size()==0) return true;
        else return false;
    }
    int front(){
        if(empty()) return -1;
        else return q[frnt];
    }
    int back(){
        if(empty()) return -1;
        return q[bak-1];
    }

};


int main(){
    queue q;
    int n;
    cin>>n;
    while(n--){
        char cmd[10];
        cin>>cmd;
        if(!strcmp(cmd,"push")){
            int x;
            cin>>x;
            q.push(x);
        }
        else if(!strcmp(cmd,"pop")){
            cout<<q.pop()<<"\n";
        }
        else if(!strcmp(cmd,"size")){
            cout<<q.size()<<"\n";
        }
        else if(!strcmp(cmd,"empty")){
            cout<<q.empty()<<"\n";
        }
        else if(!strcmp(cmd,"front")) {
            cout<<q.front()<<"\n";
        }
        else if(!strcmp(cmd,"back")){
            cout<<q.back()<<"\n";
        }
    }

    return 0;
}