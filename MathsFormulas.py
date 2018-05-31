import time
import math
import matplotlib as plt
import numpy as np

# Starting function for script.  
# Prints options for user input and runs another option.  
# Returns result to caller. 
def start():
	print("Which formula would you like to use? ")
	print("1. Quadratic")
	print("2. Direct Proportions")
	print("3. Midpoint of coordinates")
	print("4. Distance")
	print("5. Derviatives")
	print("0. Quit")
	menuChoiceAns = int(input(" ")) 
	return menuChoiceAns

# quadratic function.
# collects user input for values a,b and c
# prints vertex of quadratic
# prints x-intercepts of equation
def quadratic():
	a = int(input("Input ax^2+bx+c=0 of a: "))
	b = int(input("Input ax^2+bx+c=0 of b: "))
	c = int(input("Input ax^2+bx+c=0 of c: "))

	now = time.time()

	x1 = (-b + math.sqrt(b ** 2 - 4 * a * c))/(2 * a)
	x2 = (-b - math.sqrt(b ** 2 - 4 * a * c))/(2 * a)

	print("x1 = " + str(x1) + " x2 = " + str(x2))

	print("Seconds: " + str(time.time() - now))	
	
	# asks user for vertex point of parabola
	responseVertex = input("Would you like the vertex coordinates? (type yes or no)")
	if responseVertex == "yes" :
		
		h = -b/(2 * a)
		k = c

		print("vertex (h,k)/(x,y) = (" + str(h) + "," + str(k) + ")")

	# asks user for graph of equation inputed to be drawn
	responseGraph = input("Would you like a graph of it? (type yes or no)")
	if responseGraph == "yes" :
		x = np.arange(x2 - 10,x1 + 10,0.1)
		plt.plot (x, a * x ** 2 + b * x + c)
		plt.show()

# direct proportions function
def directproportions():
	x = int(input("Input value of x (smaller number): "))
	y = int(input("Input value of y (larger number): "))

	now = time.time()

	k = y/x

	print("The proportionality constant is (value of k): " + str(k))	

	print("Seconds: " + str(time.time() - now))	

# midpoint formula function
def midpoint():

	x1 = int(input("value of x1: "))
	x2 = int(input("value of x2: "))
	y1 = int(input("value of y1: "))
	y2 = int(input("value of y2: "))

	now = time.time()

	x = (x1 + x2)/2
	y = (y1 + y2)/2

	print("Midpoint coordinates are (x,y): (" + str(x) + "," + str(y) + ")")

	print("Seconds: " + str(time.time() - now))	

# distance equation function
def distance():

	x1 = int(input("value of x1: "))
	x2 = int(input("value of x2: "))
	y1 = int(input("value of y1: "))
	y2 = int(input("value of y2: "))

	now = time.time()

	d = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

	print("The distance is: " + str(d))

	print("Seconds: " + str(time.time() - now))	


#function for finding derviatives
def derivatives():

	dervivativeAns == -1

	print("What kinda of function do you have?")
	print("1. ax^n")
	print("0. Quit")

	dervivativeAns = int(input(""))
	if dervivativeAns == 1 :
		derivativesAxn()


#calculates derviative of a parabola
def derivativesAxn():
	x = int(input("value of x (the point you want the gradient)"))
	n = int(input("value of n (what power x is raised to)"))
	a = int(input("value of a (coefficent of x)"))

	now = time.time()

	d = n * a * x ** (n-1)

	print("the gradient of that point is " + str(d))

	print("Seconds: " + str(time.time() - now))	

#calculates inverse of a function that was derived from function nax^n-1
def inverseDerivativesAxn():
	x = int(input("value of x (the point on the function)"))
	n = int(input("value of n (what power x is raised to)"))
	a = int(input("value of a (coefficent of x)"))

	iD =  (a / (n+1)) * x ** (n+1)
	
# while loop allowing user to use different formulas in one session
menuChoiceAns = -1

while menuChoiceAns != 0 :

	menuChoiceAns = start()

	if menuChoiceAns == 1 :
		quadratic()

	elif menuChoiceAns == 2 :
		directproportions()

	elif menuChoiceAns == 3 :
		midpoint()

	elif menuChoiceAns == 4 :
		distance()
		
	elif menuChoiceAns == 5:
		derivatives()

	if menuChoiceAns != 0 :
		input("enter to continue")