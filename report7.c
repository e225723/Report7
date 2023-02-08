#include <stdio.h>

void print_array(int array[], int size);
void print_array(int array[], int size){
    for(int i=0; i<size; i++){
        printf("data[%d] = %d\n",i,array[i]);
    }
}

void sourt(int array[], int size);
void sourt(int array[], int size){
    int x;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (array[i] < array[j]){
               x = array[i];
               array[i] = array[j];
               array[j] = x;
            }
        }
    }
}

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言
    int scores[SIZE] = {0, 60, 70, 100, 90};

    // 関数呼び出し時には、引数として配列名をそのまま記述する。
    printf("ソート前の配列です\n");
    print_array(scores, SIZE);
    sourt(scores, SIZE);
    printf("ソート後の配列です\n");
    print_array(scores, SIZE);
    return 0;
}