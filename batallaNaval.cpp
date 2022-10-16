#include <iostream>
using namespace std;

void showMatriz(char **arr, int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void pieces(char **arr, int orientacion, int init_fila, int init_col, int ficha_size){
    if(orientacion == 0){
        for (int i = init_fila; i < init_fila + ficha_size; i++) {
            arr[i][init_col] = 'B';
        }
    } else{
        for (int i = init_col; i < init_col + ficha_size; i++) {
            arr[init_fila][i] = 'B';
        }
    }
}

void tiro(char **arr, int pos_tiro_fila, int pos_tiro_col){
    if(arr[pos_tiro_fila][pos_tiro_col] == 'A'){
        arr[pos_tiro_fila][pos_tiro_col] = 'O';
    } else{
        arr[pos_tiro_fila][pos_tiro_col] = 'X';
    }
}

int main(){
    int cols = 9, rows = 9;
    int init_fila, init_col, ficha_size, orientacion;
    int init_fila2, init_col2, ficha_size2, orientacion2;
    int pos_tiro_fila, pos_tiro_col;
    char **arr = new char*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new char[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = 'A';
        }
    }

    showMatriz(arr, rows, cols);

    cin >> init_fila >> init_col >> ficha_size >> orientacion;

    cin >> init_fila2 >> init_col2 >> ficha_size2 >> orientacion2;

    cin >> pos_tiro_fila >> pos_tiro_col;

    pieces(arr, orientacion, init_fila, init_col, ficha_size);
    pieces(arr, orientacion2, init_fila2, init_col2, ficha_size2);

    showMatriz(arr, rows, cols);

    tiro(arr, pos_tiro_fila, pos_tiro_col);

    showMatriz(arr, rows, cols);

    return 0;
}
