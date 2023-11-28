//Stack => Static memory allocation
//Heap => Dynamic memory allocation
/*using namespace std;

int getsum(int *arr, int n)
{
  int sum = 0;
  for(int i = 0; i<n; i++){
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;

  //Variable size array:
  int *arr = new int[n];

  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  int ans = getsum(arr, n);
  cout<<"Answer is "<<ans<<endl;



  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
/*Static allocation => memory automatically release
  Dynamic allocation => memory manually release */
////////////////////////////////////////////////////////////////////////////////
///////////(creating a 2D array)///////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int **arr = new int*[n];//Rows

  for(int i = 0; i<n; i++){
    arr[i] = new int[m];//Column
  }

  //Taking input
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      cin>>arr[i][j];
    }
  }

  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      cout<<arr[i][j]<<" ";
    }cout<<endl;
  }

  //Releasing memory
  for(int i= 0; i<n; i++){
    delete [] arr[i];
  }
  delete []arr;//de-allocating the memory

  return 0;
}
