#include <iostream>
#include <string>
using namespace std;

bool isGroupWord(const string& word) 
{
    bool seen[26] = { false };  // 알파벳 26개의 등장 여부를 추적하는 배열
    char lastChar = '\0';       // 마지막 문자를 저장하는 변수

    for (char ch : word) 
    {
        if (ch != lastChar) {   // 현재 문자가 마지막 문자와 다르면
            if (seen[ch - 'a']) {
                return false;   // 이전에 나온 적이 있으면 그룹 단어가 아님
            }
            seen[ch - 'a'] = true; // 현재 문자를 본 것으로 표시
            lastChar = ch;         // 마지막 문자를 현재 문자로 업데이트
        }
    }
    return true; // 그룹 단어임
}

int main(void) 
{
    int num;
    cin >> num;
    int count = 0;

    for (int i = 0; i < num; i++) 
    {
        string word;
        cin >> word;
        if (isGroupWord(word)) 
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
