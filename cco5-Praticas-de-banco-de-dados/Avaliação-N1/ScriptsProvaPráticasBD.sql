# 1ª Avaliação de Práticas de Banco de Dados - Prova Prática #

# Data: 03/05/2022

# Professor: Jonathan Bandeira

# Equipe de Alunos(as): Diego Leonardo da Silva França, Ortiz Ulises Araujo Silva, 
# Paulo Montenegro Campos , Paulo Emanuel Madeira de Freitas, Rodrigo Fernandes de Carvalho e Yago Ribeiro.

# Questões da Prova. Colocar a respectiva resposta abaixo de cada comentário.

- *- Questão 1*
SELECT P.PRODUCTCODE, P.PRODUCTNAME, P.PRODUCTLINE, P.PRODUCTSCALE, P.PRODUCTVENDOR,
PRODUCTDESCRIPTION, QUANTITYINSTOCK, P.BUYPRICE, P.MSRP
FROM PRODUCTS P
LEFT OUTER JOIN ORDERDETAILS OD
ON (P.PRODUCTCODE = OD.PRODUCTCODE)
WHERE OD.QUANTITYORDERED IS NULL;

- *- Questão 2*
SELECT C.CUSTOMERNAME, COUNT(O.STATUS) AS 'Orders Shipped'
FROM CUSTOMERS C
INNER JOIN ORDERS O
ON C.CUSTOMERNUMBER = O.CUSTOMERNUMBER
WHERE O.STATUS = 'Shipped'
GROUP BY  C.CUSTOMERNAME
ORDER BY COUNT(O.STATUS) DESC;

EXPLAIN SELECT C.CUSTOMERNAME, COUNT(O.STATUS) AS 'Orders Shipped'
FROM CUSTOMERS C
INNER JOIN ORDERS O
ON C.CUSTOMERNUMBER = O.CUSTOMERNUMBER
WHERE O.STATUS = 'Shipped'
GROUP BY  C.CUSTOMERNAME
ORDER BY COUNT(O.STATUS) DESC;

- *- Questão 3*
CREATE VIEW CUSTOMER_SALESREPRESENTANTS AS
	(SELECT C.CUSTOMERNAME, C.CITY, C.SALESREPEMPLOYEENUMBER, CONCAT(E.FIRSTNAME, ' ', E.LASTNAME) AS EMPLOYEENAME,
    E.JOBTITLE AS EMPLOYEEJOB
    FROM CUSTOMERS C, EMPLOYEES E);

SELECT * FROM CUSTOMER_SALESREPRESENTANTS;

CREATE USER 'Pedro'@'localhost' IDENTIFIED BY '123'; 
GRANT SELECT ON CLASSICMODELS . CUSTOMER_SALESREPRESENTANTS TO 'Pedro'@'localhost'; 
FLUSH PRIVILEGES;

SHOW GRANTS FOR 'Pedro'@'localhost';


- *- Questão 4*
SET AUTOCOMMIT = 0;

START TRANSACTION;
	INSERT INTO EMPLOYEES (EMPLOYEENUMBER, LASTNAME, FIRSTNAME, EXTENSION, EMAIL, OFFICECODE, REPORTSTO, JOBTITLE)
    VALUES (0032, Jones, Phill, 'x3244', 'pjones@classicmodelcars.com', '7', 1056, 'Computer Scientist');
	INSERT INTO EMPLOYEES (EMPLOYEENUMBER, LASTNAME, FIRSTNAME, EXTENSION, EMAIL, OFFICECODE, REPORTSTO, JOBTITLE)
    VALUES (0033, Heinicke, Taylor, 'x3244', 'theinicke@classicmodelcars.com', '7', 1056, 'Computer Scientist');
	INSERT INTO EMPLOYEES (EMPLOYEENUMBER, LASTNAME, FIRSTNAME, EXTENSION, EMAIL, OFFICECODE, REPORTSTO, JOBTITLE)
    VALUES (0034, Capela, Clint, 'x3244', 'ccapela@classicmodelcars.com', '7', 1056, 'Computer Scientist');
	INSERT INTO EMPLOYEES (EMPLOYEENUMBER, LASTNAME, FIRSTNAME, EXTENSION, EMAIL, OFFICECODE, REPORTSTO, JOBTITLE)
    VALUES (0035, Allen, Josh, 'x3244', 'jallen@classicmodelcars.com', '7', 1056, 'Computer Scientist');
    SAVEPOINT SP1;
    UPDATE EMPLOYEES SET JOBTITLE = 'Sales Rep' WHERE EMPLOYEENUMBER = 0034;
    SAVEPOINT SP2;
    SELECT * FROM EMPLOYEES WHERE JOBTITLE = 'Computer Scientist';
    DELETE FROM EMPLOYEES WHERE JOBTITLE = 'Sales Rep';
    UPDATE EMPLOYEES SET JOBTITLE = 'Sales Rep' WHERE EMPLOYEENUMBER = 0032;
	SELECT * FROM EMPLOYEES WHERE JOBTITLE = 'Sales Rep';
    SAVEPOINT SP3;
    ROLLBACK TO SAVEPOINT SP1;
    COMMIT;
    RELEASE SAVEPOINT SP1;
    RELEASE SAVEPOINT SP2;
    RELEASE SAVEPOINT SP3;
    DELETE FROM EMPLOYEES WHERE JOBTITLE = 'Computer Scientist';
    ROLLBACK;
	SELECT * FROM EMPLOYEES WHERE JOBTITLE = 'Computer Scientist';

SET AUTOCOMMIT = 1;