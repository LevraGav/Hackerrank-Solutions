/*Language : MySQL*/
SELECT DISTINCT CITY FROM STATION WHERE LEFT(CITY, 1) NOT IN ('A','I','U','E','O') AND RIGHT(CITY, 1) NOT IN ('A','I','U','E','O')