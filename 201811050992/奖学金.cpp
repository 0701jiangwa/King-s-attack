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
        idx[i]=i;                                       //������
        stu[i].i=i+1;                                   //������ѧ��
        stu[i].y=y;                                     //���������ķ�
        stu[i].z=y;
        stu[i].z+=s;
        stu[i].z+=w;                                    //�������ܷ�
    }
    bs(stu,idx,n);                                      //����ð������
    for(i=n-1;i>=n-5;i--)
        printf("%d %d\n",stu[idx[i]].i,stu[idx[i]].z);  //��������ѧ���ɼ�����
		system("pause");
}
void bs(Stu a[],int pa[],int n){
    int i,j,t,change=1;
    for(i=n-1;i>=n-5&&change;--i){
        change=0;
        for(j=0;j<i;++j){
            if(a[pa[j]].z>a[pa[j+1]].z){                //�ָܷߵ�������
                t=pa[j];
                pa[j]=pa[j+1];
                pa[j+1]=t;
                change=1;
            }else if(a[pa[j]].z==a[pa[j+1]].z){         //���ܷ����
                if(a[pa[j]].y>a[pa[j+1]].y){            //���ķָߵ�������
                    t=pa[j];
                    pa[j]=pa[j+1];
                    pa[j+1]=t;
                    change=1;
                }else if(a[pa[j]].y==a[pa[j+1]].y){     //�����ķ�Ҳ���
                    if(a[pa[j]].i<a[pa[j+1]].i){        //ѧ��С��������
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
