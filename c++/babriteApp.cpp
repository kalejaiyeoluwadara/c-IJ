#include <iostream>
using namespace std;

bool checkUser()
{
	int idCard, faceMask;

	cout << "Do you have your face mask on? Enter 1 for yes, 0 for no: ";
	cin >> faceMask;
	cout << "Do you have your ID card? Enter 1 for yes, 0 for no: ";
	cin >> idCard;

	if (faceMask != 1 && idCard != 1)
	{
		cout << "Access Denied:\n";
		return false;
	}
	else
	{
		cout << "Access granted.\n";
		return true;
	}
}
int main()
{
	// Variable declarations

	int selectedShop;
	bool accessGranted;
	int items = 0;
	int itemChoice;
	int count;
	float VAT;
	string foodCart[4];
	string mainCart[4];
	string accessoryCart[4];
	string clotheCart[4];
	string bookCart[4];
	int foodPriceCart[4];
	int accessoryPriceCart[4];
	int mainPriceCart[4];
	int clothePriceCart[4];
	int bookPriceCart[4];
	float total;

	// shop options
	cout << "Welcome to Babrite app: \n";
	cout << "Enter shop option: \n";
	cout << "1: Main store \n";
	cout << "2: Food court \n";
	cout << "3: Accessory store \n";
	cout << "4: Clothe store \n";
	cout << "5: Book shop \n";
	cin >> selectedShop;
	switch (selectedShop)
	{

		// Main store
	case 1:
		accessGranted = checkUser();
		cout << "Enter number of items you'll like to buy: ";
		cin >> items;
		if (items > 3)
		{

			cout << "Items to be purchased should be less than or equal to 3\n";
		}
		else
		{
			if (accessGranted)
			{
				cout << "Welcome to the main store\n";
				cout << "\t\t----------Our Products----------\n";
				cout << "Item\t\tPrice\n";
				cout << "1. Nutella - #3500\n";
				cout << "2. Bread - #1000 \n";
				cout << "3. Brush - #500 \n";
				cout << "4. Polish - #600 \n";
				cout << "5. Granola - #400 \n";
				cout << "6. Cream - #500 \n";
				cout << "7. Tissue - #600 \n";

				while (count < items)
				{

					cout << "Enter productID\n";
					cin >> itemChoice;
					if (itemChoice == 1)
					{
						mainCart[count] = "Nutella";
						mainPriceCart[count] = 3500;
						cout << "Nutella added to cart\n";
					}
					else if (itemChoice == 2)
					{
						mainCart[count] = "Bread";
						mainPriceCart[count] = 1000;
						cout << "Bread added to cart\n";
					}
					else if (itemChoice == 3)
					{
						mainCart[count] = "Brush";
						mainPriceCart[count] = 200;
						cout << "Brush added to cart\n";
					}
					else if (itemChoice == 4)
					{
						mainCart[count] = "Polish";
						mainPriceCart[count] = 600;
						cout << "Polish added to cart\n";
					}
					else if (itemChoice == 5)
					{
						mainCart[count] = "Granola";
						mainPriceCart[count] = 400;
						cout << "Granola added to cart\n";
					}
					else if (itemChoice == 6)
					{
						mainCart[count] = "Cream";
						mainPriceCart[count] = 500;
						cout << "Cream added to cart\n";
					}
					else if (itemChoice == 7)
					{
						mainCart[count] = "Tissue";
						mainPriceCart[count] = 600;
						cout << "Tissue added to cart\n";
					}
					else
					{
						cout << "ID not found. \n";
					}
					count += 1;
				}

				// Items Cart
				cout << system("cls");
				cout << "\n-----------Items in your cart-----------";
				for (int i = 0; i < items; i++)
				{
					cout << "\n"
						 << i + 1 << " " << mainCart[i] << " \n";
				}
				cout << "--------------------------\n";

				// Items Receipt
				cout << "\n\n-----------BU MALL-----------";
				int t = 0;
				for (int i = 0; i < items; i++)
				{
					cout << "\n"
						 << i + 1 << " " << mainCart[i] << " : #" << mainPriceCart[i] << " \n";
					t += mainPriceCart[i];
				}
				VAT = 0.05 * t;
				cout << "Log : #" << t << endl;
				cout << "VAT : #" << VAT << endl;
				cout << "Total : #" << t + VAT << endl;
				cout << "--------------------------\n";
			}
			else
			{
				cout << "Error\n";
			}
		}

		break;

		// Food court
	case 2:
		accessGranted = checkUser();
		cout << "Enter number of items you'll like to buy: ";
		cin >> items;
		if (items > 3)
		{
			cout << "Items to be purchased should be less than or equal to 3\n";
		}
		else
		{
			if (accessGranted)
			{
				cout << "Welcome to our Food court\n";
				cout << "ID Items \t\t Price\n";
				cout << "1. Burger - #1500\n";
				cout << "2. Pizza - #1000\n";
				cout << "3. Fries - #200\n";
				cout << "4. Rice - #600\n";
				cout << "5. Doughnut - #200\n";
				cout << "6. Egg roll - #150\n";
				cout << "7. Tofu - #200\n";

				while (count < items)
				{

					cout << "Enter productID\n";
					cin >> itemChoice;
					if (itemChoice == 1)
					{
						foodCart[count] = "Burger";
						foodPriceCart[count] = 1500;
						cout << "Burger added to cart\n";
					}
					else if (itemChoice == 2)
					{
						foodCart[count] = "Pizza";
						foodPriceCart[count] = 1000;
						cout << "Pizza added to cart\n";
					}
					else if (itemChoice == 3)
					{
						foodCart[count] = "Fries";
						foodPriceCart[count] = 200;
						cout << "Fries added to cart\n";
					}
					else if (itemChoice == 4)
					{
						foodCart[count] = "Rice";
						foodPriceCart[count] = 600;
						cout << "Rice added to cart\n";
					}
					else if (itemChoice == 5)
					{
						foodCart[count] = "Doughnut";
						foodPriceCart[count] = 200;
						cout << "Doughnut added to cart\n";
					}
					else if (itemChoice == 6)
					{
						foodCart[count] = "Egg roll";
						foodPriceCart[count] = 150;
						cout << "Egg roll added to cart\n";
					}
					else if (itemChoice == 7)
					{
						foodCart[count] = "Tofu";
						foodPriceCart[count] = 200;
						cout << "Tofu added to cart\n";
					}
					else
					{
						cout << "ID not found. \n";
					}
					count += 1;
				}

				// Food Cart
				cout << system("cls");
				cout << "\n-----------Items in your cart-----------";
				for (int i = 0; i < items; i++)
				{
					cout << "\n"
						 << i + 1 << " " << foodCart[i] << " \n";
				}
				cout << "--------------------------\n";

				// food Receipt
				cout << "\n\n-----------BU MALL-----------";
				int t = 0;
				for (int i = 0; i < items; i++)
				{
					cout << "\n"
						 << i + 1 << " " << foodCart[i] << " : #" << foodPriceCart[i] << " \n";
					t += foodPriceCart[i];
				}
				VAT = 0.05 * t;
				cout << "Log : #" << t << endl;
				cout << "VAT : #" << VAT << endl;
				cout << "Total : #" << t + VAT << endl;
				cout << "--------------------------\n";
			}
			else
			{
				cout << "Error\n";
			}
		}

		break;

		// Accessory
	case 3:
		accessGranted = checkUser();
		cout << "Enter number of items you'll like to purchase: ";
		cin >> items;
		if (items > 3)
		{
			cout << "Items to be purchased should be less than or equal to 3\n";
		}
		else
		{
			if (accessGranted)
			{
				cout << "Welcome to the Accessory store\n";
				cout << "Items\t\tPrice\n";
				cout << "1. Cufflink - #2,000\n";
				cout << "2. Necklace - #3,500\n";
				cout << "3. Bracelet - #1,000\n";
				cout << "4. Watch - #2,000\n";
				cout << "5. Tie - #3,500\n";
				cout << "6. Ring - #10,000\n";
			}

			while (count < items)
			{

				cout << "Enter productID\n";
				cin >> itemChoice;
				if (itemChoice == 1)
				{
					accessoryCart[count] = "cufflink";
					accessoryPriceCart[count] = 2000;
					cout << "cufflink added to cart\n";
				}
				else if (itemChoice == 2)
				{
					accessoryCart[count] = "Necklace";
					accessoryPriceCart[count] = 3500;
					cout << "Necklace added to cart\n";
				}
				else if (itemChoice == 3)
				{
					accessoryCart[count] = "Bracelet";
					accessoryPriceCart[count] = 1000;
					cout << "Bracelet added to cart\n";
				}
				else if (itemChoice == 4)
				{
					accessoryCart[count] = "Watch";
					accessoryPriceCart[count] = 2000;
					cout << "Watch added to cart\n";
				}
				else if (itemChoice == 5)
				{
					accessoryCart[count] = "Tie";
					accessoryPriceCart[count] = 3500;
					cout << "Tie added to cart\n";
				}
				else if (itemChoice == 6)
				{
					accessoryCart[count] = "Ring";
					accessoryPriceCart[count] = 10000;
					cout << "Ring added to cart\n";
				}
				else
				{
					cout << "ID not found. \n";
				}
				count += 1;
			}
			// Accessory Cart
			cout << system("cls");
			cout << "\n-----------Items in your Accessory cart-----------";
			for (int i = 0; i < items; i++)
			{
				cout << "\n"
					 << i + 1 << " " << accessoryCart[i] << " \n";
			}
			cout << "--------------------------\n";

			// Accessory Receipt
			cout << "\n\n-----------BU MALL-----------";
			int t = 0;
			for (int i = 0; i < items; i++)
			{
				cout << "\n"
					 << i + 1 << " " << accessoryCart[i] << " : #" << accessoryPriceCart[i] << " \n";
				t += accessoryPriceCart[i];
			}
			VAT = 0.05 * t;
			cout << "Log : #" << t << endl;
			cout << "VAT : #" << VAT << endl;
			cout << "Total : #" << t + VAT << endl;
			cout << "--------------------------\n";
		}
		break;

		// Clothe store
	case 4:
		accessGranted = checkUser();
		if (accessGranted)
		{
			cout << "Welcome to the clothe store\n";
			cout << "Items\t\tPrice\n";
			cout << "Shirt - #2000\n";
			cout << "Suit - #3500\n";
			cout << "Jacket - #1000\n";
			cout << "Chinos - #2000\n";
			cout << "Sweater - #3500\n";
			cout << "Sport wear - #1000\n";
		}
		else
		{
			cout << "Error. \n";
		}
		break;

		// Book store
	case 5:
		accessGranted = checkUser();
		if (accessGranted)
		{
			cout << "Welcome to the Book store\n";
			cout << "Items\tPrice\n";
			cout << "Books - #1000\n";
			cout << "Magazine - #2500\n";
			cout << "Comics - #1500\n";
			cout << "Biro - #100\n";
		}
		else
		{

			cout << "Error. \n";
		}
		break;
	default:
		cout << "shop option not available.\n";
		break;
	}
	return 0;
}
