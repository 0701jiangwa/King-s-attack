#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct student//�����ṹ��
{
	int math;
    int english;
    int chinese;
    int num;
};
bool comp(student stu1,student stu2)//���ñȽϺ���
{
    int sum1=stu1.math+stu1.english+stu1.chinese;
    int sum2=stu2.math+stu2.english+stu2.chinese;
    if(sum1==sum2)
    {
        if(stu1.chinese==stu2.chinese)
        {
            {
                return stu1.num<stu2.num;//�ܷ֡����Ķ���ͬ��ѧ��С����ǰ
            }
           
        }
        else
            return stu1.chinese>stu2.chinese;//�ܷ���ͬ�����ĸߵ���ǰ
    }
    else
        return sum1>sum2;//���ȿ����ֳܷɼ����ߵ���ǰ
 
}
int main()
{
    int n;
	cin>>n;
    struct student stu[100];
    for(int i=0; i<n; i++)
    {
        cin>>stu[i].chinese>>stu[i].english>>stu[i].math;//��������
        stu[i].num=i+1;
    }
    sort(stu,stu+n,comp);//�ɼ�����
    for( i=0; i<n; i++)
    {
        cout<<stu[i].num<<" "<<stu[i].math+stu[i].english+stu[i].chinese<<" "<<endl;//�������
    }
    return 0;
}