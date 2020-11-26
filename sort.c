#include"sort.h"                                                                           
#include<stdio.h>
#define N 20

//原排序
void outA(int a[], int asize){
	for(int i=0;i<asize;i++){
		printf("  %d  ",a[i]);
	}
	printf("。");
	}

//冒泡排序
void bubble(int a[],int n)

{
	int i, j,t;
	for(i=1;i< n;i++)
	{for (j=0;j<n-i;j++)
		{

			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

//插入排序
void insertSort(int a[], int n ){
	int i,j,t;
	for (i=1; i<n; i++){
		t=a[i];
		j = i-1;
		while (j>=0 && a[j]>t){
			a[j+1] = a[j];
			j--;                                                                                                                            
		}
		a[j+1] = t;
	}
}

//选择排序
void select1(int a[], int n){
	int i, j, k, m;
	for (i=0; i<n-1; i++){
		m = a[i];
		k = i;
		for (j=i+1; j<n; j++)
			if (a[j] < m){
				m=a[j];
				k=j;

			}
		a[k] = a[i];
		a[i] = m;
	}
}

//分区
int Partition(int a[], int low, int high)
{
	int x = a[low];
	while (low < high)
	{
		while (low<high && a[high]>=x) high--;
		if (low <high)
		{
			a[low] = a[high];
			low++;
		}
		while (low<high && a[low]<=x) low++;
		if (low < high)
		{
			a[high] = a[low];
			high--;
		}
	}
	a[low] = x;
	return low;
}
//将区间[low...high]的元素进行快排
void QSort(int a[], int low, int high){
	if(low < high){
		int mid = Partition(a, low, high);
		QSort(a, low, mid-1);
		QSort(a, mid+1, high);

	}
}

//快排
void QuickSort(int a[], int n){
	QSort(a, 0, n-1);
}
