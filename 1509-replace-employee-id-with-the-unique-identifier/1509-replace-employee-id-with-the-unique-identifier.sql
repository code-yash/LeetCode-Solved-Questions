# Write your MySQL query statement below
select unique_id, name from Employees e LEFT JOIN EmployeeUNI euid
ON e.id = euid.id;
