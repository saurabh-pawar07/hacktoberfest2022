#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int arrayNum[50], count, temp, i, j;  
    cout << " Enter number of elements in array: ";  
    cin >> count;  
      
    //  for loop to enter the numbers   
    for (i = 0; i < count; i++)  
    {  
        cout << " Enter the element " << i+1 << ": ";  
        cin >> arrayNum[i];  
    }  
      
      
    for ( i = 0, j = count - 1; i < count/2; i++, j--)  
    {     
        temp = arrayNum[i];  
        arrayNum[i] = arrayNum[j];  
        arrayNum[j] = temp;  
    }  
    cout << "\n Reverse all elements of the array: " << endl;  
    //  for loop to print the reverse array  
    for ( i = 0; i < count; i++)  
    {  
        cout << arrayNum[i] << " ";  
    }  
    return 0;  
}  