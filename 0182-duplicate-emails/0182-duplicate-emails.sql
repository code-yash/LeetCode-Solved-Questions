# Write your MySQL query statement below


SELECT DISTINCT p1.email AS Email
FROM Person as p1
WHERE 2 <= (
  SELECT COUNT(*) 
  FROM Person p2
  WHERE p2.email = p1.email
);