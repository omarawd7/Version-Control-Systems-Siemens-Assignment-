
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int getSum(vector <int> &arr){
int sum=0;
for (size_t i = 0; i < arr.size(); i++)
{
 sum+=arr[i];
}

return sum;
}
int getMin(vector <int> &arr){
int min=arr[0];
for (size_t i = 1; i < arr.size(); i++)
{
 if(min>arr[i]){
    min=arr[i];
 }
}

return min;
}
int main() {

vector <int> arr;
for (size_t i = 0; i <10; i++)
{
 arr.push_back(10);
}

cout<<getSum(arr);
cout<<getMin(arr);
}