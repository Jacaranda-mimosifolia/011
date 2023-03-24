//摄氏度与华摄氏度间的转换
#include<stdio.h>
int main()
{
	float x,y;
	int i,n=0;
	do
	{
		n++;
		printf("请输入摄氏度或者华摄氏度:");
		scanf("%f",&x);
		getchar();
		printf("“1=c摄氏度，2=f华摄氏度”\n请输入1或者2:");
		scanf("%d",&i);
//		i=getchar();方法二 
//		错误写法：i=scanf("%d",&i);
//		scanf读取到i等于2，结果运行结束又返回个1给i赋值 
		getchar();
		switch(i)
		{
			case 1:printf("%f(c)=%.2f(f)\n\n",x,x*9/5+32);break;
			case 2:printf("%f(f)=%.2f(c)\n\n",x,(x-32)*5/9);break;
			default:printf("无法识别，请重新输入\n");
		}
	}while(n<5);
	return 0; 
}
