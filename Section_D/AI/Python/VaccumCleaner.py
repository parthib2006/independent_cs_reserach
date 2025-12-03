class VacuumEnvironment:
    def __init__(self, location, state_left, state_right):
        self.location = location          
        self.state_left = state_left      
        self.state_right = state_right

    def display(self):
        print(f"Current Location: {self.location}")
        print(f"Left Room: {self.state_left}")
        print(f"Right Room: {self.state_right}")
        print("-----------------------------------")

    def suck(self):
        if self.location == 'Left':
            self.state_left = 'Clean'
        else:
            self.state_right = 'Clean'
        print("Action: CLEAN")
        self.display()

    def move(self):
        if self.location == 'Left':
            self.location = 'Right'
        else:
            self.location = 'Left'
        print("Action: MOVE")
        self.display()

    def solve(self):
        print("Initial State:")
        self.display()

        # Clean current location
        self.suck()

        # Move to other room
        self.move()

        # Clean the other room
        self.suck()

        print("Goal State: Both rooms are clean.")

# Initial state: Vacuum at Left, both rooms dirty
env = VacuumEnvironment('Left', 'Dirty', 'Dirty')
env.solve()