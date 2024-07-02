/*
题干：有一线性表List，假设表中无重复值，现要在指定位置执行插入操作。插入成功时输出新表，否则输出"data error"。
输入格式：有多组数据，每组数据占两行，代表一次插入操作。
          每组第一行有三个整数，第一个为表长n（0<n<50），第二个为位置i，第三个为值x；
          第二行为表的各元素值。
输出格式：每组数据的输出占一行，输出如题。新表输出时，每两个元素之间有一空格。
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
