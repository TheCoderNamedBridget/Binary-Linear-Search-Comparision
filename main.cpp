/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

void sort( int[] list, int size )
{
    cout<<"HERE OK :D"<<endl;
}

int main()
{
    int n;
    cout<<"Enter a positive int"<<endl;
    cin>>n;
    srand (time(NULL));
    int arrayOfNums[n];
    for ( int i = 0; i < n; i++)
    {
        int ranNum = rand() % 1000 - 1000;
        arrayOfNums[i] = ranNum;
    }
    
    sort( arrayOfNums, n );
    int key = rand() % n;
    

    return 0;
}

