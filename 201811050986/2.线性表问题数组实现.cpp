#include<iostream>
using namespace std;
const int M = 1000; //共有M个猴子
 int a[M];  //用数组模拟
 int k=0;//k表示猴子的编号
 int i = 1;  //从第1只猴子开始报数
 int rest; //记录每次剩下的猴子个数
 int main()
 {
    int num,n;//num为猴子的数量，n为数到第n个
    cin >> num>>n;
    rest=num;
    while(rest>1)
    {
        if(a[k] != -1)  //当下标为k的猴子还在圈内时
         {
           if(i == n)
            {
                a[k] = -1;  //将数到n的猴子退出圈子 ，将下标置为-1
                rest--;
            }
             i++;
            if(i > n)   //i>n时，i要回到1重新开始数
             {
                 i = i % n;
            }
         }
        k++;
        if(k >= num)    //当下标达到了猴子总数时，要回到开头
         {
             k = k % num;
        }
     }
     for(int i = 0; i < num; i++)
     {
         if(a[i] != -1)
         {
             cout << i + 1; //数组下标是从0开始的，要+1
         }
     }
     return 0;
 }