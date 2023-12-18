Problem analysis

       Input:
                The first number for the arithmetic operation, input by the user.
                The operator for the arithmetic operation, input by the user. It can be ‘+’, ‘-’, ‘*’, or ‘/’.
                The second number for the arithmetic operation, input by the user.
                The code to decide whether to continue or exit the loop, input by the user. If ‘0’, the program exits.
       
       Output:
                  It’s either the sum, difference, product, quotient, “undefined operation !” (for division by zero),
                  or “Invalid operator!” (for an invalid operator). The program continues to prompt for input and perform operations until exitcode is ‘0’.
        
       Operation:
                   If op is ‘+’, the operation is addition.
                   If op is ‘-’, the operation is subtraction.
                   If op is ‘*’, the operation is multiplication.
                   If op is ‘/’, the operation is division. However, if num2 is 0, the division operation is undefined.
                   If op is none of the above, it’s an invalid operation.
                    
 Pseudocode

    1. Declare character variables 'op' and 'exitcode'

    2. Declare float variables 'num1' and 'num2'

    3. Do the following steps in a loop until 'exitcode' is '0':

         a. Prompt the user to enter the first number and store it in 'num1'

         b. Prompt the user to enter an operator and store it in 'op'

         c. Prompt the user to enter the second number and store it in 'num2'

         d. Perform the operation based on the value of 'op':

            1. If 'op' is '+', output the sum of 'num1' and 'num2'

            2. If 'op' is '-', output the difference of 'num1' and 'num2'

            3 If 'op' is '*', output the product of 'num1' and 'num2'

            4. If 'op' is '/', check if 'num2' is not zero:

                  4.1. If 'num2' is not zero, output the division of 'num1' by 'num2'

                  4.2. If 'num2' is zero, output "undefined operation !"
                  
            5. If 'op' is none of the above, output "Invalid operator!"

         e. Prompt the user to enter '0' to exit or any other key to continue and store it in 'exitcode'
     5. End

Flowchart


![Blank diagram](https://github.com/SWEG-2015EC-Batch/Trantulas/assets/149373883/d6d48704-3dbd-4b52-b132-4032abb50dd5)


     
