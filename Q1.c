#include<stdio.h>

int averageMarks(int math, int osy, int evm , int dst , int python, float *pAvg)
{
	*pAvg= (math+osy+evm+dst+python) / 5.0f;
}

int main(void)
{
	int math,osy,dst,evm,python;
	float avg;
	printf("Enter Math marks:");
	scanf("%d",&math);
        printf("Enter osy marks:");
	scanf("%d",&osy);
	printf("Enter evm marks:");
	scanf("%d",&evm);
	printf("Enter dst marks:");
	scanf("%d",&dst);
	printf("Enter python marks:");
	scanf("%d",&python);

	
 	averageMarks( math,  osy, evm , dst ,python, &avg);
	printf("Average :%f",avg);
	return 0;
}
