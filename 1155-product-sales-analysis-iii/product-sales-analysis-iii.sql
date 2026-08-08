# Write your MySQL query statement below
WITH distinctAns AS
(
SELECT product_id,year,
        quantity,price,
        RANK() OVER (
               PARTITION BY product_id
               ORDER BY year
           ) AS rnk
        FROM Sales
)
SELECT product_id,year AS first_year,quantity,price
FROM distinctAns
WHERE rnk=1;
    