#include <iostream>
#include <string.h>

#define MAX_SIZE 10000 //스택의 누적가능량

int stack[MAX_SIZE];
int top = -1;   //최상단의 위치를 저장하는 정수

using namespace std;

void push(int x)
{
    stack[++top] = x; //top을 먼저 늘린 뒤 그자리에 파라미터 추가
}

int empty() //bool타입 선언은 후에 추가변환 필요함
{ 
    if (top < 0)
        return true; //1
    else
        return false; //0
}

void pop()
{
    if (empty() == true)
        cout << "-1"    //string -1 출력
             << "\n";
    else
    {
        cout << stack[top] << "\n";
        stack[top--] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char str[10]; //작업 입력
        cin >> str;
        if (!strcmp(str, "push"))
        {
            int x;
            cin >> x; //push
            push(x);
        }
        else if (!strcmp(str, "top"))
        {
            if (empty() == 1)
                cout << "-1"
                     << "\n";
            else
                cout << stack[top] << "\n";
        }
        else if (!strcmp(str, "pop"))
        {
            pop();
        }
        else if (!strcmp(str, "empty"))
        {
            cout << empty() << "\n";
        }
        else
            cout << top + 1 << "\n";
    }

    return 0;
}
