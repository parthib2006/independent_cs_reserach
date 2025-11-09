temp_type : str = input("Enter C for Celcius or F for Farhenheit\n")
temp : float = float(input(f"Enter temperature in {temp_type}\n"))
def temperature_converter(type, temperature):
    if type=='C' or type=='c':
        return round((temperature * 9 / 5) + 32)
    elif type=='F' or type=='f':
        return round((temperature - 32) * 5/9)
converted_temp : float = temperature_converter(temp_type, temp)
print(f"The converted temperature is: {converted_temp}\n")