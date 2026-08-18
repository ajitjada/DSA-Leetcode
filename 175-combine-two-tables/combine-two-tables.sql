# Write your MySQL query statement below

SELECT 
    p.firstName, 
    p.lastName, 
    a.city, 
    a.state 
From person p
LEFT join address a
on p.personId = a.personId;
