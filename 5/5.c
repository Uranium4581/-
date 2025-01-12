#include <math.h>
#include <stdio.h>

int main() {
    int t = 0; // 変数 t の初期化
    double f = 0.7; // 初期値 f の設定
    int n = 1; // 変数 n の初期化
    
    double lower_bound = pow(2, -n);   // 下限の計算
    double upper_bound = pow(2, -n+1); // 上限の計算

    printf("%lf → %lf\n", lower_bound, upper_bound); // 下限と上限の出力

    // 1 から 100 までのループ
    for (t = 1; t <= 100; t++) {
        

        // 条件に基づく計算と出力
        if (f >= 0 && f < lower_bound) {
            f = pow(2, n) * f; // f の計算
            printf("f = %.10lf\n", f); // f の出力
        } else if (f >= lower_bound && f <= upper_bound) {
            f = -pow(2, n) * (f - lower_bound); // f の計算
            printf("f = %.10lf\n", f); // f の出力
        } else if (f < 0 || f > upper_bound) {
            f = f - upper_bound; // f の計算
            printf("f = %.10lf\n", f); // f の出力
        }
    }

    return 0; // プログラムの終了
}
