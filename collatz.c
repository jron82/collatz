#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rules(int x);
void game(int x);


int main(void) {
  srand(time(NULL));
  int seed = (rand() % (10000 - 5 + 1)) + 5;
  game(seed);
}

int rules(int x) {
  if (x % 2 == 0) {
    return x / 2;
  }

  return 3 * x + 1;
}

void game(int x) {
  int next = rules(x);

  if (x == 1 || next == 1){
    printf("%d \n", 1);
    return;
  }

  if (x == 2 || next == 2) {
    printf("%d \n", 2);
    printf("%d \n", 1);
    return;
  }

  if (x == 4 || next == 4) {
    printf("%d \n", 4);
    printf("%d \n", 2);
    printf("%d \n", 1);
    return;
  }

  printf("%d \n", next);
  game(next);
}
