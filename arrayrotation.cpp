#include <iostream>
using namespace std;
/*
This program is simply like an application which aims to find the clockwise or anticlockwise rotation of array 
with minimum time complexity in all types of cases where the size of element value in range (-256-255) 
here user have to select the choice and you only check one array at a time if you want to check multiple array
then you have to run same no of times also.

The algorithm to write this program is-
1- take the array elements and its size as a[n], n;
2- take the no of steps in our rotation as d ;
3- initialise the step size array as c[d];
4- give user choice to select rotation as clockwise or anticlockwise;
5- in clockwise:
    1- store last d(step size of rotation) in c[d] array in same order;
    2- move every element of array a[n] from n-d to 1st to d step forward in array;
    3- set vale of array c[d] same a[1 to d];
    4- our array is rotated;
6- in anticlockwise
    1- store first d(step size of rotation) in c[d] array in same order;  
    2- move every element from d to n in array a[n] to d steps bacward;
    3- set value of array c[d] same a[n-d to n];
    4- our array is rotated
7- if the choice is wrong than ask user to continue if user chooses to continue ask him to select again their choice
   in category of rotation       
*/

int main() {
    int b,d,n;
	cout<<"enter the number of elements in array";      // array size
	cin>>n;
	int *a=new int[n];                                 // dynamic allocation of size of array
	cout<<"eneter the elements in array";
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];                                      // elements initialisation
	}
	cout<<"enter the number of steps";             // size of rotation
	cin>>d;
	int *c=new int[d];                                       // array to secure data of main array which is going to lost 
	int e=0;                                                  // in our process of rotation
	do{
	   cout<<"select your rotation as clockwise or anticlockwise by (0,1)";      // selection process of rotation
	cin>>b;
	switch(b)                                      // identify the user choice through this funtion
	{
	case 0:
	for(int i=0;i<d;i++)
	{
	    c[i]=a[n-d+i];                     //store last d(step size of rotation) in c[d] array in same order;
	}
	for(int i=n-d-1;i>=0;i--)
	{
	    a[i+d]=a[i];                  //move every element of array a[n] from n-d to 1st to d step forward in array;
	}
	for(int i=0;i<d;i++)
	{
	    a[i]=c[i];                   //set vale of array c[d] same a[1 to d];
	}
	e=0;
	  break;
	  case 1:
	  for(int i=0;i<d;i++)
	{
	    c[i]=a[i];             //  store first d(step size of rotation) in c[d] array in same order; 
	}
	for(int i=0;i<n-d;i++)
	{
	    a[i]=a[i+d];           //move every element from d to n in array a[n] to d steps bacward;
	}
	for(int i=0;i<d;i++)
	{
	    a[n-d+i]=c[i];            //set value of array c[d] same a[n-d to n];
	}
	e=0;
	  break;
	  default:
	  cout<<"you eneterd the wrong choice want to select choice again (0,1):";
	  cin>>e;
	}
	}while(e==1);
	cout<<"the array after rotation is";
	for(int i=0;i<n;i++)
	{
	    cout<<a[i];                      //result
	}
	return 0;
}