   Problem  analysis

Input:Employee name,Weekly working hours,Bonus rate per hour,Base salary

Output:Gross salary,Net salary,Bonus payment

Process:Prompt the user to enter the employee name, weekly working hours, bonus rate per hour, and base salary.

Calculate the gross salary using the formula: gross_salary = (weekly_working_hours * base_salary) + (bonus_rate_per_hour * weekly_working_hours).

Calculate the pension deduction using the formula: pension_deduction = 0.05 * gross_salary.

Calculate the tax deduction using the formula: tax_deduction = 0.15 * gross_salary.

Calculate the net salary using the formula: net_salary = gross_salary - (pension_deduction + tax_deduction).

Calculate the bonus payment using the formula: bonus_payment = bonus_rate_per_hour * weekly_working_hours.

Display the gross salary, net salary, and bonus payment.



   Pseudocode

step 1: start

step 2: read the Employee Name,weekly working hours,bonus rate per hour,base salary

step 3: totalWeeklySalary <-- (weeklyWorkingHours * baseSalary) + (bonusRatePerHour * weeklyWorkingHours)

step 4: bonusPayment <-- bonusRatePerHour * weeklyWorkingHours

step 5: grossSalary  <-- totalWeeklySalary * 4

step 6: pensionDeduction <--  grossSalary * 0.05

step 7: taxDeduction <-- grossSalary * 0.15

step 8: netSalary  <-- grossSalary - (pensionDeduction + taxDeduction)

step 9: print (Employee Name,Gross Salary,Net Salary,Bonus Payment). 

step 10: stop
