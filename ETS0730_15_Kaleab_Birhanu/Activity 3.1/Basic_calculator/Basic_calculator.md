 pseudocode

START
  DECLARE op, exitcode AS CHAR
  DECLARE num1, num2 AS FLOAT
  DO
    PRINT "Enter the first number: "
    INPUT num1
    PRINT "Enter operator: (+, -, *, /)   "
    INPUT op
    PRINT "Enter the second number: "
    INPUT num2

    SWITCH op
      CASE '+':
        PRINT num1 + num2
      CASE '-':
        PRINT num1 - num2
      CASE '*':
        PRINT num1 * num2
      CASE '/':
        IF num2 != 0 THEN
          PRINT num1 / num2
        ELSE
          PRINT "undefined operation !"
        ENDIF
      DEFAULT:
        PRINT "Invalid operator!"
    ENDSWITCH

    PRINT "Enter 0 to exit, any other key to continue: "
    INPUT exitcode
  WHILE exitcode != '0'
END
