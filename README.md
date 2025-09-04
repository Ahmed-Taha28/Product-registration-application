# Product-registration-application
This C++ program implements a simple product inventory management system with file-based data storage. The application allows users to create, display, search, and delete product records through a console-based menu interface.

## Key Features

- **roduct Management:** Create and manage products with ID, name, price, and quantity.

- **File Storage:** Persistent data storage using binary files.

### CRUD Operations:

- Create new product entries.

- Read and display all products.

- Search for specific products by ID.

- Delete existing products.

-**Console Interface:** User-friendly menu-driven interaction.

## PROJECT RESULT 

| Inserting a product  | Show all products | Search for a product | Delete a product |
| :---: | :---: | :---: | :---: |
| <img src="https://github.com/Ahmed-Taha28/Product-registration-application/blob/main/images/Inserting%20a%20product.jpg" width="150"> | <img src="https://github.com/Ahmed-Taha28/Product-registration-application/blob/main/images/Show%20all%20products.jpg" width="150"> | <img src="https://github.com/Ahmed-Taha28/Product-registration-application/blob/main/images/Search%20for%20a%20product.jpg" width="150"> | <img src="https://github.com/Ahmed-Taha28/Product-registration-application/blob/main/images/Delete%20a%20product.jpg" width="150"> |

## Program Algorithm

 
  1. Display menu 
  2. Get user input 
  3. **If user input is 1:** 
     1. Get product information from user 
     2. Write product information to file 
  4. **If user input is 2:** 
     1. Read product information from file 
     2. Display product information to user 
  5. **If user input is 3:**
    1. Get product number from user 
    2. Search for product in file 
    3. Display product information to user 
  6. **If user input is 4:** 
    1. Get product number from user 
    2. Delete product from file 
  7. **If user input is 5:**
         1. Exit program 
