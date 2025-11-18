import random
import time

class Pet:
    def __init__(self, name):
        self.name = name
        self.hunger = 50
        self.happiness = 50
        self.action_count = 0

    def feed(self):
        print(f"{self.name}'s Feeding completed\n")
        self.hunger -= 15
        self.happiness -= 5
        self._clamp_values()
        if self.happiness < 20:
            print(f"{self.name} is feeling unhappy!!!")


    def play(self):
        print(f"{self.name}'s Playing completed")
        self.happiness += 15
        self.hunger += 5
        self._clamp_values()
        if self.hunger > 80:
            print(f"{self.name} is very hungry and feeling sad!!!")

    def check_status(self):
        print(f"Status of Pet: {self.name}")
        print(f"Hunger Level: {self.hunger}")
        print(f"Happiness Level: {self.happiness}")

    def _clamp_values(self):
        self.hunger = min(100, max(0, self.hunger))
        self.happiness = min(100, max(0, self.happiness))

    def auto_update(self):
        self.action_count += 1
        if self.action_count%3 == 0:
            #For every 3 actions, Hunger increases and Happiness decreases
            print(f"As time is passing... {self.name} is feeling hungry and boring!")
            self.hunger += 5
            self.happiness -= 5
            self._clamp_values()        

    def random_event(self):
        #15% chance of a random event!
        if random.random()<0.15:
            events = [
                ("found a snack", -10, +5),
                ("took a refreshning nap", 0, +10),
                ("is feeling a bit sick", +10, -10),
                ("found a new toy", 0, +15),
            ]
            event, hunger_change, happiness_change = random.choice(events)
            print(f"RANDOM EVENT OCCURRED!!!")
            print(f"{self.name} {event}!")
            self.hunger += hunger_change
            self.happiness += happiness_change
            self._clamp_values()

    def is_game_over(self):
        if self.hunger >= 100:
            print(f"{self.name} died due to Excessive Hunger! GAME OVER!!!")
            return True
        if self.happiness <= 0:
            print(f"{self.name} died due to Sadness! GAME OVER!!!")
            return True
        return False
def main():
    print("Welcome to Virtual Pet Simulator!")
    pet_name = input("Enter the name of your pet: \n")
    pet = Pet(pet_name)
    while True:
        print(f"What do you like to do with your pet {pet.name}?")
        print("1. Feed the Pet")
        print("2. Play with the Pet")
        print("3. Check Pet Status")
        print("4. Exit")

        choice = int(input("Enter your choice: \n"))
        match(choice):
            case 1: pet.feed()
            case 2: pet.play()
            case 3: pet.check_status()
            case 4: 
                print("Exiting...")
                break
            case _: print("INVALID CHOICE ENTERED! TRY AGAIN!!!")
        pet.auto_update()
        pet.random_event()
        if pet.is_game_over():
            break

main()