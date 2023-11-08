// Trading_Software.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stddef.h>

using namespace std;

int main()
{
    char start;
    float shop(void);
    char choice;

    startL:
        cout << "Please Press H to start shopping for home appliances" << endl;
        start:
            cin >> start;

            if (start == 'h' || start == 'H')
            {
                float total = shop();
                time_t t = time(NULL);
                tm* tPtr = localtime(&t);

                cout << "Bill Date : ";
                cout << tPtr->tm_mday << "/";
                cout << 1 + tPtr->tm_mon << "/";
                cout << 1900 + tPtr->tm_year << endl;
                cout << "Bill time :" << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;
                cout << "Total bill amount :" << total << endl;

                if (total > 50000 & 100000)
                {
                    total = total - (0.05 * total);
                    cout << "Total Discount : 5%" << endl;
                }

                else if (total > 100000 & 125000)
                {
                    total = total - (0.10 * total);
                    cout << "Total Discount :10%" << endl;
                }

                else if (total > 125000 & 150000)
                {
                    total = total - (02.5 * total);
                    cout << "Total Discount :25%" << endl;
                }

                else if (total > 150000)
                {
                    total = total - (0.5 * total);
                    cout << "Total Discount :50%" << endl;
                }


                cout << "Total bill amount is : " << total << endl;
                Again:
                    cout << "Do you wamt shopping again y or n" << endl;
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y')
                    {
                        goto startL;
                    }

                    else if (choice == 'n' || choice == 'N') 
                    {
                        cout << " Thanks for the shopping";
                    }

                    else
                    {
                        cout << " You have entered the wrong option, please press H" << endl;
                        goto Again;
                    }
            }  

            else
            {
                cout << " You have entered the wrong option, please press H" << endl;
                goto start;
            }

            float shop()
            {
            shop:
                char choice;
                char product;
                int quatity;
                float bill = 0;
                itemLevel:
                    cout << "******Welcome******" << endl;
                    cout << "_____Please followthe Instructions____" << endl;
                    cout << "| 1) Please enter r to order Refrigerator" << endl;
                    cout << "| 2) Please enter w to order washing machine" << endl;
                    cout << "| 3) Please enter t to order Television" << endl;
                    cout << "| 4) Please enter m to order Microwaver" << endl;
                    cout << "| 5) Please enter a to order Air condiotioner" << endl;
                    cin >> choice;


                    if (choice == 'r' || choice == 'R' || choice == 'w' || choice == 'W' || choice == 't' || choice == 'T' || choice == 'm' || choice == 'M') {
                        if (choice == 'r' || choice == "R")
                        {
                            cout << "____Refrigerator details _____" << endl;
                            cout << "| 1) Whirlpool => Price : 40000 |" << endl;
                            cout << "| 2) Samsung => Price : 25000 |" << endl;
                            cout << "| 3) Haier => Price : 20000 |" << endl;
                            cout << "| 4) Voltas => Price : 18000 |" << endl;
                            cout << "| 5) Godrej => Price : 30000 |" << endl;
                            cout << "| 6) Panasonic => Price : 35000 |" << endl;


                            cout << "please enter your choice" << endl;
                            cin >> product;

                            if (product == '1') {
                                cout << "Please enter the quantity of the product" << endl;
                                cin >> quantity;
                                bill = bill + quantity * 40000;
                            }

                            else if (product == '2') {
                                cout << "Please enter the quantity of the product" << endl;
                                cin >> quantity;
                                bill = bill + quantity * 20000;
                            }
                            else if (product == '3') {
                                cout << "Please enter the quantity of the product" << endl;
                                cin >> quantity;
                                bill = bill + quantity * 20000;
                            }
                            else if (product == '4') {
                                cout << "Please enter the quantity of the product" << endl;
                                cin >> quantity;
                                bill = bill + quantity * 18000;
                            }
                            else if (product == '5') {
                                cout << "Please enter the quantity of the product" << endl;
                                cin >> quantity;
                                bill = bill + quantity * 30000;
                            }
                            else if (product == '6') {
                                cout << "Please enter the quantity of the product" << endl;
                                cin >> quantity;
                                bill = bill + quantity*35000;
                            }
                            else {
                                cout << "You have entered the wrong quantity" << endl;
                                goto refrigerator;

                            }
                        }


                        if (choice == 'w' || choice == 'W') {
                            cout << "____Washing machine details _____" << endl;
                            cout << "| 1) Bosch => Price : 40000 |" << endl;
                            cout << "| 2) LG => Price : 25000 |" << endl;
                            cout << "| 3) IFB => Price : 20000 |" << endl;
                            cout << "| 4) Haier => Price : 18000 |" << endl;
                            cout << "| 5) Godrej => Price : 30000 |" << endl;
                            cout << "| 6) Panasonic => Price : 35000 |" << endl;
                        }

                            cout << "please enter your choice" << endl;
                            cin >> product;

                        if (product == '1') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 40000;
                        }

                        else if (product == '2') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '3') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '4') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 18000;
                        }
                        else if (product == '5') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 30000;
                        }
                        else if (product == '6') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity; 35000;
                        }
                        else {
                            cout << "You have entered the wrong quantity" << endl;
                            goto refrigerator;

                        }

                        if (choice == 't' || choice == "T") {
                            cout << "____Television details _____" << endl;
                            cout << "| 1) Panasonic => Price : 40000 |" << endl;
                            cout << "| 2) LG => Price : 25000 |" << endl;
                            cout << "| 3) Samsung => Price : 20000 |" << endl;
                            cout << "| 4) Apple => Price : 18000 |" << endl;
                            cout << "| 5) Huawei => Price : 30000 |" << endl;
                            cout << "| 6) Sony => Price : 35000 |" << endl;
                        }

                            cout << "please enter your choice" << endl;
                            cin >> product;

                        if (product == '1') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 40000;
                        }

                        else if (product == '2') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '3') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '4') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 18000;
                        }
                        else if (product == '5') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 30000;
                        }
                        else if (product == '6') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity; 35000;
                        }
                        else {
                            cout << "You have entered the wrong quantity" << endl;
                            goto refrigerator;
                        }



                        if (choice == 'm' || choice == "M") {
                            cout << "____Microwave details _____" << endl;
                            cout << "| 1) Bosch => Price : 40000 |" << endl;
                            cout << "| 2) LG => Price : 25000 |" << endl;
                            cout << "| 3) IFB => Price : 20000 |" << endl;
                            cout << "| 4) Haier => Price : 18000 |" << endl;
                            cout << "| 5) Godrej => Price : 30000 |" << endl;
                            cout << "| 6) Panasonic => Price : 35000 |" << endl;
                        }

                            cout << "please enter your choice" << endl;
                            cin >> product;

                        if (product == '1') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 40000;
                        }

                        else if (product == '2') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '3') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '4') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 18000;
                        }
                        else if (product == '5') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 30000;
                        }
                        else if (product == '6') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity; 35000;
                        }
                        else {
                            cout << "You have entered the wrong quantity" << endl;
                            goto refrigerator;
                        }

                        if (choice == 'A' || choice == "a") {
                            cout << "____Air Conditioner details _____" << endl;
                            cout << "| 1) Sony => Price : 40000 |" << endl;
                            cout << "| 2) Apple => Price : 25000 |" << endl;
                            cout << "| 3) Panasonic => Price : 20000 |" << endl;
                            cout << "| 4) Samsung => Price : 18000 |" << endl;
                            cout << "| 5) LG => Price : 30000 |" << endl;
                            cout << "| 6) Asus => Price : 35000 |" << endl;
                        }

                            cout << "please enter your choice" << endl;
                            cin >> product;

                        if (product == '1') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 40000;
                        }

                        else if (product == '2') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '3') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 20000;
                        }
                        else if (product == '4') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 18000;
                        }
                        else if (product == '5') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity;
                            bill = bill + quantity * 30000;
                        }
                        else if (product == '6') {
                            cout << "Please enter the quantity of the product" << endl;
                            cin >> quantity; 35000;
                        }
                        else {
                            cout << "You have entered the wrong quantity" << endl;
                            goto refrigerator;
                        }


                    }
                    else {
                        cout << "You have entered the wrong option, please try again! " << endl;
                        goto shop;
                    }
            }

                        

                    



    return 0;
}


