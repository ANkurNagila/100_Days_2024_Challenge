# Write your MySQL query statement below

SELECT name,bonus
FROM Employee
Left JOIN Bonus
ON Employee.empID=Bonus.empID
WHERE Bonus IS NULL or Bonus<1000