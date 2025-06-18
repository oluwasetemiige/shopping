//making a shopping list 
//adding the name of the shops 
//adding the items needed in the store 
//adding the anmount needed by the buyers 
//adding login and welcome them 
//adding conditional statements
//caculating the amount of the goods and adding goodbye
//but if the buyer wanted to buy some more thing that has being bought before
//try adding former amount with the current amount and it should print a payroll for both total..

#include <iostream>
#include<string>
using namespace std;
int main()
{
	int select, select2, laptop, amount, price, price2, clothing, tooth_brush, vegetables, drinks, soap, printing, cars;
	string name, answer;
	int new_price; 
	string password;
	//adding the shoping name..
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "         Funke shopping plaza" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	//adding the login features to the shopping lists....
start:
	std::cout << "1. for login" << std::endl;
	std::cout << "2. for sigh up" << std::endl;
	int login;
	std::cin >> login;
	if (login == 1)
	{

					std::cout << "please enter your name: ";
					std::cin >> name;
					std::cout << "Pls enter a valid password: ";
					std::cin >> password;
					system("cls");
				start1:
					std::cout << "Welcome to Funke shopping complex" << std::endl;
					std::cout << "Welcome, " << name << std::endl;
					cout << endl;
				p1:
					std::cout << "pls select an item" << std::endl;
					std::cout << "1. For laptop" << std::endl;
					std::cout << "2. For clothng" << std::endl;
					std::cout << "3. For Tooth-brush" << std::endl;
					std::cout << "4. For Drinks & Foods" << std::endl;
					std::cout << "5. For Vegetables" << std::endl;
					std::cout << "6. For Soaps" << std::endl;
					std::cout << "7. For cars" << std::endl;
					std::cout << "8. For Printing jobs" << std::endl;

					std::cin >> select;
					system("cls");
					if (select == 1) 
					{
						p2:
							std::cout << "Welcome to the Gadget section, Pls select something you like" << std::endl;
							std::cout << "1. for DELL laptop" << std::endl;
							std::cout << "2. for HP laptop" << std::endl;
							std::cout << "3. for APPLE laptop" << std::endl;
							std::cout << "4. for SAMSUNG laptop" << std::endl;
							std::cout << "5. for LENOVO laptop" << std::endl;
							std::cin >> select2;
							system("cls");
							if (select2 == 1) {
								std::cout << "This are the product avaliable for Dell" << std::endl;
								std::cout << "1. Dell vostro 3400 core 15 laptop" << std::endl;
								std::cout << "2. Dell latitude 5320 ci5 laptop" << std::endl;
								std::cout << "3. Dell Inspiration" << std::endl;
								std::cin >> laptop;
								if (laptop == 1) {
									std::cout << "This laptop is $ 40000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 40000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 2) {
									std::cout << "This laptop is $ 70000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 70000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 3) {
									std::cout << "This laptop is $ 8000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 8000 * amount;
									std::cout << "Price: " << price;
								}
								else {
									std::cout << "Invalid" << std::endl;
									goto p2;
								}

							}
							else if (select2 == 2) {
								std::cout << "This are the product avaliable for Hp" << std::endl;
								std::cout << "1  HP laptop 14s" << std::endl;
								std::cout << "2. HP Elite Book 640 G9 Laptop (core i7)" << std::endl;
								std::cout << "3. Hp ProBook 440 G9 Notebook Computer" << std::endl;
								std::cin >> laptop;
								if (laptop == 1) {
									std::cout << "This laptop is $ 20000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 20000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 2) {
									std::cout << "This laptop is $ 7500" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 7500 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 3) {
									std::cout << "This laptop is $ 800000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 800000 * amount;
									std::cout << "Price: " << price;
								}
								else {
									std::cout << "Invalid" << std::endl;
									goto p2;
								}

							}
							else if (select2 == 3) {
								std::cout << "THis are the product avaliable for Apple" << std::endl;
								std::cout << "1. Apple MacBook Air" << std::endl;
								std::cout << "2. Apple Macbook Pro" << std::endl;
								std::cout << "3. Apple Macbooks" << std::endl;
								std::cin >> laptop;
								if (laptop == 1) {
									std::cout << "This laptop is $ 45000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 45000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 2) {
									std::cout << "This laptop is $ 7800" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 7800 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 3) {
									std::cout << "This laptop is $ 6000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 6000 * amount;
									std::cout << "Price: " << price;
								}
								else {
									std::cout << "Invalid" << std::endl;
									goto p2;
								}

							}
							else if (select2 == 4) {
								std::cout << "This are the products avaliable in samsung" << std::endl;
								std::cout << "1. Samsung Galaxy Book series" << std::endl;
								std::cout << "2. Samsung Note Book Series" << std::endl;
								std::cout << "3. Samsung QLED laptop" << std::endl;
								std::cin >> laptop;
								if (laptop == 1) {
									std::cout << "This laptop is $ 92000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 92000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 2) {
									std::cout << "This laptop is $ 67000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 67000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 3) {
									std::cout << "This laptop is $ 7000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 7000 * amount;
									std::cout << "Price: " << price;
								}
								else {
									std::cout << "Invalid" << std::endl;
									goto p2;
								}
							}
							else if (select2 == 5) {
								std::cout << "This are the product avaliable in Lenovo" << std::endl;
								std::cout << "1. Lenovo Thinkbook 14G4 Laptop" << std::endl;
								std::cout << "2. Lenovo Thinkpad L13 Laptop" << std::endl;
								std::cout << "3. Lenovo ideapad 3core i5 Laptop" << std::endl;
								std::cin >> laptop;
								if (laptop == 1) {
									std::cout << "This laptop is $ 91000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 91000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 2) {
									std::cout << "This laptop is $ 61000" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 61000 * amount;
									std::cout << "Price: " << price;
								}
								else if (laptop == 3) {
									std::cout << "This laptop is $ 8200" << std::endl;
									std::cout << "How many would you like to purchase: ";
									std::cin >> amount;
									price = 8200 * amount;
									std::cout << "Price: " << price;
								}
								else {
									std::cout << "Invalid" << std::endl;
									goto p2;
								}
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}
							system("cls");
					p3:
					
						new_price = price;
						price2 = new_price + price;
						std::cout << "Name: " << name << std::endl;
						std::cout << "Login Password: " << password << std::endl; 
						std::cout << "Price: " << price << endl;
						std::cout << "would you like to buy more:" << std::endl;
						std::cout << "Y for yes, N for no" << std::endl;
						std::cin >> answer;
						//if their  is a way for the code to run after the goto statement.....
						//found the error;
						if (answer == "y")
						{
							//adding the price together between the former price with the present one  to maake it the total price
							//this goto allowes it not to execute the code and go back to the begining and the cod ebelow would not be executed...
							std::cout << new_price << std::endl;
							std::cout << "final Price: " << price2 << std::endl;
							goto start1;
							//std::cout << "Total price: " << price2 + price << std::endl;
							//std::cout << "Total price: " << new_price << std::endl;
							//std::cout << "Thank you and come again" << std::endl;
						}
						else if (answer == "n") {
							std::cout << "Thank you come back again" << std::endl;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p3;
						}
					}
				else if (select == 2) {


					std::cout << "Welcome to the Clothing section, Pls select something you like" << std::endl;
					std::cout << "1. for Girls polo" << std::endl;
					std::cout << "2. for Girls short skirt" << std::endl;
					std::cout << "3. for Girls long skirt" << std::endl;
					std::cout << "4. for Boys shirt" << std::endl;
					std::cout << "5. for Boys Trousers" << std::endl;
					std::cin >> select2;
					system("cls");
					if (select2 == 1) {
						std::cout << "This are the product avaliable for Girls polo" << std::endl;
						std::cout << "1. 123 inches short polo" << std::endl;
						std::cout << "2. 412 inches for Long polo" << std::endl;
						std::cout << "3. 215 inches for average" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This 123 inches short is $ 300" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 300 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This 412 inche long polo $ 400" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 400 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This laptop is $ 312" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 312 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 2) {
						//for Girls short skirt" 

						std::cout << "This are the product avaliable for Girls short skirt" << std::endl;
						std::cout << "1  14g short skirt" << std::endl;
						std::cout << "2. Doir 110 inches short" << std::endl;
						std::cout << "3. Scar x mini skirt" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This 14g short skirt is $ 700" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 700 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This dior 110 inches short is $ 750" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 750 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This scar X mini skirt is $ 1000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 1000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 3) {
						//std::cout << "3. for Girls long skirt" << std::endl;

						std::cout << "THis are the product avaliable for Girls long skirt" << std::endl;
						std::cout << "1. 14g long skirt" << std::endl;
						std::cout << "2. micro scar x long skirt" << std::endl;
						std::cout << "3. Luxury x long skirt" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This 14g long skirt is $4500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 4500 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This micro scar x long skirt is $ 780" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 780 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This Luxury x long skirt is $ 6000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 4) {
						//	std::cout << "4. for Boys shirt" << std::endl;

						std::cout << "This are the products avaliable for Boys shirt" << std::endl;
						std::cout << "1. Doir long arm" << std::endl;
						std::cout << "2.baleciaga huddy" << std::endl;
						std::cout << "3.Louis vuition Brand" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This Dior long arm is $ 9200" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 9200 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This Balenciaga Huddy is $ 6700" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6700 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This Louis Vuition Brand is $ 7000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}
					}
					else if (select2 == 5) {
						//std::cout << "5. for Boys Trousers"
						std::cout << "This are the product avaliable in Lenovo" << std::endl;
						std::cout << "1. Balenciaga long jeans" << std::endl;
						std::cout << "2. Louis vuition short trouser" << std::endl;
						std::cout << "3. Apex long jeans" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This Balenciage long jeans is $ 920" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 920 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This louis vuition shorrt trousers is $ 610" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 610 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This Apex long jeans is $ 8200" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 8200 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p2;
					}
					system("cls");

					int new_price;
					new_price = price;
					std::cout << "Name: " << name << std::endl;
					std::cout << "Login Password: " << password << std::endl;
					std::cout << "Price: " << new_price << endl;
					std::cout << "would you like to buy more:" << std::endl;
					std::cout << "Y for yes, N for no" << std::endl;
					std::cin >> answer;
					if (answer == "y") {
						//adding the price together between the former price with the present one  to maake it the total price
						goto start1;


					}
					else if (answer == "n") {
						std::cout << "Thank you come back again" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p3;
					}
				}
	
				else if (select == 3) {
					//tooth_brush

					std::cout << "Welcome to the Tooth-Brush section, Pls select something you like" << std::endl;
					std::cout << "1. for Diplomat Toth-Brush" << std::endl;
					std::cout << "2. for Exotic Tooth-Brush" << std::endl;
					std::cout << "3. for premium Tooth-Brush" << std::endl;
					std::cout << "4. for Wisdom Toth-Brush" << std::endl;
					std::cout << "5. for Precoius Tooth-Brush" << std::endl;
					std::cin >> select2;
					system("cls");
					if (select2 == 1) {
						//Diplomat tooth brush 
						std::cout << "This are the product avaliable for Diplomat toothbrush" << std::endl;
						std::cout << "1. 10cm toothbrush(diploamt)" << std::endl;
						std::cout << "2. Hard toothbrush 2 cm thick" << std::endl;
						std::cout << "3. medium strength 1.5 cm thick" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "10cm toothbrush(diploamt) is $ 100" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 100 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "Hard toothbrush 2 cm thick $ 300" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 300 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "medium strength 1.5 cm thick $ 315" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 315 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 2) {
						//for Exotic tooth brush" 

						std::cout << "This are the product avaliable for Exotic tooth-Brush" << std::endl;
						std::cout << "1  14cm tooth-brush" << std::endl;
						std::cout << "2. couples tooth-brush" << std::endl;
						std::cout << "3. Medium hard tooth-brush" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "This 14cm tooth-brush is $ 500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 500 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This couples tooth-brush $ 2950" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 2950 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Medium hard tooth-brush is $ 1090" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 1090 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 3) {
						//premium tooth brush

						std::cout << "THis are the product avaliable for Premium tooth-brush" << std::endl;
						std::cout << "1. scar premium" << std::endl;
						std::cout << "2. scar x premium toothbruch" << std::endl;
						std::cout << "3. Luxury Premium tooth-brush" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "This scar premium is $455" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 455 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This scar x premium toothbrush is $ 780" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 780 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Luxury Premium tooth-brush is $ 6500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6500 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 4) {
						//	wisdom toothbrush

						std::cout << "This are the products avaliable for Wisdom Tooth-Brush" << std::endl;
						std::cout << "1.Wisdom plastics" << std::endl;
						std::cout << "2.Wisdom extra hard " << std::endl;
						std::cout << "3.Wisdom medium thick" << std::endl;
						std::cin >> tooth_brush;
						if (clothing == 1) {
							std::cout << "This Wisdom plastics is $ 920" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 920 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This Wisdom extra hard is $ 670" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 670 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Wisdom medium thick is $ 7900" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7900 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}
					}
					else if (select2 == 5) {
						//precoius toothbrush
						std::cout << "This are the product avaliable in for Precoius Tooth-Brush" << std::endl;
						std::cout << "1. Pre-pre kids" << std::endl;
						std::cout << "2. Precoius Extraodinary" << std::endl;
						std::cout << "3. Precoius Dominion" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "This Pre-pre kids is $ 950" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 950 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This Precoius Extraodinary is $ 640" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 640 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Precoius Dominion is $ 8290" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 8290 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p2;
					}
					system("cls");

					int new_price;
					new_price = price;
					std::cout << "Name: " << name << std::endl;
					std::cout << "Login Password: " << password << std::endl;
					std::cout << "Price: " << new_price << endl;
					std::cout << "would you like to buy more:" << std::endl;
					std::cout << "Y for yes, N for no" << std::endl;
					std::cin >> answer;
					if (answer == "y") {
						//adding the price together between the former price with the present one  to maake it the total price
						goto start1;
					}
					else if (answer == "n") {
						std::cout << "Thank you come back again" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p3;
					}

				}
				else if (select == 4) {

					
						//Drinks & Foods

						std::cout << "Welcome to the Drinks & Foods section, Pls select something you like" << std::endl;
						std::cout << "1. for Champane" << std::endl;
						std::cout << "2. for Red Wine" << std::endl;
						std::cout << "3. for Youghurt" << std::endl;
						std::cout << "4. for Flour Foods" << std::endl;
						std::cout << "5. for Meat Snacks" << std::endl;
						std::cin >> select2;
						system("cls");
						if (select2 == 1) {
							//Champange 
							std::cout << "This are the product avaliable for Champange" << std::endl;
							std::cout << "1. Exotic Chanpange" << std::endl;
							std::cout << "2. Alcholic Champange" << std::endl;
							std::cout << "3. 2% Alcholic Champange" << std::endl;
							std::cin >> drinks;
							if (drinks == 1) {
								std::cout << "Exotic Champange is $ 15000" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 15000 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 2) {
								std::cout << "Alcholic champange is $ 30000" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 30000 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 3) {
								std::cout << "2% Alcholic is $ 31500" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 31500 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}

						}
						else if (select2 == 2) {
							//Red wine 

							std::cout << "This are the product avaliable for Red Wines" << std::endl;
							std::cout << "1  Veleta Red Wine" << std::endl;
							std::cout << "2. Juvenile Red Wine" << std::endl;
							std::cout << "3. Setemi Red wine" << std::endl;
							std::cin >> drinks;
							if (drinks == 1) {
								std::cout << "This veleta red wine is $ 54400" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 54400 * amount;    
								std::cout << "Price: " << price;
							}
							else if (drinks == 2) {
								std::cout << "This juvenile$ 29500" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 29500 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 3) {
								std::cout << "This Setemi Red wine is $ 100900" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 100900 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}

						}
						else if (select2 == 3) {
							//youghurt

							std::cout << "THis are the product avaliable for youghurt" << std::endl;
							std::cout << "1. Dudu youghurt" << std::endl;
							std::cout << "2. Nutri-milk youghurt" << std::endl;
							std::cout << "3. Viju Youghurt" << std::endl;
							std::cin >> drinks;
							if (drinks == 1) {
								std::cout << "Dudu youghurt is $4500" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 4500 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 2) {
								std::cout << "This Nutri-milk Yougurt is $ 785" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 785 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 3) {
								std::cout << "This Viju Youghurt is $ 650" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 650 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}

						}
						else if (select2 == 4) {
							//	flour foods

							std::cout << "This are the products avaliable for Flour Foods" << std::endl;
							std::cout << "1. Baked Bread" << std::endl;
							std::cout << "2. Harmburger snacks " << std::endl;
							std::cout << "3. All flavor Pizza" << std::endl;
							std::cin >> drinks;
							if (drinks == 1) {
								std::cout << "This Baked Bread is $ 950" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 950 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 2) {
								std::cout << "Harmburger snacks is $ 6750" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 6750 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 3) {
								std::cout << "All Flavor Pizza is $ 7900" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 7900 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}
						}
						else if (select2 == 5) {
							//meat snacks
							std::cout << "This are the product avaliable in for Meat Snacks" << std::endl;
							std::cout << "1. Meats Buns" << std::endl;
							std::cout << "2. meat Pie" << std::endl;
							std::cout << "3. Chicken & Chips" << std::endl;
							std::cin >> tooth_brush;
							if (drinks == 1) {
								std::cout << "This Meat Buns is $ 9500" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 9500 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 2) {
								std::cout << "This Precoius Extraodinary is $ 640" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 640 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 3) {
								std::cout << "This Precoius Dominion is $ 829" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 829 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}
						system("cls");

						int new_price;
						new_price = price;
						std::cout << "Name: " << name << std::endl;
						std::cout << "Login Password: " << password << std::endl;
						std::cout << "Price: " << new_price << endl;
						std::cout << "would you like to buy more:" << std::endl;
						std::cout << "Y for yes, N for no" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							//adding the price together between the former price with the present one  to maake it the total price
							goto start1;
						}
						else if (answer == "n") {
							std::cout << "Thank you come back again" << std::endl;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p3;
						}

					
				}
				else if (select == 5) {
					//vegetables
					{

						std::cout << "Welcome to the Vegetables section, Pls select something you like" << std::endl;
						std::cout << "1. for Fruits Vegetables" << std::endl;
						std::cout << "2. for Cabbages vegatabes" << std::endl;
						std::cout << "3. for Water leaf Vegetables" << std::endl;
						std::cout << "4. for Green tea vegetables"<< std::endl;
						std::cout << "5. for Milk tea vebgetables" << std::endl;
						std::cin >> select2;
						system("cls");
						if (select2 == 1) {
							//Fruits Vegetables
							std::cout << "This are the product avaliable for Fruits Vegetables" << std::endl;
							std::cout << "1. Carrots" << std::endl;
							std::cout << "2. golden Melon" << std::endl;
							std::cout << "3. Water Melon" << std::endl;
							std::cin >> vegetables;
							if (vegetables== 1) {
								std::cout << "Carrots per one is $ 150" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 150 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "golden Melon is $ 300" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 300 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "Water melon is $ 315" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 315 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}

						}
						else if (select2 == 2) {
							//Cabbages
							std::cout << "This are the product avaliable for cabbages" << std::endl;
							std::cout << "1  Green Cabbages" << std::endl;
							std::cout << "2. Yellow Cabbages" << std::endl;
							std::cout << "3. red Cabbages" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "This Green cabbages is $ 5440" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 5440 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "The red Cabbages $295" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 295 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "The Red Cabbages is $ 190" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 190 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}

						}
						else if (select2 == 3) {
							//Water leaf

							std::cout << "This are the product avaliable for water Leaf" << std::endl;
							std::cout << "1. Green/ water leaf" << std::endl;
							std::cout << "2. Refrigrated Water leaf" << std::endl;
							std::cout << "3. Canned Water leaf" << std::endl;
							std::cin >> vegetables;
							if (vegetables== 1) {
								std::cout << "Fresh water leaf is $459" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 459 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "The refrigerated  is $ water leaf $780" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 780 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "The Canned Water leaf $ 1000" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 1000 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}

						}
						else if (select2 == 4) {
							//	Green tea vegtables

							std::cout << "This are the products avaliable for Green Tea Vegetables" << std::endl;
							std::cout << "1. Green tea" << std::endl;
							std::cout << "2. Liptons " << std::endl;
							std::cout << "3. Natural bags of green vegetables" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "This Green tea is $ 950" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 950 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "Liptions is $ 650" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 650 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 3) {
								std::cout << "natural Bag of Green vegetables is $ 790" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 790 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}
						}
						else if (select2 == 5) {
							//Milk tea Vegetables
							std::cout << "This are the product avaliable in for Milk Tea Vegetables" << std::endl;
							std::cout << "1. Rake rake milk" << std::endl;
							std::cout << "2. vegetables tea bag" << std::endl;
							std::cout << "3. mik Vegetable" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "This Rake rake milk is $ 9500" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 9500 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "This vegatables is $ 6400" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 6400 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "This Milk vegetables is $ 8290" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 8290 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p2;
							}
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}
						system("cls");

						int new_price;
						new_price = price;
						std::cout << "Name: " << name << std::endl;
						std::cout << "Login Password: " << password << std::endl;
						std::cout << "Price: " << new_price << endl;
						std::cout << "would you like to buy more:" << std::endl;
						std::cout << "Y for yes, N for no" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							//adding the price together between the former price with the present one  to maake it the total price
							goto start1;
						}
						else if (answer == "n") {
							std::cout << "Thank you come back again" << std::endl;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p3;
						}


					}
				}
				else if (select == 6) {
					//soap
					std::cout << "welcome to the soap Managements" << std::endl;
					std::cout << "This are the soap avaliable" << std::endl;
					std::cout << "1. for Liquid Soap" << std::endl;
					std::cout << "2. for Hand/solid soap" << std::endl;
					std::cout << "3. for detergent/powder soap" << std::endl;
					std::cin >> soap;
					if (soap == 1) {
						std::cout << "The Liquid soap Management" << std::endl;
						std::cout << "1.for Morning Fresh" << std::endl;
						std::cout << "2. for Viva liquid" << std::endl;
						std::cout << "3. for Gooddss liquid" << std::endl;
						std::cin >> soap;
						switch (soap) {
						case 1:std::cout << "Morning fresh liuid soap is $4050" << std::endl;
							std::cout << "How many would you like to buy" << std::endl;
							std::cin >> amount;
							price = 4050 * amount;
							std::cout << "Total Price: " << price << std::endl;
							break;
						case 2:std::cout << "Viva liuid soap is $450" << std::endl;
							std::cout << "How many would you like to buy" << std::endl;
							std::cin >> amount;
							price = 450 * amount;
							std::cout << "Total Price: " << price << std::endl;
							break;
						case 3: std::cout << "Gooddss liquid soap is $4550" << std::endl;
							std::cout << "How many would you like to buy" << std::endl;
							std::cin >> amount;
							price = 4550 * amount;
							std::cout << "Total Price: " << price << std::endl;
							break;
						}while (select2 != 3);
					}
					else if (soap == 2) {
						std::cout << "Welcome to the hand soap/solid soap" << std::endl;
						std::cout << "Hand soap are price based on their size" << std::endl;
						std::cout << "1. for Small size" << std::endl;
						std::cout << "2. for Medium Size" << std::endl;
						std::cout << "3. for Large Size" << std::endl;
						std::cin >> soap;
						if (soap == 1) {
							std::cout << "The Liquid soap Management" << std::endl;
							std::cout << "1.for Morning Fresh" << std::endl;
							std::cout << "2. for Viva liquid" << std::endl;
							std::cout << "3. for Gooddss liquid" << std::endl;
							std::cin >> soap;
							switch (soap) {
							case 1:std::cout << "Morning fresh liuid soap is $4050" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4050 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 2:std::cout << "Viva liuid soap is $450" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 450 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 3: std::cout << "Gooddss liquid soap is $4550" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4550 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							}while (select2 != 3);
						}
					}
					else if (soap == 3) {
						std::cout << "Welcome to the hand soap/solid soap" << std::endl;
						std::cout << "Hand soap are price based on their size" << std::endl;
						std::cout << "1. for Small size" << std::endl;
						std::cout << "2. for Medium Size" << std::endl;
						std::cout << "3. for Large Size" << std::endl;
						std::cin >> soap;
						if (soap == 1) {
							std::cout << "The Liquid soap Management" << std::endl;
							std::cout << "1.for Morning Fresh" << std::endl;
							std::cout << "2. for Viva liquid" << std::endl;
							std::cout << "3. for Gooddss liquid" << std::endl;
							std::cin >> soap;
							switch (soap) {
							case 1:std::cout << "Morning fresh liuid soap is $4050" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4050 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 2:std::cout << "Viva liuid soap is $450" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 450 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 3: std::cout << "Gooddss liquid soap is $4550" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4550 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							}while (select2 != 3);
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto start1;
					}
				}
				else if (select == 7) {
					//car
					std::cout << "welcome to the Car Management" << std::endl;
				std:cout << "Their are few cars avaliable" << std::endl;
					std::cout << "1. for Benz" << std::endl;
					std::cout << "2. for Mclauran" << std::endl;
					std::cout << "3. for Toyota" << std::endl;
					std::cout << "4. for Lambogini" << std::endl;
					std::cout << "5. for Bugatti" << std::endl;
					std::cout << "6. for Ferrari" << std::endl;
					std::cout << "7. for Honda" << std::endl;
					std::cout << "8. for Lexus" << std::endl;
					std::cout << "9. for Venza" << std::endl;
					std::cout << "10. for mustang" << std::endl;
					std::cin >> cars;
					switch (cars) {
					case 1:std::cout << "The car selected is Mercerdez Benz" << std::endl;
						std::cout << "and the price is $400000" << std::endl;
						price = 400000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 2:std::cout << "The car selected is Mclauren" << std::endl;
						std::cout << "and the price is $500000" << std::endl;
						price = 500000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 3:std::cout << "The car selected is Toyota" << std::endl;
						std::cout << "and the price is $20000" << std::endl;
						price = 20000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 4:std::cout << "The car selected is Lambogini" << std::endl;
						std::cout << "and the price is $7000000" << std::endl;
						price = 7000000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 5:std::cout << "The car selected is Bugatti" << std::endl;
						std::cout << "and the price is $800000" << std::endl;
						price = 800000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 6:std::cout << "The car selected is Ferrari" << std::endl;
						std::cout << "and the price is $3000000" << std::endl;
						price = 3000000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 7:std::cout << "The car selected is Honda" << std::endl;
						std::cout << "and the price is $40000" << std::endl;
						price = 40000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 8:std::cout << "The car selected is Lexus" << std::endl;
						std::cout << "and the price is $5000" << std::endl;
						price = 5000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 9:std::cout << "The car selected is Venzas" << std::endl;
						std::cout << "and the price is $10000" << std::endl;
						price = 10000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 10:std::cout << "The car selected is Mustang" << std::endl;
						std::cout << "and the price is $5000000" << std::endl;
						price = 500000;
						std::cout << "Total: $" << price << std::endl;
						break;

					}while (cars != 10);
					std::cout << "would you like to do another printing" << std::endl;
					std::cout << "Y for yes and N for no" << std::endl;
					std::cin >> answer;
					if (answer == "y") {
						goto start1;
					}
					else if (answer == "n") {
						std::cout << "Thank you" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p8;
					}
				}
				else if (select == 8) {
					//Printing Jobs
					p8:
					std::cout << "Welcome to the printing Jobs Sections" << std::endl;
					std::cout << "What would you like to print today" << std::endl;
					std::cout << "1. for flyers" << std::endl;
					std::cout << "2. for 3D printing" << std::endl;
					std::cout << "3. for Banners and large format image" << std::endl;
					
					std::cin >> printing;
					system("cls");
					if (printing == 1) {
						std::cout << "Welcome to the flyer printing section" << std::endl;
						std::cout << "1. for Advetising flyer printing" << std::endl;
						std::cout << "2. for church/ mosque flyer printing" << std::endl;
						std::cout << "3. for Seasonal flyers, e,g christmas, birthday flyers" << std::endl;
						std::cin >> select2;
						if (select2 == 1) {
							std::cout << "The advertising media has been functioning since 1942" << std::endl;
						std::cout << "The price of the adverising media is $4000" << std::endl;
							price = 4000;
							std::cout << "The total price is: " << price << std::endl;
						}
						else if (select2 == 2) {
							std::cout << "the Church and mosque Printing is about $3000" << std::endl;
							price = 3000;
							std::cout << price << std::endl;

						}

						else if (select2 == 3) {
							int choice;
							std::cout << "The seasonal flyers are printed by selecting" << std::endl;
							std::cout << "1. for Christmas flyers" << std::endl;
							std::cout << "2. for birthday flyers" << std::endl;
							std::cout << "3. for Wedding flyers" << std::endl;
							std::cout << "4. for Valatine Flyers" << std::endl;
							std::cin >> choice;
							switch (choice) {
							case 1:std::cout << "The christamas flyer is $12000" << std::endl;
								price = 12000;
								std::cout << "The final price is " << price << std::endl;
								break;
							case 2:
								std::cout << "The christamas flyer is $1200" << std::endl;
								price = 1200;
								std::cout << "The final price is " << price << std::endl;
								break;
							case 3:std::cout << "The christamas flyer is $12030" << std::endl;
								price = 12030;
								std::cout << "The final price is " << price << std::endl;
								break;
							case 4:std::cout << "The christamas flyer is $14000" << std::endl;
								price = 14000;
								std::cout << "The final price is " << price << std::endl;
								break;
							default: std::cout << "Inavalid choice" << std::endl;
								goto p8;


							}while (choice != 4);
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p8;
						}
						std::cout << "would you like to do another printing" << std::endl;
						std::cout << "Y for yes and N for no" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							goto p8;
						}
						else if (answer == "n"){
							std::cout << "Thank you" << std::endl;
					}
						else {
							std::cout << "Invalid" << std::endl;
							goto p8;
					}
					
					}
					else if (printing == 2) {
						std::cout << "Welcome to the 3d Printing Management" << std:: endl;
						std::cout << "Please select one" << std::endl;
						std::cout << "1. for 3d Toy figure" << std::endl;
						std::cout << "2. for Man Figure" << std::endl;
						std::cout << "3. for Action figure" << std::endl;
						std::cin >> printing;
						switch (printing) {
						case 1:std::cout << "The Printing of the 3d toy figure is $ 400" << std::endl;
							price = 400;
							std::cout << "The final is " << price << std::endl;
							break;
						case 2:std::cout << "The Printing of the Man figure is $ 4000" << std::endl;
							price = 4000;
							std::cout << "The final is " << price << std::endl;
							break;
						case 3:std::cout << "The Printing of the 3d toy figure is $ 4500" << std::endl;
							price = 4500;
							std::cout << "The final is " << price << std::endl;
							break;

						}while (printing != 3);
						std::cout << "would you like to do another printing" << std::endl;
						std::cout << "Y for yes and N for no" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							goto p8;
						}
						else if (answer == "n") {
							std::cout << "Thank you" << std::endl;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p8;
						}

					}
					else if (printing == 3) {

						//banner and large format printing..
						std::cout << "Welcome to the banner section" << std::endl;
						std::cout << "This are the selection for the banner price" << std::endl;
						std::cout << "1. for Small banners" << std::endl;
						std::cout << "2. for Medium banners" << std::endl;
						std::cout << "3. for Large Size Banners" << std::endl;
						std::cin >> printing;
						if (printing == 1) {
							std::cout << "The small banners price goes for $ 3100" << std::endl;
							price = 3100;
							std::cout << "The final price is $" << price << std::endl;

						}
						else if (printing == 2) {
							std::cout << "The small banners price goes for $ 3700" << std::endl;
							price = 3700;
							std::cout << "The final price is $" << price << std::endl;
						}
						else if (printing == 3) {
							std::cout << "The small banners price goes for $ 4200" << std::endl;
							price = 4200;
							std::cout << "The final price is $" << price << std::endl;
						}
						else {
							std::cout << "Invalid pls select something valid" << std::endl;
							goto p8;
						}
						p9:
						std::cout << "would you like another printing Y for yes, N for No" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							goto p8;
						}
						else if (answer == "n") {
							std::cout << "Thanks" << std::endl;

						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p9;
						}
					}
					else {
						std::cout << "Invalid please select something valid" << std::endl;
						goto p8;
					}
				}
				else {
					std::cout << "Invalid " << std::endl;
					goto p1;
				}
	}
		else if (login == 2) {

			{

				std::cout << "please enter your name: ";
				std::cin >> name;
				std::cout << "Pls enter a valid password: ";
				std::cin >> password;
				system("cls");
			start3:
				std::cout << "Welcome to Funke shopping complex" << std::endl;
				std::cout << "Welcome Back, " << name << std::endl;
				cout << endl;
			pg:
				std::cout << "pls select an item" << std::endl;
				std::cout << "1. For laptop" << std::endl;
				std::cout << "2. For clothng" << std::endl;
				std::cout << "3. For Tooth-brush" << std::endl;
				std::cout << "4. For Drinks & Foods" << std::endl;
				std::cout << "5. For Vegetables" << std::endl;
				std::cout << "6. For Soaps" << std::endl;
				std::cout << "7. For cars" << std::endl;
				std::cout << "8. For Printing jobs" << std::endl;

				std::cin >> select;
				system("cls");
				if (select == 1)
				{
				p5:
					std::cout << "Welcome to the Gadget section, Pls select something you like" << std::endl;
					std::cout << "1. for DELL laptop" << std::endl;
					std::cout << "2. for HP laptop" << std::endl;
					std::cout << "3. for APPLE laptop" << std::endl;
					std::cout << "4. for SAMSUNG laptop" << std::endl;
					std::cout << "5. for LENOVO laptop" << std::endl;
					std::cin >> select2;
					system("cls");
					if (select2 == 1) {
						std::cout << "This are the product avaliable for Dell" << std::endl;
						std::cout << "1. Dell vostro 3400 core 15 laptop" << std::endl;
						std::cout << "2. Dell latitude 5320 ci5 laptop" << std::endl;
						std::cout << "3. Dell Inspiration" << std::endl;
						std::cin >> laptop;
						if (laptop == 1) {
							std::cout << "This laptop is $ 40000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 40000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 2) {
							std::cout << "This laptop is $ 70000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 70000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 3) {
							std::cout << "This laptop is $ 8000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 8000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 2) {
						std::cout << "This are the product avaliable for Hp" << std::endl;
						std::cout << "1  HP laptop 14s" << std::endl;
						std::cout << "2. HP Elite Book 640 G9 Laptop (core i7)" << std::endl;
						std::cout << "3. Hp ProBook 440 G9 Notebook Computer" << std::endl;
						std::cin >> laptop;
						if (laptop == 1) {
							std::cout << "This laptop is $ 20000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 20000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 2) {
							std::cout << "This laptop is $ 7500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7500 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 3) {
							std::cout << "This laptop is $ 800000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 800000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 3) {
						std::cout << "THis are the product avaliable for Apple" << std::endl;
						std::cout << "1. Apple MacBook Air" << std::endl;
						std::cout << "2. Apple Macbook Pro" << std::endl;
						std::cout << "3. Apple Macbooks" << std::endl;
						std::cin >> laptop;
						if (laptop == 1) {
							std::cout << "This laptop is $ 45000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 45000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 2) {
							std::cout << "This laptop is $ 7800" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7800 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 3) {
							std::cout << "This laptop is $ 6000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 4) {
						std::cout << "This are the products avaliable in samsung" << std::endl;
						std::cout << "1. Samsung Galaxy Book series" << std::endl;
						std::cout << "2. Samsung Note Book Series" << std::endl;
						std::cout << "3. Samsung QLED laptop" << std::endl;
						std::cin >> laptop;
						if (laptop == 1) {
							std::cout << "This laptop is $ 92000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 92000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 2) {
							std::cout << "This laptop is $ 67000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 67000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 3) {
							std::cout << "This laptop is $ 7000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else if (select2 == 5) {
						std::cout << "This are the product avaliable in Lenovo" << std::endl;
						std::cout << "1. Lenovo Thinkbook 14G4 Laptop" << std::endl;
						std::cout << "2. Lenovo Thinkpad L13 Laptop" << std::endl;
						std::cout << "3. Lenovo ideapad 3core i5 Laptop" << std::endl;
						std::cin >> laptop;
						if (laptop == 1) {
							std::cout << "This laptop is $ 91000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 91000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 2) {
							std::cout << "This laptop is $ 61000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 61000 * amount;
							std::cout << "Price: " << price;
						}
						else if (laptop == 3) {
							std::cout << "This laptop is $ 8200" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 8200 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p2;
					}
					system("cls");
				p4:

					new_price = price;
					price2 = new_price + price;
					std::cout << "Name: " << name << std::endl;
					std::cout << "Login Password: " << password << std::endl;
					std::cout << "Price: " << price << endl;
					std::cout << "would you like to buy more:" << std::endl;
					std::cout << "Y for yes, N for no" << std::endl;
					std::cin >> answer;
					//if their  is a way for the code to run after the goto statement.....
					//found the error;
					if (answer == "y")
					{
						//adding the price together between the former price with the present one  to maake it the total price
						//this goto allowes it not to execute the code and go back to the begining and the cod ebelow would not be executed...
						std::cout << new_price << std::endl;
						std::cout << "final Price: " << price2 << std::endl;
						goto start1;
						//std::cout << "Total price: " << price2 + price << std::endl;
						//std::cout << "Total price: " << new_price << std::endl;
						//std::cout << "Thank you and come again" << std::endl;
					}
					else if (answer == "n") {
						std::cout << "Thank you come back again" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p4;
					}
				}
				else if (select == 2) {


					std::cout << "Welcome to the Clothing section, Pls select something you like" << std::endl;
					std::cout << "1. for Girls polo" << std::endl;
					std::cout << "2. for Girls short skirt" << std::endl;
					std::cout << "3. for Girls long skirt" << std::endl;
					std::cout << "4. for Boys shirt" << std::endl;
					std::cout << "5. for Boys Trousers" << std::endl;
					std::cin >> select2;
					system("cls");
					if (select2 == 1) {
						std::cout << "This are the product avaliable for Girls polo" << std::endl;
						std::cout << "1. 123 inches short polo" << std::endl;
						std::cout << "2. 412 inches for Long polo" << std::endl;
						std::cout << "3. 215 inches for average" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This 123 inches short is $ 300" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 300 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This 412 inche long polo $ 400" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 400 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This laptop is $ 312" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 312 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 2) {
						//for Girls short skirt" 

						std::cout << "This are the product avaliable for Girls short skirt" << std::endl;
						std::cout << "1  14g short skirt" << std::endl;
						std::cout << "2. Doir 110 inches short" << std::endl;
						std::cout << "3. Scar x mini skirt" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This 14g short skirt is $ 700" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 700 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This dior 110 inches short is $ 750" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 750 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This scar X mini skirt is $ 1000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 1000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 3) {
						//std::cout << "3. for Girls long skirt" << std::endl;

						std::cout << "THis are the product avaliable for Girls long skirt" << std::endl;
						std::cout << "1. 14g long skirt" << std::endl;
						std::cout << "2. micro scar x long skirt" << std::endl;
						std::cout << "3. Luxury x long skirt" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This 14g long skirt is $4500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 4500 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This micro scar x long skirt is $ 780" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 780 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This Luxury x long skirt is $ 6000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 4) {
						//	std::cout << "4. for Boys shirt" << std::endl;

						std::cout << "This are the products avaliable for Boys shirt" << std::endl;
						std::cout << "1. Doir long arm" << std::endl;
						std::cout << "2.baleciaga huddy" << std::endl;
						std::cout << "3.Louis vuition Brand" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This Dior long arm is $ 9200" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 9200 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This Balenciaga Huddy is $ 6700" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6700 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This Louis Vuition Brand is $ 7000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7000 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else if (select2 == 5) {
						//std::cout << "5. for Boys Trousers"
						std::cout << "This are the product avaliable in Lenovo" << std::endl;
						std::cout << "1. Balenciaga long jeans" << std::endl;
						std::cout << "2. Louis vuition short trouser" << std::endl;
						std::cout << "3. Apex long jeans" << std::endl;
						std::cin >> clothing;
						if (clothing == 1) {
							std::cout << "This Balenciage long jeans is $ 920" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 920 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 2) {
							std::cout << "This louis vuition shorrt trousers is $ 610" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 610 * amount;
							std::cout << "Price: " << price;
						}
						else if (clothing == 3) {
							std::cout << "This Apex long jeans is $ 8200" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 8200 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p2;
					}
					system("cls");

					int new_price;
					new_price = price;
					std::cout << "Name: " << name << std::endl;
					std::cout << "Login Password: " << password << std::endl;
					std::cout << "Price: " << new_price << endl;
					std::cout << "would you like to buy more:" << std::endl;
					std::cout << "Y for yes, N for no" << std::endl;
					std::cin >> answer;
					if (answer == "y") {
						//adding the price together between the former price with the present one  to maake it the total price
						goto start3;


					}
					else if (answer == "n") {
						std::cout << "Thank you come back again" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p3;
					}
				}

				else if (select == 3) {
					//tooth_brush

					std::cout << "Welcome to the Tooth-Brush section, Pls select something you like" << std::endl;
					std::cout << "1. for Diplomat Toth-Brush" << std::endl;
					std::cout << "2. for Exotic Tooth-Brush" << std::endl;
					std::cout << "3. for premium Tooth-Brush" << std::endl;
					std::cout << "4. for Wisdom Toth-Brush" << std::endl;
					std::cout << "5. for Precoius Tooth-Brush" << std::endl;
					std::cin >> select2;
					system("cls");
					if (select2 == 1) {
						//Diplomat tooth brush 
						std::cout << "This are the product avaliable for Diplomat toothbrush" << std::endl;
						std::cout << "1. 10cm toothbrush(diploamt)" << std::endl;
						std::cout << "2. Hard toothbrush 2 cm thick" << std::endl;
						std::cout << "3. medium strength 1.5 cm thick" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "10cm toothbrush(diploamt) is $ 100" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 100 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "Hard toothbrush 2 cm thick $ 300" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 300 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "medium strength 1.5 cm thick $ 315" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 315 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}

					}
					else if (select2 == 2) {
						//for Exotic tooth brush" 

						std::cout << "This are the product avaliable for Exotic tooth-Brush" << std::endl;
						std::cout << "1  14cm tooth-brush" << std::endl;
						std::cout << "2. couples tooth-brush" << std::endl;
						std::cout << "3. Medium hard tooth-brush" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "This 14cm tooth-brush is $ 500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 500 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This couples tooth-brush $ 2950" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 2950 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Medium hard tooth-brush is $ 1090" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 1090 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 3) {
						//premium tooth brush

						std::cout << "THis are the product avaliable for Premium tooth-brush" << std::endl;
						std::cout << "1. scar premium" << std::endl;
						std::cout << "2. scar x premium toothbruch" << std::endl;
						std::cout << "3. Luxury Premium tooth-brush" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "This scar premium is $455" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 455 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This scar x premium toothbrush is $ 780" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 780 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Luxury Premium tooth-brush is $ 6500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6500 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 4) {
						//	wisdom toothbrush

						std::cout << "This are the products avaliable for Wisdom Tooth-Brush" << std::endl;
						std::cout << "1.Wisdom plastics" << std::endl;
						std::cout << "2.Wisdom extra hard " << std::endl;
						std::cout << "3.Wisdom medium thick" << std::endl;
						std::cin >> tooth_brush;
						if (clothing == 1) {
							std::cout << "This Wisdom plastics is $ 920" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 920 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This Wisdom extra hard is $ 670" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 670 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Wisdom medium thick is $ 7900" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7900 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else if (select2 == 5) {
						//precoius toothbrush
						std::cout << "This are the product avaliable in for Precoius Tooth-Brush" << std::endl;
						std::cout << "1. Pre-pre kids" << std::endl;
						std::cout << "2. Precoius Extraodinary" << std::endl;
						std::cout << "3. Precoius Dominion" << std::endl;
						std::cin >> tooth_brush;
						if (tooth_brush == 1) {
							std::cout << "This Pre-pre kids is $ 950" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 950 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 2) {
							std::cout << "This Precoius Extraodinary is $ 640" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 640 * amount;
							std::cout << "Price: " << price;
						}
						else if (tooth_brush == 3) {
							std::cout << "This Precoius Dominion is $ 8290" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 8290 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p2;
					}
					system("cls");

					int new_price;
					new_price = price;
					std::cout << "Name: " << name << std::endl;
					std::cout << "Login Password: " << password << std::endl;
					std::cout << "Price: " << new_price << endl;
					std::cout << "would you like to buy more:" << std::endl;
					std::cout << "Y for yes, N for no" << std::endl;
					std::cin >> answer;
					if (answer == "y") {
						//adding the price together between the former price with the present one  to maake it the total price
						goto start1;
					}
					else if (answer == "n") {
						std::cout << "Thank you come back again" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p3;
					}

				}
				else if (select == 4) {


					//Drinks & Foods

					std::cout << "Welcome to the Drinks & Foods section, Pls select something you like" << std::endl;
					std::cout << "1. for Champane" << std::endl;
					std::cout << "2. for Red Wine" << std::endl;
					std::cout << "3. for Youghurt" << std::endl;
					std::cout << "4. for Flour Foods" << std::endl;
					std::cout << "5. for Meat Snacks" << std::endl;
					std::cin >> select2;
					system("cls");
					if (select2 == 1) {
						//Champange 
						std::cout << "This are the product avaliable for Champange" << std::endl;
						std::cout << "1. Exotic Chanpange" << std::endl;
						std::cout << "2. Alcholic Champange" << std::endl;
						std::cout << "3. 2% Alcholic Champange" << std::endl;
						std::cin >> drinks;
						if (drinks == 1) {
							std::cout << "Exotic Champange is $ 15000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 15000 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 2) {
							std::cout << "Alcholic champange is $ 30000" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 30000 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 3) {
							std::cout << "2% Alcholic is $ 31500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 31500 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 2) {
						//Red wine 

						std::cout << "This are the product avaliable for Red Wines" << std::endl;
						std::cout << "1  Veleta Red Wine" << std::endl;
						std::cout << "2. Juvenile Red Wine" << std::endl;
						std::cout << "3. Setemi Red wine" << std::endl;
						std::cin >> drinks;
						if (drinks == 1) {
							std::cout << "This veleta red wine is $ 54400" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 54400 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 2) {
							std::cout << "This juvenile$ 29500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 29500 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 3) {
							std::cout << "This Setemi Red wine is $ 100900" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 100900 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 3) {
						//youghurt

						std::cout << "THis are the product avaliable for youghurt" << std::endl;
						std::cout << "1. Dudu youghurt" << std::endl;
						std::cout << "2. Nutri-milk youghurt" << std::endl;
						std::cout << "3. Viju Youghurt" << std::endl;
						std::cin >> drinks;
						if (drinks == 1) {
							std::cout << "Dudu youghurt is $4500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 4500 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 2) {
							std::cout << "This Nutri-milk Yougurt is $ 785" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 785 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 3) {
							std::cout << "This Viju Youghurt is $ 650" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 650 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}

					}
					else if (select2 == 4) {
						//	flour foods

						std::cout << "This are the products avaliable for Flour Foods" << std::endl;
						std::cout << "1. Baked Bread" << std::endl;
						std::cout << "2. Harmburger snacks " << std::endl;
						std::cout << "3. All flavor Pizza" << std::endl;
						std::cin >> drinks;
						if (drinks == 1) {
							std::cout << "This Baked Bread is $ 950" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 950 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 2) {
							std::cout << "Harmburger snacks is $ 6750" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 6750 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 3) {
							std::cout << "All Flavor Pizza is $ 7900" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 7900 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else if (select2 == 5) {
						//meat snacks
						std::cout << "This are the product avaliable in for Meat Snacks" << std::endl;
						std::cout << "1. Meats Buns" << std::endl;
						std::cout << "2. meat Pie" << std::endl;
						std::cout << "3. Chicken & Chips" << std::endl;
						std::cin >> tooth_brush;
						if (drinks == 1) {
							std::cout << "This Meat Buns is $ 9500" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 9500 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 2) {
							std::cout << "This Precoius Extraodinary is $ 640" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 640 * amount;
							std::cout << "Price: " << price;
						}
						else if (drinks == 3) {
							std::cout << "This Precoius Dominion is $ 829" << std::endl;
							std::cout << "How many would you like to purchase: ";
							std::cin >> amount;
							price = 829 * amount;
							std::cout << "Price: " << price;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p5;
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p5;
					}
					system("cls");

					int new_price;
					new_price = price;
					std::cout << "Name: " << name << std::endl;
					std::cout << "Login Password: " << password << std::endl;
					std::cout << "Price: " << new_price << endl;
					std::cout << "would you like to buy more:" << std::endl;
					std::cout << "Y for yes, N for no" << std::endl;
					std::cin >> answer;
					if (answer == "y") {
						//adding the price together between the former price with the present one  to maake it the total price
						goto start1;
					}
					else if (answer == "n") {
						std::cout << "Thank you come back again" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p3;
					}


				}
				else if (select == 5) {
					//vegetables
					{

						std::cout << "Welcome to the Vegetables section, Pls select something you like" << std::endl;
						std::cout << "1. for Fruits Vegetables" << std::endl;
						std::cout << "2. for Cabbages vegatabes" << std::endl;
						std::cout << "3. for Water leaf Vegetables" << std::endl;
						std::cout << "4. for Green tea vegetables" << std::endl;
						std::cout << "5. for Milk tea vebgetables" << std::endl;
						std::cin >> select2;
						system("cls");
						if (select2 == 1) {
							//Fruits Vegetables
							std::cout << "This are the product avaliable for Fruits Vegetables" << std::endl;
							std::cout << "1. Carrots" << std::endl;
							std::cout << "2. golden Melon" << std::endl;
							std::cout << "3. Water Melon" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "Carrots per one is $ 150" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 150 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "golden Melon is $ 300" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 300 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "Water melon is $ 315" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 315 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p5;
							}

						}
						else if (select2 == 2) {
							//Cabbages
							std::cout << "This are the product avaliable for cabbages" << std::endl;
							std::cout << "1  Green Cabbages" << std::endl;
							std::cout << "2. Yellow Cabbages" << std::endl;
							std::cout << "3. red Cabbages" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "This Green cabbages is $ 5440" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 5440 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "The red Cabbages $295" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 295 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "The Red Cabbages is $ 190" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 190 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p5;
							}

						}
						else if (select2 == 3) {
							//Water leaf

							std::cout << "This are the product avaliable for water Leaf" << std::endl;
							std::cout << "1. Green/ water leaf" << std::endl;
							std::cout << "2. Refrigrated Water leaf" << std::endl;
							std::cout << "3. Canned Water leaf" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "Fresh water leaf is $459" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 459 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "The refrigerated  is $ water leaf $780" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 780 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "The Canned Water leaf $ 1000" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 1000 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p5;
							}

						}
						else if (select2 == 4) {
							//	Green tea vegtables

							std::cout << "This are the products avaliable for Green Tea Vegetables" << std::endl;
							std::cout << "1. Green tea" << std::endl;
							std::cout << "2. Liptons " << std::endl;
							std::cout << "3. Natural bags of green vegetables" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "This Green tea is $ 950" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 950 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "Liptions is $ 650" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 650 * amount;
								std::cout << "Price: " << price;
							}
							else if (drinks == 3) {
								std::cout << "natural Bag of Green vegetables is $ 790" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 790 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p5;
							}
						}
						else if (select2 == 5) {
							//Milk tea Vegetables
							std::cout << "This are the product avaliable in for Milk Tea Vegetables" << std::endl;
							std::cout << "1. Rake rake milk" << std::endl;
							std::cout << "2. vegetables tea bag" << std::endl;
							std::cout << "3. mik Vegetable" << std::endl;
							std::cin >> vegetables;
							if (vegetables == 1) {
								std::cout << "This Rake rake milk is $ 9500" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 9500 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 2) {
								std::cout << "This vegatables is $ 6400" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 6400 * amount;
								std::cout << "Price: " << price;
							}
							else if (vegetables == 3) {
								std::cout << "This Milk vegetables is $ 8290" << std::endl;
								std::cout << "How many would you like to purchase: ";
								std::cin >> amount;
								price = 8290 * amount;
								std::cout << "Price: " << price;
							}
							else {
								std::cout << "Invalid" << std::endl;
								goto p5;
							}
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p2;
						}
						system("cls");

						int new_price;
						new_price = price;
						std::cout << "Name: " << name << std::endl;
						std::cout << "Login Password: " << password << std::endl;
						std::cout << "Price: " << new_price << endl;
						std::cout << "would you like to buy more:" << std::endl;
						std::cout << "Y for yes, N for no" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							//adding the price together between the former price with the present one  to maake it the total price
							goto start1;
						}
						else if (answer == "n") {
							std::cout << "Thank you come back again" << std::endl;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto p3;
						}


					}
				}
				else if (select == 6) {
					//soap
					std::cout << "welcome to the soap Managements" << std::endl;
					std::cout << "This are the soap avaliable" << std::endl;
					std::cout << "1. for Liquid Soap" << std::endl;
					std::cout << "2. for Hand/solid soap" << std::endl;
					std::cout << "3. for detergent/powder soap" << std::endl;
					std::cin >> soap;
					if (soap == 1) {
						std::cout << "The Liquid soap Management" << std::endl;
						std::cout << "1.for Morning Fresh" << std::endl;
						std::cout << "2. for Viva liquid" << std::endl;
						std::cout << "3. for Gooddss liquid" << std::endl;
						std::cin >> soap;
						switch (soap) {
						case 1:std::cout << "Morning fresh liuid soap is $4050" << std::endl;
							std::cout << "How many would you like to buy" << std::endl;
							std::cin >> amount;
							price = 4050 * amount;
							std::cout << "Total Price: " << price << std::endl;
							break;
						case 2:std::cout << "Viva liuid soap is $450" << std::endl;
							std::cout << "How many would you like to buy" << std::endl;
							std::cin >> amount;
							price = 450 * amount;
							std::cout << "Total Price: " << price << std::endl;
							break;
						case 3: std::cout << "Gooddss liquid soap is $4550" << std::endl;
							std::cout << "How many would you like to buy" << std::endl;
							std::cin >> amount;
							price = 4550 * amount;
							std::cout << "Total Price: " << price << std::endl;
							break;
						}while (select2 != 3);
					}
					else if (soap == 2) {
						std::cout << "Welcome to the hand soap/solid soap" << std::endl;
						std::cout << "Hand soap are price based on their size" << std::endl;
						std::cout << "1. for Small size" << std::endl;
						std::cout << "2. for Medium Size" << std::endl;
						std::cout << "3. for Large Size" << std::endl;
						std::cin >> soap;
						if (soap == 1) {
							std::cout << "The Liquid soap Management" << std::endl;
							std::cout << "1.for Morning Fresh" << std::endl;
							std::cout << "2. for Viva liquid" << std::endl;
							std::cout << "3. for Gooddss liquid" << std::endl;
							std::cin >> soap;
							switch (soap) {
							case 1:std::cout << "Morning fresh liuid soap is $4050" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4050 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 2:std::cout << "Viva liuid soap is $450" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 450 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 3: std::cout << "Gooddss liquid soap is $4550" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4550 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							}while (select2 != 3);
						}
					}
					else if (soap == 3) {
						std::cout << "Welcome to the hand soap/solid soap" << std::endl;
						std::cout << "Hand soap are price based on their size" << std::endl;
						std::cout << "1. for Small size" << std::endl;
						std::cout << "2. for Medium Size" << std::endl;
						std::cout << "3. for Large Size" << std::endl;
						std::cin >> soap;
						if (soap == 1) {
							std::cout << "The Liquid soap Management" << std::endl;
							std::cout << "1.for Morning Fresh" << std::endl;
							std::cout << "2. for Viva liquid" << std::endl;
							std::cout << "3. for Gooddss liquid" << std::endl;
							std::cin >> soap;
							switch (soap) {
							case 1:std::cout << "Morning fresh liuid soap is $4050" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4050 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 2:std::cout << "Viva liuid soap is $450" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 450 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							case 3: std::cout << "Gooddss liquid soap is $4550" << std::endl;
								std::cout << "How many would you like to buy" << std::endl;
								std::cin >> amount;
								price = 4550 * amount;
								std::cout << "Total Price: " << price << std::endl;
								break;
							}while (select2 != 3);
						}
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto start3;
					}
				}
				else if (select == 7) {
					//car
					std::cout << "welcome to the Car Management" << std::endl;
				std::cout << "Their are few cars avaliable" << std::endl;
					std::cout << "1. for Benz" << std::endl;
					std::cout << "2. for Mclauran" << std::endl;
					std::cout << "3. for Toyota" << std::endl;
					std::cout << "4. for Lambogini" << std::endl;
					std::cout << "5. for Bugatti" << std::endl;
					std::cout << "6. for Ferrari" << std::endl;
					std::cout << "7. for Honda" << std::endl;
					std::cout << "8. for Lexus" << std::endl;
					std::cout << "9. for Venza" << std::endl;
					std::cout << "10. for mustang" << std::endl;
					std::cin >> cars;
					switch (cars) {
					case 1:std::cout << "The car selected is Mercerdez Benz" << std::endl;
						std::cout << "and the price is $400000" << std::endl;
						price = 400000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 2:std::cout << "The car selected is Mclauren" << std::endl;
						std::cout << "and the price is $500000" << std::endl;
						price = 500000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 3:std::cout << "The car selected is Toyota" << std::endl;
						std::cout << "and the price is $20000" << std::endl;
						price = 20000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 4:std::cout << "The car selected is Lambogini" << std::endl;
						std::cout << "and the price is $7000000" << std::endl;
						price = 7000000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 5:std::cout << "The car selected is Bugatti" << std::endl;
						std::cout << "and the price is $800000" << std::endl;
						price = 800000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 6:std::cout << "The car selected is Ferrari" << std::endl;
						std::cout << "and the price is $3000000" << std::endl;
						price = 3000000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 7:std::cout << "The car selected is Honda" << std::endl;
						std::cout << "and the price is $40000" << std::endl;
						price = 40000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 8:std::cout << "The car selected is Lexus" << std::endl;
						std::cout << "and the price is $5000" << std::endl;
						price = 5000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 9:std::cout << "The car selected is Venzas" << std::endl;
						std::cout << "and the price is $10000" << std::endl;
						price = 10000;
						std::cout << "Total: $" << price << std::endl;
						break;
					case 10:std::cout << "The car selected is Mustang" << std::endl;
						std::cout << "and the price is $5000000" << std::endl;
						price = 500000;
						std::cout << "Total: $" << price << std::endl;
						break;

					}while (cars != 10);
					std::cout << "would you like to do another printing" << std::endl;
					std::cout << "Y for yes and N for no" << std::endl;
					std::cin >> answer;
					if (answer == "y") {
						goto start1;
					}
					else if (answer == "n") {
						std::cout << "Thank you" << std::endl;
					}
					else {
						std::cout << "Invalid" << std::endl;
						goto p8;
					}
				}
				else if (select == 8) {
					//Printing Jobs
				pj:
					std::cout << "Welcome to the printing Jobs Sections" << std::endl;
					std::cout << "What would you like to print today" << std::endl;
					std::cout << "1. for flyers" << std::endl;
					std::cout << "2. for 3D printing" << std::endl;
					std::cout << "3. for Banners and large format image" << std::endl;

					std::cin >> printing;
					system("cls");
					if (printing == 1) {
						std::cout << "Welcome to the flyer printing section" << std::endl;
						std::cout << "1. for Advetising flyer printing" << std::endl;
						std::cout << "2. for church/ mosque flyer printing" << std::endl;
						std::cout << "3. for Seasonal flyers, e,g christmas, birthday flyers" << std::endl;
						std::cin >> select2;
						if (select2 == 1) {
							std::cout << "The advertising media has been functioning since 1942" << std::endl;
							std::cout << "The price of the adverising media is $4000" << std::endl;
							price = 4000;
							std::cout << "The total price is: " << price << std::endl;
						}
						else if (select2 == 2) {
							std::cout << "the Church and mosque Printing is about $3000" << std::endl;
							price = 3000;
							std::cout << price << std::endl;

						}

						else if (select2 == 3) {
							int choice;
							std::cout << "The seasonal flyers are printed by selecting" << std::endl;
							std::cout << "1. for Christmas flyers" << std::endl;
							std::cout << "2. for birthday flyers" << std::endl;
							std::cout << "3. for Wedding flyers" << std::endl;
							std::cout << "4. for Valatine Flyers" << std::endl;
							std::cin >> choice;
							switch (choice) {
							case 1:std::cout << "The christamas flyer is $12000" << std::endl;
								price = 12000;
								std::cout << "The final price is " << price << std::endl;
								break;
							case 2:
								std::cout << "The christamas flyer is $1200" << std::endl;
								price = 1200;
								std::cout << "The final price is " << price << std::endl;
								break;
							case 3:std::cout << "The christamas flyer is $12030" << std::endl;
								price = 12030;
								std::cout << "The final price is " << price << std::endl;
								break;
							case 4:std::cout << "The christamas flyer is $14000" << std::endl;
								price = 14000;
								std::cout << "The final price is " << price << std::endl;
								break;
							default: std::cout << "Inavalid choice" << std::endl;
								goto p8;


							}while (choice != 4);
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto pj;
						}
						std::cout << "would you like to do another printing" << std::endl;
						std::cout << "Y for yes and N for no" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							goto p8;
						}
						else if (answer == "n") {
							std::cout << "Thank you" << std::endl;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto pj;
						}

					}
					else if (printing == 2) {
						std::cout << "Welcome to the 3d Printing Management" << std::endl;
						std::cout << "Please select one" << std::endl;
						std::cout << "1. for 3d Toy figure" << std::endl;
						std::cout << "2. for Man Figure" << std::endl;
						std::cout << "3. for Action figure" << std::endl;
						std::cin >> printing;
						switch (printing) {
						case 1:std::cout << "The Printing of the 3d toy figure is $ 400" << std::endl;
							price = 400;
							std::cout << "The final is " << price << std::endl;
							break;
						case 2:std::cout << "The Printing of the Man figure is $ 4000" << std::endl;
							price = 4000;
							std::cout << "The final is " << price << std::endl;
							break;
						case 3:std::cout << "The Printing of the 3d toy figure is $ 4500" << std::endl;
							price = 4500;
							std::cout << "The final is " << price << std::endl;
							break;

						}while (printing != 3);
						std::cout << "would you like to do another printing" << std::endl;
						std::cout << "Y for yes and N for no" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							goto p8;
						}
						else if (answer == "n") {
							std::cout << "Thank you" << std::endl;
						}
						else {
							std::cout << "Invalid" << std::endl;
							goto pj;
						}

					}
					else if (printing == 3) {

						//banner and large format printing..
						std::cout << "Welcome to the banner section" << std::endl;
						std::cout << "This are the selection for the banner price" << std::endl;
						std::cout << "1. for Small banners" << std::endl;
						std::cout << "2. for Medium banners" << std::endl;
						std::cout << "3. for Large Size Banners" << std::endl;
						std::cin >> printing;
						if (printing == 1) {
							std::cout << "The small banners price goes for $ 3100" << std::endl;
							price = 3100;
							std::cout << "The final price is $" << price << std::endl;

						}
						else if (printing == 2) {
							std::cout << "The small banners price goes for $ 3700" << std::endl;
							price = 3700;
							std::cout << "The final price is $" << price << std::endl;
						}
						else if (printing == 3) {
							std::cout << "The small banners price goes for $ 4200" << std::endl;
							price = 4200;
							std::cout << "The final price is $" << price << std::endl;
						}
						else {
							std::cout << "Invalid pls select something valid" << std::endl;
							goto p8;
						}
					pf:
						std::cout << "would you like another printing Y for yes, N for No" << std::endl;
						std::cin >> answer;
						if (answer == "y") {
							goto p8;
						}
						else if (answer == "n") {
							std::cout << "Thanks" << std::endl;

						}
						else {
							std::cout << "Invalid" << std::endl;
							goto pf;
						}
					}
					else {
						std::cout << "Invalid please select something valid" << std::endl;
						goto pj;
					}
				}
				else {
					std::cout << "Invalid " << std::endl;
					goto pg;
				}
			}

		}
		else {
			std::cout << "Invalid please reselect" << std::endl;
			goto start;
		}
		return 0;
	
}