#include<stdio.h>
#include<time.h>
//����Ⱑ 6������ �ִ�.
//�̵��� ���׿� ����ִµ�, �縷�̿���
//�縷�� �ʹ� ������ , �ʹ� �����ؼ� ���� ���� ���� ������ �ؿ�
//���� �� �����ϱ� ���� �������� ���׿� ���� �༭ ����⸦ ����ּ���� 
//������ �ð��� �������� ���� Ŀ���� ...���߿��� ...�ȳ� 


int level;
int arrayFish[6];
void initData();
int* cursor;
void printFishes();

int main1(void)
{
	long startTime = 0; //���� ���� �ð�
	long totalElapsedTime = 0;//�� ��� �ð�
	long preElapsedTime = 0;//���� ����ð�(�ֱٿ� ���� �� �ð�����)

	int num;// �� �� ���׿� ���� �� ������, ����� �Է� 
	initData();

	cursor = arrayFish; // cursor[0] .. cursor[1] ...

	startTime = clock(); //���� �ð��� millisecond(1000���� 1��)������ ��ȯ 

	while (1)
	{
		printFishes();
		gechar();// �ӽ÷� ����� �Է� ��� 
	}
}

	void printFishes()
{
	
	printf("%3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);

	}
	printf('\n\n');
	

    return 0;
}


 void initData()
{
	level = 1;// ���ӷ���(1~5)
	for (int i = 0; i <6; i++)
	{
		printf("%4d", arrayFish[i]);
	}
	printf("\n\n");

}