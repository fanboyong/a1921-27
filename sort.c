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

//快速排序
void pquick(int a[], int m, int asize){
        if(m<asize){
	int i = m, j = asize-1, k;
	k = a[i];
	while(i<j){
		while(i<j && a[j]>k){j--;}
		if(i<j){a[i] = a[j];i++;}
		while(i<j && a[i]<=k){i++;}
		if(i<j){a[j] = a[i];j--;}
	}
	a[i] = k;
	pquick(a, 0, i-1);
	pquick(a, i+1, asize);
}
}
