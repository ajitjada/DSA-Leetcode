# Write your MySQL query statement below

SELECT
    d.Name AS Department,
    e.Name AS Employee,
    e.Salary AS Salary
FROM employee e 
JOIN department d
    ON e.departmentId = d.id
WHERE (e.departmentId, e.salary) IN (
    SELECT 
        departmentId,
        MAX(salary)
    FROM employee
    GROUP BY departmentId
);