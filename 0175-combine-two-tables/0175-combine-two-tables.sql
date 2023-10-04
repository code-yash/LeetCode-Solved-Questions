# Write your MySQL query statement below

SELECT p1.firstName, p1.lastName, a1.city, a1.state 
FROM Person p1 LEFT JOIN Address a1
ON p1.personId = a1.personId;
