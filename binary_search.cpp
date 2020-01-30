#include <iostream>

using namespace std;

int binary_search(int list[], int left, int right, int element);

int main(void){

    int list[] = {1,2,3,4,5,6,7};
    
    cout << "Hi!\n" << binary_search(list, 0, 6, 3) << "\n";

    return 0;
}

int binary_search(int list[], int left, int right, int element){

    if(right >= left){
        int index = (left + right)/2;
        int now = list[index];
        
        if(element == now){
            return index;
        }else if(now > element){
            return binary_search(list, left, index - 1, element);
        }else{
            return binary_search(list, index + 1, right, element);
        }
    }else{
        return -1;
    }

}