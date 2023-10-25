# Write your MySQL query statement below
select product_name, year, price from Sales INNER JOIN
Product using(product_id);