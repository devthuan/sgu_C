#include <iostream>
#include <math.h>
#include <fstream>
#define MAX 100
#define COL 2
using namespace std;



void taoMang(int a[MAX], int &length){
    length = 7;
    for (int i = 0; i < length; i++){
        a[i] = 0;
        
    }

}

// xuất mảng
void outputArray(int a[], int &n){
    for (int i = 0; i < n; i++) {
         cout<< a[i] << "      "; 
    }

};

int sum(int a[MAX], int n) {
    int result = 0;
     for (int i = 0; i < n; i++) {
         result += a[i];
    }
    return result;
}

int avg(int a[MAX], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
         sum += a[i];
    }
    int result = float(sum) / n;
    return result;
}

void capnhatgt(int a[MAX], int sum, int avg){

}

void menu() {
    cout << "Tong so ca" << " | " << "Trung binh" << " | " << "Thu 2" << " | " << "Thu 3" << " | " << "Thu 4" << " | " << "Thu 5" << " | " << "Thu 6" << " | " << "Thu 7" << " | " << "Chu nhat" << " |" << endl;

}

void insertElement(int array[], int &length, int location, int position){ 
        for(int i = length; i > location; i--) {
            array[i] = array[i-1];
        }
        array[location] = position;
        length++;
    
}

// xoá một phần tử trong mảng
void deleteOneElement(int array[], int &length, int position){
    for(int i = position; i < length - 1; i++ ){
        array[i] = array[i+1];
    }
    length--;
}


// số ca nhiễm cao nhất trong tuần
int max(int a[], int n) {
    int max = a[0], index;
    for( int  i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];    
        }
    }
    return max;
};
// số ca nhiễm thấp nhất trong tuần
int min(int a[], int n) {
    int min = a[0], index;
    for( int  i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];    
        }
    }
    return min;
};



int main() {
    int arr[MAX], length, num, i = 0;
    taoMang(arr, length);

    while(i < 8) {
        menu();
        cout << "   " << sum(arr, length) << "        ";
        cout << "   " << avg(arr, length) << "      ";
        outputArray(arr, length);
        
        cout << endl;

        cout <<"nhap so ca mac ngay " << i << ": ";
        cin >> num;
        insertElement(arr, length, i, num);
        deleteOneElement(arr, length, 8);
        i=i+1;
    }

    cout << "so cao nhiem cao nhat trong tuan: " << max( arr, length);
    cout << endl;
    cout << "so cao nhiem thap nhat trong tuan: " << min( arr, length);
    


    return 0;
}