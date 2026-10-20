// MajorityElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& arr) {

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int count = 0;


        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }

        if (count > n / 2) return arr[i];
    }

}

int main()
{

    vector<int> arr = { 1,1,2,1,3,5,1 };
    cout << "\nMajority Element: ";
    cout << majorityElement(arr) << endl;

    
}

