#include <stdio.h>
          struct point { double x; double y; };
          int main(void) {
             struct point test;
             test.x = .25; test.y = .75;
             printf("(%6.4f, %6.4f)\n", test.x, test.y);
             return 0;
          }