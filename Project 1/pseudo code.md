Step 1: Start
    Initialize variables and pointers:
        Set employees pointer to null
        Set numEmployees to 0
        Set managerCount, hourlyCount, commissionCount, pieceworkerCount to 0
        Set managerTotal, hourlyTotal, commissionTotal, pieceworkerTotal to 0
        Set managerMax, hourlyMax, commissionMax, pieceworkerMax to 0
        Set managerMin, hourlyMin, commissionMin, pieceworkerMin to 0

Step 2: MainLoop
    Repeat until the user chooses to quit
        Print main menu options
        Read user choice

        Step 3: Switch based on user choice
            Case '1':
                Step 4: EmployeeInputLoop
                    Repeat until the user chooses to stop adding employees
                        Allocate memory for a temporary array
                        Copy existing data to the temporary array
                        Update the employees pointer to point to the temporary array

                        Step 5: EmployeeDataInput
                            Read pay code
                            If pay code is 0, exit the loop
                            Consume newline
                            Read employee name

                            Step 6: Switch based on pay code
                                Case 1:
                                    Read weekly salary
                                    Update manager statistics (count, total, max, min)
                                Case 2:
                                    Read hourly rate
                                    Read hours worked
                                    Calculate and update hourly worker statistics (count, total, max, min)
                                Case 3:
                                    Read gross weekly sales
                                    Calculate and update commission worker statistics (count, total, max, min)
                                Case 4:
                                    Read wage per item
                                    Read items produced
                                    Calculate and update pieceworker statistics (count, total, max, min)
                                Default:
                                    Print 'Invalid pay code'

                            Increment numEmployees
                            Ask to add another employee
                            Read user choice

                        End Step 5: EmployeeDataInput

                    End Repeat Step 4: EmployeeInputLoop

            Case '2':
                Step 7: FindSpecificRecord
                    Read employee name for search
                    Search for the employee by name
                    If found:
                        Print employee details (name, pay code, salary)
                    Else:
                        Print 'Employee not found'

            Case '3':
                Step 8: PrintSummaryReport
                    Print statistics for each employee type (count, total, max, min)

            Case '4':
                Step 9: PrintEmployeeList
                    Print header (Name, Pay Code, Weekly Salary)
                    Loop over employees:
                        Print employee details (name, pay code, salary)

                    Deallocate memory for the employees array
                    Exit the program

            Default:
                Print 'Invalid choice'

        End Step 3: Switch

    End Repeat Step 2: MainLoop

Step 10: End
