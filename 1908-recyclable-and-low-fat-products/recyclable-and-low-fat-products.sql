# Write your MySQL query statement below
SELECT product_id
FROM Products 
WHERE (low_fats='Y' && recyclable ='Y')
GROUP BY product_id;