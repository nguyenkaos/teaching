#define NORTH        0
#define SOUTH        1
#define EAST         2
#define WEST         3
#define NONE         4

int wind_direction = NONE;

enum wind_directions { NORTH, SOUTH, EAST, WEST, NONE };

wind_directions w = NONE;
wind_directions e = 453; // ERREUR

enum Color    { RED, GREEN, BLUE };
enum Feelings { EXCITED, MOODY, BLUE }; // ERREUR

enum class Color    { RED, GREEN, BLUE };
enum class Feelings { EXCITED, MOODY, BLUE };

Color color = Color::GREEN;

// un entier 8 bits est suffisant ici
enum class Colors : unsigned char
  { RED = 1, GREEN = 2, BLUE = 3 };
