#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct student//声明结构体
{
	int math;
    int english;
    int chinese;
    int num;
};
bool comp(student stu1,student stu2)//设置比较函数
{
    int sum1=stu1.math+stu1.english+stu1.chinese;
    int sum2=stu2.math+stu2.english+stu2.chinese;
    if(sum1==sum2)
    {
        if(stu1.chinese==stu2.chinese)
        {
            {
                return stu1.num<stu2.num;//总分、语文都相同，学号小的在前
            }
           
        }
        else
            return stu1.chinese>stu2.chinese;//总分相同，语文高的在前
    }
    else
        return sum1>sum2;//优先考虑总分成绩，高的在前
 
}
int main()
{
    int n;
	cin>>n;
    struct student stu[100];
    for(int i=0; i<n; i++)
    {
        cin>>stu[i].chinese>>stu[i].english>>stu[i].math;//输入数据
        stu[i].num=i+1;
    }
    sort(stu,stu+n,comp);//成绩排序
    for( i=0; i<n; i++)
    {
        cout<<stu[i].num<<" "<<stu[i].math+stu[i].english+stu[i].chinese<<" "<<endl;//输出数据
    }
    return 0;
}