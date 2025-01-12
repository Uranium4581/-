#include <stdio.h>
#include <math.h>

int main() {
    int t = 0; // 変数tを初期化
    double f = 0.7; // 変数fを0.5で初期化
    int n = 1; // 変数nを初期化

    double lower_bound = pow(2, -n);
    double upper_bound = pow(2, -n+1);

    printf("f(0) = %lf\n", fabs(f)); // 初期値fの絶対値を出力

    // 1から100までのループ
    for (t = 1; t <= 100; t++) {
        // fの絶対値を使って評価する
        if (fabs(f) >= 0 && fabs(f) < lower_bound) {
            f = pow(2, n) * fabs(f); // 絶対値を使って更新式1
            printf("%d;\n",t);
            printf("0   <= |f| <  %.1lf: %.1lf\n", lower_bound, fabs(f));
        } else if (fabs(f) >= lower_bound && fabs(f) <= upper_bound) {
            f = -pow(2, n) * (fabs(f) - lower_bound); // 絶対値を使って更新式2
            printf("%d;\n",t);
            printf("%.1lf <= |f| <= %.1lf: %.1lf\n", lower_bound, upper_bound, fabs(f));
        }
    }

    return 0; // プログラムの終了
}