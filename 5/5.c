#include <stdio.h>
#include <math.h>

int main (){
    int t = 0; // 変数tを初期化
    double f = 0.7; // 変数fを0.7で初期化
    int n = 1; // 変数nを初期化

    double lower_bound = pow(2, -n);
    double upper_bound = pow(2, -n+1);

    printf("f = %lf\n", f); // 変数fの値を出力
    printf("lower_bound = %.10lf\n", lower_bound); // lower_boundの値を出力
    printf("upper_bound = %.10lf\n", upper_bound); // upper_boundの値を出力

    // 1から100までのループ
    for(t = 1; t <= 100; t++){
        // fが0以上で2の-n乗未満の場合
        if(f >= 0 && f < lower_bound) {
            printf("0<=f<%.1lf: %.10lf\n", lower_bound, pow(2, n) * f); // 2のn乗とfの積を出力
        // fが2の-n乗以上で2の-n+1乗以下の場合
        } else if(f >= lower_bound && f <= upper_bound) {
            printf("%.1lf<=f<=%.1lf: %.10lf\n", lower_bound, upper_bound, -pow(2, n) * (f - lower_bound)); // 計算結果を出力
        } else{
            printf("else: %.10lf\n", f - pow(2, -n+1)); // 計算結果を出力
        }
    }

    return 0; // プログラムの終了
}