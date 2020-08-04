#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, current_input, index, middle_index;
  float mean, sum, median;

  cout<<"Input n: "; 
  cin>>n;

  int array_n[n];

  for (index = 0; index < n; index++) {
    cout<<"Input number " << (index + 1) << ": "; 
    cin >> current_input;
    array_n[index] = current_input;

    // prep for mean; get sum of inputs
    sum += float(current_input);
  }
  cout << "\nYour numbers are: "; 
  for (index = 0; index < n; index++) {
    cout << array_n[index] << ", ";
  }

  // get the mean
  mean = sum / n;
  cout << "\n\nMean is " << mean << endl;

  // Sort array in ascending order
  int i, j, temp;
  for (i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      if (array_n[i] > array_n[j]) {
        temp = array_n[i];
        array_n[i] = array_n[j];
        array_n[j] = temp;
      }
    }
  }

  // now that the array is sorted; we can get the median
  
  middle_index = (n/2);

  if (n%2 == 1) {
    // if n is odd, get the middle item
    median = float(array_n[middle_index]);
  } else {
    // if n is even, get the 2 middle items and get the average
    median = (float((array_n[middle_index])) + float(array_n[middle_index-1])) / 2;
  }

  cout << "Median is " << median << endl;

  return 0;
}
