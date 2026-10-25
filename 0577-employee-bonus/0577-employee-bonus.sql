# Write your MySQL query statement below
SELECT e.name as name,b.bonus as bonus from Employee e
Left Join Bonus b
on e.empId=b.empId 
where b.bonus<1000 or bonus is null;