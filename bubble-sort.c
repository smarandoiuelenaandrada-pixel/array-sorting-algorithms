#include <stdio.h>
#define NMAX 100

int main(void) {
     int v[NMAX], n;
     scanf("%d", &n);

     for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
      }

      for (int i = 0; i < (n - 1); ++i) {
          for (int p = i + 1; p < n; ++p) {
              if (v[i] > v[p]) {
                  v[i] = v[i] + v[p];
                  v[p] = v[i] - v[p];
                  v[i] = v[i] - v[p];
               }
           }
        }

        //vectorul sortat:

        for (int i = 0; i < n; ++i) {
            printf("%d ", v[i]);
        }

}
