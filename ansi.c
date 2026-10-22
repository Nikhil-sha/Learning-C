#include <stdio.h>
#include "ansi.h"

int main() {
  printf(ANSI_UNDERLINE "Hello!" ANSI_RESET);
}