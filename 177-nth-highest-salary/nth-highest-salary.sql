CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN

    IF N <= 0 THEN
        RETURN NULL;
    END IF;

    SET N = N - 1;

    RETURN (
        SELECT DISTINCT salary
        FROM Employee
        ORDER BY salary DESC
        LIMIT 1 OFFSET N
  );
END