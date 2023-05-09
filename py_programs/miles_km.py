# This python program receives distance value in miles
# Converts the value to Kilometers
# Prints out the value recieved and its corresponding value in kilometers

print("Miles to Kilometers Converter\n")
miles = input("Enter distance in miles: ")

miles = float(miles)

km = miles * 1.60934

print("{:.1f} miles equal {:.2f} kilometers".format(miles, km))
