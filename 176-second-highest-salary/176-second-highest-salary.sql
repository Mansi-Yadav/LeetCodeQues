# Write your MySQL query statement below
Select max(salary) secondhighestSalary from employee 
where salary< (Select max(salary) from employee );