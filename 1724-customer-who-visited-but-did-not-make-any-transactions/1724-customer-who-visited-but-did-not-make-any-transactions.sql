# Write your MySQL query statement below

# SELECT customer_id, count(*) as count_no_trans
# FROM (SELECT customer_id FROM Visits v LEFT JOIN Transactions t
# ON v.visit_id = t.visit_id
# WHERE t.visit_id IS NULL) as temp
# GROUP BY temp.customer_id;


/* Write your PL/SQL query statement below */
SELECT customer_id, count(*) AS count_no_trans 
FROM Visits  
WHERE visit_id NOT IN (
  SELECT visit_id FROM Transactions) 
GROUP BY customer_id;