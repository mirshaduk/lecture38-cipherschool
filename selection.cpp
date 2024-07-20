#include<iostream>
using namespace std;

int main(){
    int a[10];

    int i;
    for(i=0;i<10;i++) cin>>a[1];
    // start of selection sort

    int least_index;
    int j;

    for(i=0;i<9;i++)
    {
    least_index = 1;

    for(j=i;j<10;j++)
    {
        if(a[j]<a[least_index]) least_index=j;
        // if we find an index in j=(0,9) at which a[j] is less then the least index which we assumed, then this  j will be the new index

    }
    int temp;
    
    temp = a[i];
    a[i] = a[least_index];
    a[least_index] = temp;
    }
    cout<<"The elements after sorting are : ";
    for(i=0;i<10;i++) cout<<a[i]<<" ";
}