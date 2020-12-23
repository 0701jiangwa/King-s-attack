#include<stdio.h>
#include<stdlib.h>
typedef struct SStu{
    int i;
    int y;
    int z;
}Stu;
int main(){
    void bs(Stu [],int [],int);
    Stu stu[301];
    int y,s,w,i,n,idx[301];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&y,&s,&w);
        idx[i]=i;                                       //建索引
        stu[i].i=i+1;                                   //该生的学号
        stu[i].y=y;                                     //该生的语文分
        stu[i].z=y;
        stu[i].z+=s;
        stu[i].z+=w;                                    //该生的总分
    }
    bs(stu,idx,n);                                      //调用冒泡排序
    for(i=n-1;i>=n-5;i--)
        printf("%d %d\n",stu[idx[i]].i,stu[idx[i]].z);  //索引访问学生成绩数组
		system("pause");
}
void bs(Stu a[],int pa[],int n){
    int i,j,t,change=1;
    for(i=n-1;i>=n-5&&change;--i){
        change=0;
        for(j=0;j<i;++j){
            if(a[pa[j]].z>a[pa[j+1]].z){                //总分高的往后移
                t=pa[j];
                pa[j]=pa[j+1];
                pa[j+1]=t;
                change=1;
            }else if(a[pa[j]].z==a[pa[j+1]].z){         //若总分相等
                if(a[pa[j]].y>a[pa[j+1]].y){            //语文分高的往后移
                    t=pa[j];
                    pa[j]=pa[j+1];
                    pa[j+1]=t;
                    change=1;
                }else if(a[pa[j]].y==a[pa[j+1]].y){     //若语文分也相等
                    if(a[pa[j]].i<a[pa[j+1]].i){        //学号小的往后移
                        t=pa[j];
                        pa[j]=pa[j+1];
                        pa[j+1]=t;
                        change=1;
                    }
                }
            }
        }
    }
}
