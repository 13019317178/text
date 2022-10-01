#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int M = 0, N = 0, num = 0;
    cin >> M >> N;
    string arr[500] = {};
    for (int i = 0; i < M; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < M; i++)
    {
        if (i == 0 || i == M - 1)
            continue;
        for (int j = 1; j < N; j++)
        {
            char a = arr[i - 1][j];
            char b = arr[i + 1][j];
            char c = arr[i][j - 1];
            char d = arr[i][j + 1];
            if (a == '*' && b == '*' && c == '*' && d == '*')
                num++;
        }
    }
    cout << num << endl;
    system("pause");
    return 0;
}