# Write your MySQL query statement below
SELECT name as Employee from Employee e1 where salary>(SELECT salary from Employee e2 where e2.id=e1.managerId);
