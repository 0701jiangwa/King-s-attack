#include <iostream>
using namespace std;
int main()
{
    //����M,N����Ӧ��״̬
    int M,N;
    cin >>N>>M;
    char a[50][50];
    for (int i = 0; i <N; i++)
    {
        for (int j = 0; j <M; j++)
        {
            cin >> a[i][j];
        }
    }
    //��������
    int T = 0;
    cin >> T;
    while (T)
    {
        //ǰ�ĸ�forѭ���������ܵı߽�Ĵ�Ⱦ״̬����
        for (int i = 0; i < N; i++)
        {
            if (a[1][i]=='X')
            {
                if (a[0][i] != 'P')
                {
                    a[0][i] = 'X';
                }

            }
		}
        for ( i = 0; i < M; i++)
        {
            if (a[N][i] == 'X')
            {
                if (a[N-1][i] != 'P')
                {
                    a[N-1][i] = 'X';
                }

            }
        }
        for ( i = 0; i < N; i++)
        {
            if (a[i][1] == 'X')
            {
                if (a[i][0] != 'P')
                {
                    a[i][0] = 'X';
                }

            }
        }
        for ( i = 0; i < N; i++)
        {
            if (a[i][M] == 'X')
            {
                if (a[i][M-1] != 'P')
                {
                    a[i][M-1] = 'X';
                }

            }
        }
		//�����ڴ�Ⱦ״̬����
        for ( i = 1; i < N-1; i++)
        {
            for (int j = 1; j < M-1; j++)
            {
                if (a[i][j] == 'X')
                {
                    if (a[i - 1][j]!='P')
                    {
                        a[i - 1][j] = 'X';
                    }
                    if (a[i][j - 1] != 'P')
                    {
                        a[i][j - 1] = 'X';
                    }
                    if (a[i][j + 1] != 'P')
                    {
                        a[i][j + 1] = 'X';
                    }
                    if (a[i + 1][j] != 'P')
                    {
                        a[i + 1][j] = 'X';
                    }


                }
            }
        }
        
        T= T - 1;
    }
  //������º�Ĵ�Ⱦ״̬
    for ( i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout<<a[i][j];
			
        }
		cout<<endl;
    }
   
    return 0;
}
