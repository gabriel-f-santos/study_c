 #include <stdio.h>

 int main() {
    for (int i = 0; i < 10000; i += 100){
        printf("%d\n", i);
    }
 }