


#include<stdio.h>
int main()
{
		char a[5]={'a','b','c','d','e'};
		int i,j,out,total=5,num = 4,start = 0;
		for(i=0;i<5;i++)//�ܹ�5���ˣ�Ҫ��Ȧ5��
		{
				
				if(total==1)//ֻʣһ����ʱ��ֱ�ӳ�Ȧ
						printf("%c",a[0]);
				else
				{
						out = (start+num-1)%total;//��һ����Ȧ���±�
						printf("%c\t",a[out]);
						for(j=out;j<total;j++)//ÿ��һ���ˣ�������±���ǰ�ƶ�1
								a[j]=a[j+1];
						start = out;//�µĳ�ʼ�ص�	
						total = total -1;//ʣ������
				}
		}


		printf("\n"); 
		return 0;
}