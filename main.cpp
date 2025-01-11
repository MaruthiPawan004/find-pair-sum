#include <iostream>
using namespace std;


void  findPairWithTargetSum(int nums[], int size, int target)
{
   
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout <<" the pair of indices of the array with sum equal to target is :" << "[" << i << ", " << j << "]" << endl;
                
            }
        }  
    }
    cout << "No pair exist" << endl;
}

int main()
{
    int size, target;
    cout << "Enter the size of the array in between 2 to 104: ";
    cin >> size;
    if (size < 2 || size > 104)
    {
        cout << "size is invalid please enter in between 2 to 104." << endl;
        return 1;
    }
    int nums[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
        if (nums[i] < -109 || nums[i] > 109)
        {         
            cout << "Entered Array element is invalid please enter in between -109 to 109." << endl;
            return 1;
        }
    }
    cout << "Enter the target value: ";
    cin >> target;
    if (target < -109 || target > 109)
    {
        cout <<"Entered target is invalid please enter in between -109 to 109." << endl;
        return 1;
    }
    findPairWithTargetSum(nums, size, target);
    return 0;
}
