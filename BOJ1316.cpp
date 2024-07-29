#include <iostream>
#include <string>
using namespace std;

bool isGroupWord(const string& word) 
{
    bool seen[26] = { false };  // ���ĺ� 26���� ���� ���θ� �����ϴ� �迭
    char lastChar = '\0';       // ������ ���ڸ� �����ϴ� ����

    for (char ch : word) 
    {
        if (ch != lastChar) {   // ���� ���ڰ� ������ ���ڿ� �ٸ���
            if (seen[ch - 'a']) {
                return false;   // ������ ���� ���� ������ �׷� �ܾ �ƴ�
            }
            seen[ch - 'a'] = true; // ���� ���ڸ� �� ������ ǥ��
            lastChar = ch;         // ������ ���ڸ� ���� ���ڷ� ������Ʈ
        }
    }
    return true; // �׷� �ܾ���
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
