/**
 * Intermediate: Arthmetic calculation using recursion.
 */
#include "hamiltonian_cycles.h"

long long getHamiltonianCycles(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else if (n == 3) {
    return 2;
  } else if (n == 4) {
    return 6;
  } else {
    return 2 * getHamiltonianCycles(n - 1) + 2 * getHamiltonianCycles(n - 2) -
           2 * getHamiltonianCycles(n - 3) + getHamiltonianCycles(n - 4);
  }
}
