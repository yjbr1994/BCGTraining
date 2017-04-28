#include<iostream>
#include<cstring>
using namespace std;//Function Prototype
void MyArray(string arrayHolder[], int sizeofarray);//arrayHolder[] takes whatever array we pass
int main()
{
 string arrayone[6]={"Krishna","Shiva","Rohit","Guna","Siddharth","Rajesh"};
 MyArray(arrayone,6);//Passing arrayone and size of array one into MyArray function
 return 0;           //No need to add "&" before data type..don't know how that works..may be in-built functionality
}
void MyArray(string arrayHolder[], int sizeofarray)//Function Definition
{
 for(int i=0;i<sizeofarray;i++)//i denotes basically each element in arrayone,i is set to zero because array starts with 0,1,2..
 {
  cout<<arrayHolder[i]<<" ";//arrayHolder[i] takes all elements of arrayone and prints out
 }
}
