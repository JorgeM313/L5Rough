// Jorge Martinez
// CPSC 121 Lab 5
// 10/17/18

#include <iostream>
#include <iomanip>

using namespace std;
const int SIZE = 5;
int array[SIZE];

void promptUser()
{
  cout << "Please enter values for your array of five integers: ";
  cin >> array[0];
  cin >> array[1];
  cin >> array[2];
  cin >> array[3];
  cin >> array[4];
  cout << "Here are your current values: " << endl;
  cout << array[0] << endl;
  cout << array[1] << endl;
  cout << array[2] << endl;
  cout << array[3] << endl;
  cout << array[4] << endl;
}

void Sum(int array[], int & result)
{
  result = array[0] + array[1] + array[2] + array[3] + array[4];
}

int main()
{
  int choice = 0;
  cout << "Welcome to the Arrays Lab" << endl;
  cout << endl;
  Sum(arr, sum_answer);
  do {
  promptUser();
  cout << "Choose what you would like to do with this array: " << endl;
  cout << "1.Sum \n";
  cout << "2.Mean \n";
  cout << "3.Display \n";
  cout << "4.Sequencing \n";
  cout << "5.Search \n";
  cout << "6.Sort \n";
  cout << "7.Edit \n";
  cout << "8.Exit \n";
  cin >> choice;
  if (choice == 1)
  {
    Sum(array[], result);
  }
  if (choice == 8)
  {
    return 0;
  }
}
while (choice == 7);
return 0;
}
