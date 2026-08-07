# Write your MySQL query statement below
WITH sequence AS(
    SELECT *
    FROM Queue
    ORDER BY turn
),
weights AS(
    SELECT * , 
    SUM(Weight) OVER(ORDER BY Turn) AS running_weight 
    FROM sequence
)
SELECT person_name
FROM weights
WHERE running_weight<=1000
ORDER BY Turn DESC
LIMIT 1;