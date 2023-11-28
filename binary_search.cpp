/////Binary search is done for sorted array////////////////////
/*#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

  int start = 0;
  int end = size-1;

  int mid = start+(end-start)/2;

  while(start<=end){

    if(arr[mid] == key){
      return mid;
    }
    if(arr[mid]>key){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
    mid = start+(end-start)/2;
  }
  return -1;
}

int main(){
  int even[6] = {2,4,6,8,12,18};
  int odd[5] = {3,8,11,14,16};

  cout<<"even  ";
  for(int i =0; i<6; i++){
    cout<<even[i]<<' ';
  }
  cout<<endl;

  cout<<"odd  ";
  for(int i =0; i<5; i++){
    cout<<odd[i]<<' ';
  }
  cout<<"\nenter the key ";
  int key1; int key2;
  cin>>key1;
  cin>>key2;


  int index1 = binarysearch(even, 6, key1);
  int index2 = binarysearch(odd, 5, key2);
  cout<<"\nIndex of "<<key1<<" is "<<index1;
  cout<<"\nIndex of "<<key2<<" is "<<index2;

}*/
////////////////////////////////////////////////////////////////////////////////
///////Check the first and last index////////////////////////
/*#include<iostream>
using namespace std;

int firstocc(int arr[], int size, int key){
  int s = 0, e = size-1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      e = mid - 1;
    }
    else if(arr[mid]>key){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int lastocc(int arr[], int size, int key){
  int s = 0, e = size-1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      s = mid + 1;
    }
    else if(arr[mid]>key){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int main(){
  int list[6] = {1,2,3,3,5};

  int index1 = firstocc(list, 6, 3);
  int index2 = lastocc(list, 6, 3);

  cout<<"First Occurrence of 3 is at Index "<<index1<<endl;
  cout<<"Last Occurrence of 3 is at Index "<<index2<<endl;

  cout<<"Total no. of Occurrences "<< index2 - index1 + 1;

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
///////Finding peak in array////////////////////////////////////
/*#include<iostream>
using namespace std;

int peak(int arr[], int n){
  int s = 0, e = n - 1;
  int mid = s + (e-s)/2;

  while(s<e){
    if(arr[mid]<arr[mid+1]){
      s = mid + 1;
    }
    else{
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
}

int main(){

  int arr[4] = {0,6,4,3};

  int k = peak(arr, 4);

  cout<<" Peak in the array is "<<arr[k];
}*/
///////////////////////////////////////////////////////////////////////////////
//////////////////finding pivot element////////////////////////////
/*#include<iostream>
using namespace std;

int pivot(int arr[], int n){
  int s = 0, e = n-1;
  int mid = s + (e-s)/2;

  while(s<e){
    if(arr[mid] >= arr[0]){
      s = mid+1;
    }
    else{
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
}

int main(){
  int list[5] = {8,10,17,1,3};

  int k = pivot(list, 5);
  cout<<"Pivot is "<<list[k]<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int pivot(int arr[], int n){
  int s = 0, e = n-1;
  int mid = s + (e-s)/2;

  while(s<e){
    if(arr[mid] >= arr[0]){
      s = mid+1;
    }
    else{
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
}

int search(int arr[], int s,int e, int key){
  int start = s, end = e;
  int mid = start + (end-start)/2;

  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
    mid = start + (end-start)/2;
  }
  return -1;
}

int main(){
  int list[5] = {8,10,17,1,3};

  int key = 3;

  int p = pivot(list, 5);
  if(key>=list[p] && key<=list[5-1]){
    cout<<search(list, p, 4, key);
  }
}*/
////////////////////////////////////////////////////////////////////////////////
/////////(Integer part of Square root)////////////////////////
/*#include<iostream>
using namespace std;

long long int Squareroot(int n){
  int s = 0;
  int e = n;

  long long int mid = s + (e-s)/2;
  int ans = -1;

  while(s<=e){
    long long square = mid*mid;

    if(square==n){
      return mid;
    }
    else if(square<n){
      ans = mid;
      s = mid+1;
    }
    else{
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int main(){

  cout<<"Enter the number = ";
  int n;
  cin>>n;

  int k = Squareroot(n);

  cout<<"Square root to the nearest is "<<k;
}*/
////////////////////////////////////////////////////////////////////////////////
////////////////(Decimal part of Square root)//////////////////////
/*#include<iostream>
using namespace std;

long long int Squareroot(int n){
  int s = 0;
  int e = n;
  long long int ans = -1;
  long long int mid = s + (e-s)/2;

  while(s<=e){
    long long int square = mid*mid;

    if(square==n){
      return mid;
    }
    else if(square<n){
      ans = mid;
      s = mid+1;
    }
    else{
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

double moreprecesion(int n, int precision, int sol){
  double factor = 1;
  double ans = sol;

  for(int i = 0; i<precision; i++){
    factor = factor/10;

    for(double j = ans; j*j<n; j = j+factor){
      ans = j;
    }
  }
  return ans;
}

int main(){

  cout<<"Enter the no. "<<endl;
  int n;
  cin>>n;

  int sol = Squareroot(n);
  cout<<"\nAnswer is "<<moreprecesion(n, 3, int sol)<<endl;
}*/
///////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int ispossible(int arr[], int n, int m, int mid){

  int studentcount = 1;
  int pagesum = 0;

  for(int i = 0; i<n; i++){
    if(pagesum+arr[i] <= mid){
      pagesum += arr[i];
    }
    else{
      studentcount++;
      if(studentcount>m || arr[i]>mid){
        return false;
      }
      pagesum = arr[i];
    }
  }
  return true;
}

int allocate(int arr[], int n, int m){
  int s = 0;
  int sum = 0;

  for(int i = 0; i<n; i++){
    sum = sum + arr[i];
  }
  int e = sum;
  int ans = -1;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(ispossible(arr, n, m, mid)){
      ans = mid;
      e = mid-1;
    }
    else{
      s = mid+1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int main(){

  int a[5] = {10, 20, 40, 30, 50};

  int k = allocate(a, 5, 2);
  cout<<k;
}*/
////////////////////////////////////////////////////////////////////////////////
