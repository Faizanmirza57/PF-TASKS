#include <iostream>
using namespace std;

main()
{
   //the code in this file is completely human written without any help of AI, so please don't copy this and write your own.
   // Restaurant management system developed by Faizan Ahmed Mirza (2026(s)-GA-42)

   string foodNames[10];
   int foodPrices[10];
   int foodQuantity[10];
   int totalFooditems = 0;

   string cartItems[10];
   int cartQuantity[10];
   int cartCount = 0;

   string orders[10];
   int ordersCount = 0;

   string adminPassword = "admin123";

   int choice, adminChoice, customerChoice;

   while (true)
   {
      system("cls");

      cout << endl;
      cout << "=====================================================" << endl;
      cout << "        RESTAURANT MANAGEMENT SYSTEM" << endl;
      cout << "=====================================================" << endl;

      cout << endl;
      cout << "1. Admin" << endl;
      cout << "2. Customer" << endl;
      cout << "3. Exit" << endl;
      cout << endl;
      cout << "Enter your choice (1-3): ";
      cin >> choice;

      if (choice == 1)
      {
         string pass;
         cout << endl;
         cout << "Enter Admin Password: ";
         cin >> pass;

         if (pass != adminPassword)
         {
            cout << "Wrong Password!" << endl;
            continue;
         }

         while (true)
         {
            cout << endl;
            cout << "================= ADMIN PANEL =================" << endl;
            cout << "1. Add Food Item" << endl;
            cout << "2. View Food Items" << endl;
            cout << "3. Update Food Item" << endl;
            cout << "4. Delete Food Item" << endl;
            cout << "5. Search Food Item" << endl;
            cout << "6. View Orders" << endl;
            cout << "7. Update Order Status" << endl;
            cout << "8. View Total Sales" << endl;
            cout << "9. Change Password" << endl;
            cout << "10. Clear Orders" << endl;
            cout << "11. Exit Admin Panel" << endl;
            cout << "----------------------------------------------" << endl;
            cout << "Enter Choice: ";
            cin >> adminChoice;

            if (adminChoice == 1)
            {
               if (totalFooditems >= 10)
               {
                  cout << "Food storage is full!" << endl;
                  continue;
               }

               cout << "Enter Food Name: ";
               cin >> foodNames[totalFooditems];
               cout << "Enter Price: ";
               cin >> foodPrices[totalFooditems];
               cout << "Enter Food Quantity: ";
               cin >> foodQuantity[totalFooditems];
               totalFooditems++;

               cout << "Item Added Successfully!" << endl;
            }

            else if (adminChoice == 2)
            {
               cout << endl;
               cout << "----- FOOD MENU -----" << endl;
               for (int i = 0; i < totalFooditems; i++)
               {
                  cout << i << ". " << foodNames[i]
                       << " | Price: " << foodPrices[i]
                       << " | Qty: " << foodQuantity[i] << endl;
               }
            }

            else if (adminChoice == 3)
            {
               int index;
               cout << "Enter item index to update: ";
               cin >> index;

               if (index >= 0 && index < totalFooditems)
               {
                  cout << "Enter New Name: ";
                  cin >> foodNames[index];
                  cout << "Enter New Price: ";
                  cin >> foodPrices[index];
                  cout << "Enter New Quantity: ";
                  cin >> foodQuantity[index];
                  cout << "Item Updated Successfully!" << endl;
               }
               else
               {
                  cout << "Invalid Index!" << endl;
               }
            }

            else if (adminChoice == 4)
            {
               int index;
               cout << "Enter item index to delete: ";
               cin >> index;

               if (index >= 0 && index < totalFooditems)
               {
                  for (int i = index; i < totalFooditems - 1; i++)
                  {
                     foodNames[i] = foodNames[i + 1];
                     foodPrices[i] = foodPrices[i + 1];
                     foodQuantity[i] = foodQuantity[i + 1];
                  }
                  totalFooditems--;
                  cout << "Item Deleted Successfully!" << endl;
               }
               else
               {
                  cout << "Invalid Index!" << endl;
               }
            }

            else if (adminChoice == 5)
            {
               string search;
               cout << "Enter name to search: ";
               cin >> search;

               for (int i = 0; i < totalFooditems; i++)
               {
                  if (foodNames[i] == search)
                  {
                     cout << "Found: " << foodNames[i] << endl;
                  }
               }
            }

            else if (adminChoice == 6)
            {
               cout << endl;
               cout << "----- ORDERS -----" << endl;
               for (int i = 0; i < ordersCount; i++)
               {
                  cout << orders[i] << endl;
               }
            }

            else if (adminChoice == 7)
            {
               cout << "No order status feature implemented yet." << endl;
            }

            else if (adminChoice == 8)
            {
               int totalSales = 0;
               cout << "Total Sales: " << totalSales << endl;
            }

            else if (adminChoice == 9)
            {
               cout << "Enter new password: ";
               cin >> adminPassword;
               cout << "Password Changed Successfully!" << endl;
            }

            else if (adminChoice == 10)
            {
               ordersCount = 0;
               cout << "All orders cleared!" << endl;
            }

            else if (adminChoice == 11)
            {
               cout << "Exiting Admin Panel..." << endl;
               break;
            }

            else
            {
               cout << "Invalid Choice!" << endl;
            }
         }
      }

      else if (choice == 2)
      {
         while (true)
         {
            cout << endl;
            cout << "================ CUSTOMER MENU ================" << endl;
            cout << "1. View Menu" << endl;
            cout << "2. Search Food Item" << endl;
            cout << "3. Add to Cart" << endl;
            cout << "4. View Cart" << endl;
            cout << "5. Remove Item" << endl;
            cout << "6. Update Quantity" << endl;
            cout << "7. Confirm Order" << endl;
            cout << "8. View Bill" << endl;
            cout << "9. Cancel Order" << endl;
            cout << "10. Exit" << endl;
            cout << "----------------------------------------------" << endl;
            cout << "Enter choice: ";
            cin >> customerChoice;

            if (customerChoice == 1)
            {
               cout << endl;
               cout << "----- MENU -----" << endl;
               for (int i = 0; i < totalFooditems; i++)
               {
                  cout << i << ". " << foodNames[i]
                       << " | Price: " << foodPrices[i] << endl;
               }
            }

            else if (customerChoice == 2)
            {
               string search;
               cout << "Enter name: ";
               cin >> search;

               for (int i = 0; i < totalFooditems; i++)
               {
                  if (foodNames[i] == search)
                  {
                     cout << "Found: " << foodNames[i] << endl;
                  }
               }
            }

            else if (customerChoice == 3)
            {
               int index, qty;
               cout << "Enter item index: ";
               cin >> index;
               cout << "Enter quantity: ";
               cin >> qty;

               if (index >= 0 && index < totalFooditems && cartCount < 10)
               {
                  cartItems[cartCount] = foodNames[index];
                  cartQuantity[cartCount] = qty;
                  cartCount++;
                  cout << "Item added to cart successfully!" << endl;
               }
               else
               {
                  cout << "Invalid input!" << endl;
               }
            }

            else if (customerChoice == 4)
            {
               cout << endl;
               cout << "----- CART -----" << endl;
               for (int i = 0; i < cartCount; i++)
               {
                  cout << i << ". " << cartItems[i]
                       << " x " << cartQuantity[i] << endl;
               }
            }

            else if (customerChoice == 5)
            {
               int index;
               cout << "Enter cart index to remove: ";
               cin >> index;

               if (index >= 0 && index < cartCount)
               {
                  for (int i = index; i < cartCount - 1; i++)
                  {
                     cartItems[i] = cartItems[i + 1];
                     cartQuantity[i] = cartQuantity[i + 1];
                  }
                  cartCount--;
                  cout << "Item removed successfully!" << endl;
               }
               else
               {
                  cout << "Invalid index!" << endl;
               }
            }

            else if (customerChoice == 6)
            {
               int index, qty;
               cout << "Enter cart index: ";
               cin >> index;
               cout << "Enter new quantity: ";
               cin >> qty;

               if (index >= 0 && index < cartCount)
               {
                  cartQuantity[index] = qty;
                  cout << "Quantity updated!" << endl;
               }
               else
               {
                  cout << "Invalid index!" << endl;
               }
            }

            else if (customerChoice == 7)
            {
               cout << "Order Confirmed!" << endl;
               orders[ordersCount] = "New Order";
               ordersCount++;
               cartCount = 0;
            }

            else if (customerChoice == 8)
            {
               int bill = 0;

               for (int i = 0; i < cartCount; i++)
               {
                  for (int j = 0; j < totalFooditems; j++)
                  {
                     if (cartItems[i] == foodNames[j])
                     {
                        bill += foodPrices[j] * cartQuantity[i];
                     }
                  }
               }

               cout << "Total Bill: " << bill << endl;
            }

            else if (customerChoice == 9)
            {
               cartCount = 0;
               cout << "Order Cancelled!" << endl;
            }

            else if (customerChoice == 10)
            {
               cout << "Exiting..." << endl;
               break;
            }

            else
            {
               cout << "Invalid Choice!" << endl;
            }
         }
      }

      else if (choice == 3)
      {
         cout << "Thanks for using this software :)" << endl;
         break;
      }
   }
}