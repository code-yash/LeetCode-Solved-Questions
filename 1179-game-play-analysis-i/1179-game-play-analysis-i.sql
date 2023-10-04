# Write your MySQL query statement below

# SELECT a1.player_id, a1.event_date AS first_login
# FROM Activity a1
# WHERE a1.event_date IN (
#   SELECT min(event_date) 
#   FROM Activity a2
#   WHERE a1.player_id = a2.player_id
# );


SELECT player_id, min(event_date) AS first_login
FROM Activity 
GROUP BY player_id