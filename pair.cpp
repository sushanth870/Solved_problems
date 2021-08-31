#include <bits/stdc++.h>
using namespace std;
void mergeSort(int* Arr, int start, int end);
void quickSort(int* Arr, int start, int end);
void merge(int* Arr,int start,int mid,int end);
int partation(int *arr, int start, int end);
int findMinIndex(int* arr, int start, int size);

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int* bubblesort(int* arr,int n)
{
    int i;
    cout << n << endl;
    for (int i = 0; i < (n - 1); i++)
        for (int j = 0; j < (n-1-i); j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }

    return arr;    
}

int* insertionSort(int* arr,int n)
{
    int i;
    cout << n << endl;
    for (int i = 1; i < n; i++)
       {
           int key = arr[i];
           int j = i;
           while (j>0 && key < arr[j-1]  )
           {
               arr[j]=arr[j-1];
               j--;
           }
           arr[j]=key;
       }

    return arr;    
}
void selection(int* Arr, int start, int end,int size) 
{   
    
    int i,min_index;
    for (i = start; i < size ; i++)
    {
        min_index = findMinIndex(Arr,i,size);
        if(i != min_index){
            swap(Arr[i],Arr[min_index]);
        }
    }
    
}
int findMinIndex(int* arr,int start,int size){
    int min_index = start;
    while(start<size){
        if(arr[start]<arr[min_index])
        min_index = start;
        start++;
    }
    return min_index;
}

void mergeSort(int* Arr, int start, int end)
{   
    if(start < end )
    {
        int mid=(start+end)/2;
        cout<<"1nd merge-->"<<start<<"-"<<mid<<"\n";
        mergeSort(Arr,start,mid);
        cout<<"2nd merge-->"<<mid+1<<"-"<<end<<"\n";
        mergeSort(Arr,mid+1,end);
        merge(Arr,start,mid,end);
    }

}
void merge(int* Arr,int start,int mid,int end)
{
    int i=start,j=mid+1,k=0;
    int tempArr[end - start + 1];
    while(i<=mid && j<=end ){
        if(Arr[i]<=Arr[j]){
            tempArr[k]=Arr[i];
            i++;
            k++;
        }
        else{
            tempArr[k]=Arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
            tempArr[k]=Arr[i];
            i++;
            k++;
        }
    while(j<=end){
            tempArr[k]=Arr[j];
            j++;
            k++;
        }
    for (int i = start; i <=end; i++)
    {
        Arr[i]=tempArr[i-start]; //tempArr[] is started from 0
    }
        
}

void quickSort(int* arr, int start, int end)
{   if(start< end)
    {
        int pi=partation(arr,start,end);
        quickSort(arr,start,pi-1);
        quickSort(arr,pi+1,end);}
}

int partation(int *arr, int start, int end){
    int pivot=arr[end];
    int i=start-1;
    int j;
    for(j=start;j<=end-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    
    swap(arr[i+1],arr[end]);
    return i+1;
    
}
int main()
{
    // vector<pair<int,int> > v;
    // int i;
    // for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    // {
    //     v.push_back(make_pair(arr[i], i));
    // }

    // sort(v.begin(), v.end(), cmp);

    // for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    // {
    //     arr[v[i].second] = i;
    // }
    // for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    // {
    //     cout<< arr[i]<<" ";
    // }
    int arr[] = {10, 16, 7, 14, 5, 3, 12,9};
    int n = (sizeof(arr) / sizeof(arr[0]));
    int *ptr;
    // ptr = bubblesort(arr,n);
    // ptr = insertionSort(arr,n);
    // mergeSort(arr,0,7);
    // quickSort(arr,0,7);
    selection(arr,0,7,n);

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}