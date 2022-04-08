// Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.
// Write a space.cpp program that helps him keep track of his target weight by:
// It should ask him what his earth weight is.
// Ask him to enter a number for the planet he wants to fight on.
// It should then compute his weight on the destination planet.

// Planet/Relative Gravity to Earth: 
// Mercury, 0.38
// Venus, 0.91
// Mars, 0.38
// Jupter 2.34
// Saturn 1.06
// Uranus 0.92
// Neptune 1.19

int main() {

  double weight;
  planet_choice;

  std::cout << "What is your Earth weight in pounds?\n";
  std::cin >> weight;
  std::cout << "Please choose your destination.\n";
  std::cout << "1. Mercury, 2. Venus, 3. Mars\n";
  std::cout << "4. Jupiter, 5. Saturn, 6. Uranus\n";
  std::cout << "7. Neptune\n";
  std::cin >> planet_choice;

  if (planet_choice == 1) {
    weight = weight * 0.38;
  } else if (planet_choice == 2) {
    weight = weight * 0.91;
  } else if (planet_choice == 3) {
    weight = weight * 0.38;
  } else if (planet_choice == 4) {
    weight = weight * 2.34;
  } else if (planet_choice == 5) {
    weight = weight * 1.06;
  } else if (planet_choice == 6) {
    weight = weight * 0.92;
  } else if (planet_choice == 7) {
    weight = weight * 1.19;
  }
  std::cout << "Your weight on the visiting planet: " << weight << "\n";
}
