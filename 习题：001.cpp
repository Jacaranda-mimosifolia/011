//���϶��뻪���϶ȼ��ת��
#include<stdio.h>
int main()
{
	float x,y;
	int i,n=0;
	do
	{
		n++;
		printf("���������϶Ȼ��߻����϶�:");
		scanf("%f",&x);
		getchar();
		printf("��1=c���϶ȣ�2=f�����϶ȡ�\n������1����2:");
		scanf("%d",&i);
//		i=getchar();������ 
//		����д����i=scanf("%d",&i);
//		scanf��ȡ��i����2��������н����ַ��ظ�1��i��ֵ 
		getchar();
		switch(i)
		{
			case 1:printf("%f(c)=%.2f(f)\n\n",x,x*9/5+32);break;
			case 2:printf("%f(f)=%.2f(c)\n\n",x,(x-32)*5/9);break;
			default:printf("�޷�ʶ������������\n");
		}
	}while(n<5);
	return 0; 
}
