#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    printf("%d\n%ld\n%c\n%.6f\n%.6lf\n", a, b, c, d, e);

    return 0;
}
