#include<iostream>
using namespace std;

class sort{
    public : int temp,i,n,j,a[50],min;
     void sel_sort(){
         for(i=0;i<n-1;i++){
             min = i;
             for(j=i+1;j<n;j++){
                 if(a[j]<a[min])
                     min = j;
             }
             if(min!=i){
                 temp = a[i];
                 a[i]=a[min];
                 a[min]=temp;
             }
        }
    }
}t;
int main(){
    int i;
    cout<<"\nEnter the number of elements: ";
    cin>>t.n;
    cout<<"\nEnter "<<t.n<<" elements: ";
    for(i=0;i<t.n;i++)
     cin>>t.a[i];
    t.sel_sort();
    cout<<"Sorted array looks like: \n";
    for(i=0;i<t.n;i++)
     cout<<t.a[i]<<" ";
    
}