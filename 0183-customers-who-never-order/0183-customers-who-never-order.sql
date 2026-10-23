# Write your MySQL query statement below
With cust as (select c.id,c.name from customers c
inner join orders o
on c.id=o.customerId
)
Select name as Customers from customers 
where id not in (select id from cust);