from person import Person 

class Engineer(Person):
    def design_something(self):
        print("{} is designing something." .format(self.name))