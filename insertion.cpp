#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;
void print(int array[], int size);
int insertion(int x[], int size);

int main(){
  int power = pow(10,5);
  int array[power];
  
  for(int i = 0; i < power; i++){
    array[i] = rand();
  }
  //print(array, power);
  time_t x = time(NULL);
  insertion(array, power);
  time_t y = time(NULL);
  //cin.ignore();
  //print(array, power);
  cout << difftime(y,x) << endl;
  
}

void print(int array[], int size){
  for(int i = 0; i < size; i++){
    cout << array[i] << endl;
  }

}


int insertion(int x[], int size){
  int j,k, i;
  i = 1;
  j = 0;
  k= 0;
  
  while(i < size){
    j = i;
    while(j > 0 && x[j-1] > x[j]){
      swap(x[j],x[j-1]);
      j--;
    }
    i++;
  }
}
