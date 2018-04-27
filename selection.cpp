#include <iostream>
#include <math.h>
#include <time.h>


using namespace std;
int selection(int x[], int size);
void print(int array[], int size);

int main(){
  int power = pow(10,5);
  int array[power];
  for(int i = 0; i < power; i++){
    array[i] = rand();
  }
  
  //print(array, power);
  time_t x = time(NULL);
  selection(array, power);
  time_t y = time(NULL);
  cout << float(y-x) << endl;
  //cin.ignore();
  //print(array, power);
  
  
}

void print(int array[], int size){
  for(int i = 0; i < size; i++){
    cout << array[i] << endl;
  }

}

int selection(int x[], int size){
  int j,k, i;
  int min = 0;
  for(i = 0; i < size-1; i++)
    {
      min = i;
      for(j = i+1; j < size; j++)
	{
	  if(x[j] < x[min])
	    {
	      min = j;
	    }
	  
	}
      if(min != i)
	{
	  swap(x[i],x[min]);
	}
    }
}
