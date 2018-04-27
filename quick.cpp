#include <iostream>
#include <math.h>

using namespace std;

int partition( int x[],int low,int high);
void quickSort(int x[], int low, int high);
void print(int array[], int size);

int main(){
  int power = pow(10,5);
  
  int x[power];
  for(int i = 0; i < power; i++){
    x[i] = rand();
  }
  //print(x, power);
  quickSort(x, 0, power-1);
  time_t l = time(NULL);
  quickSort(x, 0, power-1);
  time_t y = time(NULL);
  //cin.ignore();
  //print(x, power);
  cout << float(y-l) << endl;
}


void quickSort(int x[], int low, int high)
{
    if (low < high)
    {
         int pos = partition(x, low, high);
	 quickSort(x, low, pos - 1);
	 quickSort(x, pos + 1, high);
    }
}

void print(int array[], int size){
  for(int i = 0; i < size; i++){
    cout << array[i] << endl;
  }

}

int pivotselect(int x, int y, int z){
  if (x > y) {
    if (y > z) {
      return y;
    } else if (x > z) {
      return z;
    } else {
      return x;
    }
  } else {
    if (x > z) {
      return x;
    } else if (y > z) {
      return z;
    } else {
      return y;
    }
  }
  
}


int partition( int x[],int low,int high){
  int pivot = x[high];
  int pivot1 = x[high];
  int pivot2 = x[low];
  int pivot3 = x[high/2];
  pivot = pivotselect(pivot1, pivot2, pivot3);
  
    
  int i = low - 1; 
  
  for (int j = low; j <= high- 1; j++)
    {
      if (x[j] <= pivot)
        {
	  i++;
	  swap(x[i], x[j]);
        }
    }
  swap(x[i + 1], x[high]);
  return i + 1;
}



