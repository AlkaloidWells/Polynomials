# Polynomials
Polynomial of n degree solving algorithim build with C

# POLYNOMIAL REPRESENTATION USING LINKED LIST


Introduction:
The entire project was handled using a single linked list. Details on how the various tasks were handled are explained bellow..
YOU FIND COMPLETE CODE TO THE PROJECT IN THE FOLDER, main.c
Task 1
This task required us to create a data structure called poly_node to represent a polynomial.
We did this using a user defined data type struct. The structure contained the coefficient of the node , exponent and a pointer to another node .
The code for this task is shown below :


Task 2
The function create Poly_Node was done was implemented as a void function which took as paramters a pointer to a pointer of the first node , and a two integers c and e representing their coefficient and exponent respectively . two pointers were used for this task temp and temp 1 .the code and screenshot for this creation are given bellow .
The create poly_Node function was implemented in the main function in a for loop.
The user was asked to enter the number of terms , and a for loop was created to handle the creation of
nodes for the number of times entered by the user.


Task 3
The function display_poly was created to display the all the nodes created in task 3 as a full polynomial .the polynomial is displayed with a + sign in-between the nodes, and the nodes are arranged in descending other of their exponents.
In our implementation, we made sure after all the nodes were inserted , this displayed function is called to display all the nodes created with an addition in-between them and arranged in descending order of their exponent with each node of the form ax^n where a is the coefficient and n ,the exponent.
The execution of this function is shown in the screenshot bellow :


![image](https://github.com/AlkaloidWells/Polynomials/assets/55930366/7f0d8cb6-c78e-4e9f-bb2f-f11447dc82ad)


Task 4
The degree_poly(poly_node *p) was created to return the highest degree of the polynomial .
Using a while loop , a simply searching method is implemented where the exponent of each node is compared to those of the others and at the end , the largest coefficient is returned
This displayed function is called in our execution after the display _function and it prints the highest coefficient of the polynomial created

![image](https://github.com/AlkaloidWells/Polynomials/assets/55930366/8766152a-b831-4fc1-abb9-d5b0e2831e60)

Task 5
The function void Add_poly(structpoly_Node **,structpoly_Node **,structpoly_Node**); was created to add the polynomial P and Q inserted , And Store The result as in R .
In our execution ,R is displayed after the polynomials are inserted R.
A Screenshot of it’s execution is shown below:
![image](https://github.com/AlkaloidWells/Polynomials/assets/55930366/bd465dda-6196-42ba-8ca5-1ca142d20ea6)

Task 7
The void Multiply_poly(structpoly_Node ** start_p,structpoly_Node **start_q,structpoly_Node** start_r) was implemented to multiply the polynomials P and Q and return the result as R .
Function is called in the main function after the Add_Poly function and displayed immediately after the Sum has be displayed as show below .
![image](https://github.com/AlkaloidWells/Polynomials/assets/55930366/c0b6184f-2b62-49f3-a4d8-e951b899419a)

![image](https://github.com/AlkaloidWells/Polynomials/assets/55930366/2704edb1-1312-437f-a1ba-58b0c5423667)


