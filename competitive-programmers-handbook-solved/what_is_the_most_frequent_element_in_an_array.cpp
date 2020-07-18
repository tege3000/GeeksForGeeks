#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[] =  {-1,2,4,-3,5,2,-5,2};
    int n = 8;
    int tmp;

    //sort first
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[i]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    int num = 0;
    int best = 0;
    
    for(int i=0; i <n; i++) {
        int count = 0;
        
        for(int j = i; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                
            }
            
        }
        
        if(count > best) {
            best = count;
            num = arr[i];
        }
     
        
        
    }
    
    cout << num << " was repeated " << best << " times" << "\n";
    
    
   
}
