#include <iostream>  
using namespace std;  
void insert(int a[], int n)  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j]) 
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int n) 
{  
    int i;  
    for (i = 0; i < n; i++)  
       {
           cout<<a[i];
           cout<<"\t";
       } 
}
  
int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArr(a, n);  
    insert(a, n);  
    cout<<"\nAfter sorting array elements are - \n";    
    printArr(a, n);  
  
    return 0;  
}    