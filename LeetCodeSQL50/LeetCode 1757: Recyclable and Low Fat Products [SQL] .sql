// LeetCode 1757: Recyclable and Low Fat Products [SQL] 
// URL : https://leetcode.com/problems/recyclable-and-low-fat-products/?envType=study-plan-v2&envId=top-sql-50
// Date : 4/4/2026
SELECT product_id
FROM Products
WHERE low_fats = 'Y'
AND recyclable = 'Y';
