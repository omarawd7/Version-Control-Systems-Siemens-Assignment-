
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

int getAverage(vector <int> &arr){
int sum=0;
for (size_t i = 0; i < arr.size(); i++)
{
 sum+=arr[i];
}

return sum/arr.size();
}

int main() {

vector <int> arr;
for (size_t i = 0; i <10; i++)
{
 arr.push_back(10);
}

cout<<getSum(arr);
cout<<getAverage(arr);






}