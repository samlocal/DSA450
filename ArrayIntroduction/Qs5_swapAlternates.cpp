//question link 
// https://www.naukri.com/code360/problems/swap-alternate_624941?leftPanelTabValue=PROBLEM
#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int *arr, int size) {
  for (int i = 0; i < size - 1; i = i + 2) {
    if (i == size - 1)
      break;
    swap(arr[i], arr[i + 1]);
  }
}