/*
��ɣ���һ���Ա�List������������ظ�ֵ����Ҫ��ָ��λ��ִ�в������������ɹ�ʱ����±��������"data error"��
�����ʽ���ж������ݣ�ÿ������ռ���У�����һ�β��������
          ÿ���һ����������������һ��Ϊ��n��0<n<50�����ڶ���Ϊλ��i��������Ϊֵx��
          �ڶ���Ϊ��ĸ�Ԫ��ֵ��
�����ʽ��ÿ�����ݵ����ռһ�У�������⡣�±����ʱ��ÿ����Ԫ��֮����һ�ո�
*/

#include<stdio.h>

typedef struct
{
	int data[50];
	int length;
}SeqList;

void Insert(SeqList *L, int i, int x)
{
	if(i<1 || i>L->length+1)
		printf("data error\n");
	else if(L->length>=50)
		printf("data error\n");
	else
	{
		for(int j=L->length-1;j>=i-1;j--)
			L->data[j+1] = L->data[j];
		L->data[i-1] = x;
		L->length++;
		for(int j=0;j<L->length;j++)
			printf("%d ",L->data[j]);
	}
}

int main()
{
	SeqList L;
	int n,i,x;
	scanf("%d %d %d",&n,&i,&x);
	for(int j=0;j<n;j++)
		scanf("%d",&L.data[j]);
	L.length = n;
	Insert(&L,i,x);
}
