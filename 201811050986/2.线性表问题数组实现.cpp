#include<iostream>
using namespace std;
const int M = 1000; //����M������
 int a[M];  //������ģ��
 int k=0;//k��ʾ���ӵı��
 int i = 1;  //�ӵ�1ֻ���ӿ�ʼ����
 int rest; //��¼ÿ��ʣ�µĺ��Ӹ���
 int main()
 {
    int num,n;//numΪ���ӵ�������nΪ������n��
    cin >> num>>n;
    rest=num;
    while(rest>1)
    {
        if(a[k] != -1)  //���±�Ϊk�ĺ��ӻ���Ȧ��ʱ
         {
           if(i == n)
            {
                a[k] = -1;  //������n�ĺ����˳�Ȧ�� �����±���Ϊ-1
                rest--;
            }
             i++;
            if(i > n)   //i>nʱ��iҪ�ص�1���¿�ʼ��
             {
                 i = i % n;
            }
         }
        k++;
        if(k >= num)    //���±�ﵽ�˺�������ʱ��Ҫ�ص���ͷ
         {
             k = k % num;
        }
     }
     for(int i = 0; i < num; i++)
     {
         if(a[i] != -1)
         {
             cout << i + 1; //�����±��Ǵ�0��ʼ�ģ�Ҫ+1
         }
     }
     return 0;
 }