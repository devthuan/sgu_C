#include <iostream>
using namespace std;

// nhập mảng 2 chiều
void NhapMangHaiChieu(int matran[100][100], int row, int col){
    cout << "Nhap cac phan tu cua ma tran =>" << endl;
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "dong " << i + 1 << ", cot " << j + 1 << " la : ";
            cin >> matran[i][j];
        }
    }
}

// xuất mảng 2 chiều ra màn hình
void XuatMangHaiChieu(int matran[100][100], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << matran[i][j];
        }
        cout<<endl; 
    }
}
// tổng số phần tử trên đường chéo chính
int tongDuongCheoChinh(int matran[100][100], int row, int col){
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                sum += matran[i][j];
            }
        }
    }
    return sum;
}
// tổng số phần tử đường chéo phụ
int tongDuongCheoPhu(int matran[100][100], int row, int col) {
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i + j == row - 1){
                sum += matran[i][j];
            }
        }
    }
    return sum;
}

// hoán đổi 2 giá trị cho nhau
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// hoán đổi 2 cột của ma trận
void swap2Col(int matran[100][100], int row, int col, int col1, int col2){
    int temporary;
    col1--;
    col2--;
    for(int i = 0; i < row; i++) {
        swap(matran[i][col1], matran[i][col2]);
    }
}

// sắp xếp tăng dần theo cột
void sapXepTangTheoCot(int matran[100][100], int row, int col) {
    for(int i = 0; i < row*col - 1; i++){
        for(int j = i+1; j < row*col; j++){
            if(matran[i / row][i % col] > matran[j / row][ j % col]) {
                swap(matran[i / row][i % col], matran[j / row][j % col]);
            }
        }
    }
}

// tìm giá trị lớn nhất trong ma trận
int timMax(int matran[100][100], int row, int col){
    int i, j, max;
    max = matran[0][0]; 
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            if (matran[i][j] > max)
                max = matran[i][j];
    return max;
}

// tìm giá trị nhỏ nhất trong mang trận
int timMin(int matran[100][100], int row, int col){
    int i, j, min;
    min = matran[0][0]; 
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            if (matran[i][j] < min)
                min = matran[i][j];
    return min;
}


int main(){
    int row, col, A[100][100], result;
    cout << "Nhap so dong  cua ma tran: ";   cin >> row;
    cout << "Nhap so cot cua ma tran: ";   cin >> col;

    // Nhập mảng 2 chiều
    NhapMangHaiChieu(A, row, col);
    
    // Bài 19 
    cout << "Tong cac phan tu tren duong cheo chinh la : " << tongDuongCheoChinh(A, row, col) << endl;
    
    // Bài 20
    cout << "Tong cac phan tu tren duong cheo phu la : " << tongDuongCheoPhu(A, row, col) << endl;
    
    XuatMangHaiChieu(A, row, col);
    cout << endl;
    
    // Bài 21
    swap2Col(A, row, col, 1, 2);
    cout << "Ma tran sau khi hoan doi 2 cot" << endl;  
    XuatMangHaiChieu(A, row, col);
    cout << endl;
    
    // Bài 22
    sapXepTangTheoCot(A, col, row);
    cout << "Ma tran sau khi sap xep theo cot" << endl;  
    XuatMangHaiChieu(A, row, col);
    cout << endl;

    // Bài 23
    cout << "gia tri lon nhat trong ma tran la: " << timMax(A, col, row);  
    cout << endl;
    cout << "gia tri lon nhat trong ma tran la: " << timMin(A, col, row);  


    return 0;
}