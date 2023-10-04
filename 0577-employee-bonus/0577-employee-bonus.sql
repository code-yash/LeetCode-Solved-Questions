# Write your MySQL query statement below

SELECT e.name, b.bonus 
FROM EMPLOYEE e LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE b.bonus IS NULL OR b.bonus < 1000;