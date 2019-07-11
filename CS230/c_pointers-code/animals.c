#include <stdio.h>
#include <string.h>

/** The length of strings in this program. */
#define STRINGLEN 50

/**
 * A representation of a dog.
 */
typedef struct Dog Dog;
struct Dog {
  char name[STRINGLEN];
  char bark[STRINGLEN];
};

/**
 * A representation of a cat.
 */
typedef struct Cat Cat;
struct Cat {
  char name[STRINGLEN];
  char meow[STRINGLEN];
};

/**
 * Kinds of different snakes.
 */
typedef enum snake_kind snake_kind;
enum snake_kind {
  VENOMOUS,
  NOT_VENOMOUS
};

/**
 * A representation of a snake.
 */
typedef struct Snake Snake;
struct Snake {
  char name[STRINGLEN];
  int  length;
  char hiss[STRINGLEN];
  snake_kind kind;
};

/**
 * An animal type is an enumeration for different
 * types of animals we may encounter.
 */
typedef enum AnimalType AnimalType;
enum AnimalType {
  DOG,
  CAT,
  SNAKE
};

/**
 * A representation of an animal.
 *
 * An Animal is either a dog, cat, or snake - so, we use
 * a union for that. This is kind of upsided down inheritance
 * where we define the subclasses first and then the base class.
 * We provide an animal type to distinguish between them.
 */
typedef struct Animal Animal;
struct Animal {
  AnimalType type;
  union {
    Dog dog;
    Cat cat;
    Snake snake;
  };
};

/**
 * A constructor function for creating a new dog Animal.
 */
Animal MakeDog(char name[], char bark[]) {
  Dog dog;
  strcpy(dog.name, name);
  strcpy(dog.bark, bark);
  Animal animal;
  animal.type  = DOG;
  animal.dog = dog;
  return animal;
}

/**
 * A constructor function for creating a new cat Animal.
 */
Animal MakeCat(char name[], char meow[]) {
  Cat cat;
  strcpy(cat.name, name);
  strcpy(cat.meow, meow);
  Animal animal;
  animal.type  = CAT;
  animal.cat = cat;
  return animal;
}

/**
 * A constructor function for creating a new snake Animal.
 */
 Animal MakeSnake(char name[], int length, char hiss[], snake_kind kind) {
  Snake snake;
  strcpy(snake.name, name);
  strcpy(snake.hiss, hiss);
  Animal animal;
  animal.type  = SNAKE;
  animal.snake = snake;
  return animal;
}

/**
 * A function to make an animal "speak".
 */
int speak(Animal animal) {
  switch (animal.type) {
    case DOG:
      printf("%s says \"%s\"\n", animal.dog.name, animal.dog.bark);
      break;
    case CAT:
      printf("%s says \"%s\"\n", animal.cat.name, animal.cat.meow);
      break;
    case SNAKE:
      printf("%s says \"%s\"\n", animal.snake.name, animal.snake.hiss);
      break;
    default:
      return -1;  // negative numbers are often used to indicate failures ...
  }
  return 0;
}

/**
 * The program entry point.
 */
int main (int argc, char const *argv[]) {
  Animal animals[3];
  animals[0] = MakeDog("spot", "woof, woof!");
  animals[1] = MakeCat("fluffy", "meoooooowww!");
  animals[2] = MakeSnake("snape", 6, "hisssssss!", VENOMOUS);

  for (int i = 0; i < 3; i++) {
    int res = speak(animals[i]);
    if (res == -1) {
      printf("Unknown animal!");
      return 0;
    }
  }

  return 0;
}
