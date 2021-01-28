CREATE DATABASE storeDatabase; 							 -- creating database
USE storeDatabase;										 -- using database

-- creation of tables
CREATE TABLE IF NOT EXISTS `tblproduct` (
    `PRODUCT_ID` INT NOT NULL,
    `PRODUCT_NAME` VARCHAR(50) NOT NULL,
    `PRODUCT_DESCRIP` VARCHAR(50) NOT NULL, 
    `QTY_STOCK` INT NOT NULL,
    `PRICE` INT NOT NULL,
    `ON_HAND` INT NOT NULL,
    `DATE_SUP` DATE NOT NULL,
    `SUPPLIER_ID` INT NOT NULL,
    PRIMARY KEY (`PRODUCT_ID`)
);
CREATE TABLE IF NOT EXISTS `tbljob` (
  `JOB_ID` INT NOT NULL,
  `JOB_TITLE` VARCHAR(50) NOT NULL,
  `SALARY` INT NOT NULL,
  PRIMARY KEY (`JOB_ID`)
);
CREATE TABLE IF NOT EXISTS `tblemployees` (
  `EMPLOYEE_ID` INT NOT NULL AUTO_INCREMENT,
  `FIRST_NAME` VARCHAR(50) NOT NULL,
  `LAST_NAME` VARCHAR(50) NOT NULL,
  `EMAIL` VARCHAR(50) NOT NULL,
  `PHONE_NUMBER` VARCHAR(50) NOT NULL,
  `JOB_ID` INT NOT NULL,
  `ADDRESS` VARCHAR(50) NOT NULL,
  PRIMARY KEY (`EMPLOYEE_ID`)
) AUTO_INCREMENT=101;

CREATE TABLE IF NOT EXISTS `tbluser` (
   `USER_ID` INT NOT NULL AUTO_INCREMENT,
   `USERNAME` VARCHAR (50) NOT NULL,
   `PASSWORD` VARCHAR (50) NOT NULL,
   `EMPLOYEE_ID` INT NOT NULL,
   PRIMARY KEY (`USER_ID`)
) AUTO_INCREMENT=101;

CREATE TABLE IF NOT EXISTS `tblsales` (
   `SALES_ID` INT NOT NULL,
   `DATE` DATE NOT NULL,
   `PRODUCT_ID` INT NOT NULL,
   `PRODUCT_NAME` VARCHAR (50) NOT NULL,
   `QUANTITY` INT NOT NULL,
   `TOTAL_AMOUNT` INT NOT NULL,
   `CHANGE` INT NOT NULL,
   `EMPLOYEE_ID` INT NOT NULL,
   PRIMARY KEY (`SALES_ID`)
);

 CREATE TABLE IF NOT EXISTS `tblsupplier` (
   `SUPPLIER_ID` INT NOT NULL,
   `COMPANY_NAME` VARCHAR(50) NOT NULL,
   `ADDRESS` VARCHAR(50) NOT NULL,
   `PHONE_NUMBER` VARCHAR (50) NOT NULL,
   PRIMARY KEY (`SUPPLIER_ID`)
);

 CREATE TABLE IF NOT EXISTS `tblcustomer` (
   `CUST_ID` INT AUTO_INCREMENT NOT NULL,
   `SALES_ID` INT NOT NULL,
   PRIMARY KEY (`CUST_ID`)
);

-- inserting values
-- ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
INSERT INTO tblproduct
VALUES (782295,'Gardenia','Bread',15,60,2,'2021-1-5',23189),
		(872345,'CowHead','Milk',40,35,5,'2021-1-3',23189),
		(347568,'Gatorade','Energydrink',50,25,10,'2021-1-15',23189),
    (567894,'Magnum','Ice-cream',100,55,20,'2021-1-20',22834),
    (956438,'Cornetto','Ice-cream',100,22,20,'2021-1-20',22834);

INSERT INTO tbljob
VALUES (12001,'Manager',25000),
	(13203,'Co-Manager',20000),
    (23043,'Cashier',10500),
    (24002,'Crew',10500),
    (25304,'Sales-associate',10500),
    (26505,'Sales-Director',10500),
    (35002,'Janitor',9500);

INSERT INTO tblemployees
VALUES (NULL,'Suba','Louis Andrei','lasuba1124@gmail.com','+639472738225',12001, 'Floridablanca, Pampanga'),
	(NULL,'Capati','Patrick Jan','Patrickjc123@gmail.com','+639976044111',13203, 'Mexico, Pampanga'),
    (NULL,'Buan','John Daniel','cs.johndanielbuan@gmail.com','+639085349485',23043, 'Quebiawan, Pampanga'),
    (NULL,'David','Aljohn','cs.aljohncdavid@gmail.com','+639052801250',24002,'Floridablanca, Pampanga'),
    (NULL,'Calaguas','Erwin','cs.calaguaserwinm@gmail.com','+639559372731',25304,'Bacolor, Pampanga'),
    (NULL,'Intal','Ferwinkle','cs.ferwinkleintal@gmail.com','+639269297233',26505,'Masantol, Pampanga'),
    (NULL,'Yutuc','Denise','cs.yutucdenise@gmail.com','+639950034567',35002,'San Fernando, Pampanga');
    
-- ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

INSERT INTO tbluser
    VALUES (NULL, 'aljohndavid', 'aj123', EMPLOYEE_ID),
    (NULL, 'deniseanne', 'denise123', EMPLOYEE_ID),
    (NULL, 'erwincalaguas', 'erwin123', EMPLOYEE_ID),
    (NULL, 'kayeintal', 'kaye123', EMPLOYEE_ID),
    (NULL, 'johnbuan', 'john123', EMPLOYEE_ID),
    (NULL, 'subalouis', 'suba123', EMPLOYEE_ID),
    (NULL, 'pjcapati', 'capati123', EMPLOYEE_ID);
INSERT INTO tblsales
    VALUES (1001,'2020-01-14',201421,'Gardenia-Bread',20,100,3600,EMPLOYEE_ID),
    (1002,'2020-01-14',201421,'Otap-Food',40,100,4500,EMPLOYEE_ID),
    (1003,'2020-01-15',213421,'Colgate',32,234,6734,EMPLOYEE_ID),
    (1004,'2020-01-13',213432,'Ariel Detergent',50,220,6573,EMPLOYEE_ID),
    (1005,'2020-01-17',212142,'Coca Cola',30,560,3000,EMPLOYEE_ID);
INSERT INTO tblsupplier
    VALUES(234543,'Nestle','San Simon, Pampanga', '034-989-5564'),
    (256563,'Nescafe','San Simon, Pampanga', '034-989-5554'),
    (255463,'Univeral Robina Corp','New Clark City, Pampanga', '034-456-6546'),
    (235643,'Procter and Gamble','New Clark City, Pampanga', '034-312-5634'),
    (566463,'Coca-Cola Trading','San Fernando, Pampanga', '034-546-6547');
INSERT INTO tblcustomer
    VALUES (NULL, 1001),
    (NULL, 1002),
    (NULL, 1003),
    (NULL, 1004),
    (NULL, 1005);
    
    -- ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
-- selection
SELECT * FROM tblproduct;
SELECT * FROM tbljob;
SELECT * FROM tblemployees;
SELECT * FROM tbluser;
SELECT * FROM tblsales;
SELECT * FROM tblsupplier;
SELECT * FROM tblcustomer;
