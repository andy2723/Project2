class Atom:
    """An element from the periodic table."""

    def neutrons(self):
        """Returns the number of neutrons the element has"""
        number = self.isotope - self.atomic
        print("%s has %d neutrons" % (self.symbol, number))
        return number

    def grams_to_moles(self, grams):
        """Converts the mass of an element in grams to moles"""
        moles = grams / self.mass
        print("%.1f g is %.1f moles of %s" % (grams, moles, self.symbol))
        return moles


if __name__ == "__main__":

    oxygen = Atom()  # create an Atom object
    oxygen.symbol = "O"
    oxygen.atomic = 8
    oxygen.mass = 15.999
    oxygen.isotope = 16
    carbon = Atom()  # create another Atom object
    carbon.symbol = "C"
    carbon.mass = 12.001
    oxygen.neutrons()
    oxygen.grams_to_moles(24)
    carbon.grams_to_moles(24)
