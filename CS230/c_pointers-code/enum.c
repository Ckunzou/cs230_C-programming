#include <stdio.h>

typedef enum ColorEnum ColorEnum;
enum ColorEnum {
  RED,
  BLUE,
  GREEN
};

typedef struct Color Color;
struct Color {
  enum ColorEnum color;
};

void printColorEnum(ColorEnum c) {
  printf("%d\n", c);
}

void printColor(Color c) {
  printf("%d\n", c.color);
}

int main(int argc, char* argv[]) {
  ColorEnum c = BLUE;

  // No checking on the type here:
  printColorEnum(c);
  printColorEnum(1);

  Color color = { BLUE };
  
  // This does check the type:
  printColor(color);

  return 0;
}
