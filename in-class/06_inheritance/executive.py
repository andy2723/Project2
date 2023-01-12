import person

class Executive(person.Person):
    def attend_a_meeting(self):
        print("{} has attended a meeting." .format(self.name))