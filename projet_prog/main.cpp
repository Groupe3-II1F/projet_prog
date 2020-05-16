#include <iostream>
#include "Person.h"
#include "Adult.h"
#include "Child.h"
#include "Elderly.h"
#include <string.h>
#include <cstdlib>
#include<ctime>

//=================================================== Scenario 1 ================================================================
bool Q1_S1(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;


}
bool Q21_S1(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q22_S1(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q31_S1(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q32_S1(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q33_S1(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q41_S1(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q42_S1(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q43_S1(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q44_S1(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q51_S1(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q52_S1(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q53_S1(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q6_S1(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
//=================================================== Fin de Scenario 1 ================================================================


//=================================================== Scenario 2 ================================================================
bool Q1_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;


}
bool Q21_S2(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q22_S2(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q31_S2(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q32_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q33_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q34_S2(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q41_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q42_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q43_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q44_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q51_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q52_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q53_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
bool Q61_S2(int x)
{
	if (x == 1)

		return true;
	if (x == 2)

		return false;

}
bool Q62_S2(int x)
{
	if (x == 2)

		return true;
	if (x == 1)

		return false;

}
//=================================================== Fin de Scenario 2 ================================================================
using namespace std;
void about()
{
	system("cls");
	std::cout << "This mini-game is made to sensibilize people about the adequate measures to take in order to protect oneself against COVID19 \nThis project is realised by: " << std::endl << "Asma Ben Nasr" << std::endl << "Fayed Souilmi" << std::endl << "Wael Kort" << std::endl<<"Press C to return to the main menu"<<endl;
}
int main()
{
	//Variables 
	Person* p = NULL;
	int Scenario,age;
	int reponse;
	char choix;
	string nom, prenom;
	//=============================================== Main Menu ======================================================
mainhome:
	system("cls");
	std::cout << "\t\t\t\t\t\t\tC++ COVID19 GAME" << endl;
	std::cout << "\t\t\t\t_____________________________________________________________________" << endl;

	std::cout << "\n\n\n\t\t\t\t   __      __   ___  | |   ___    ___    _ __ ___     ___  " << endl;
	std::cout << "\t\t\t\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ " << endl;
	std::cout << "\t\t\t\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ " << endl;
	std::cout << "\t\t\t\t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| " << endl;
	std::cout << "\t\t\t\t_____________________________________________________________________" << endl;
	std::cout << "\t\t\t\t_____________________________________________________________________" << endl;
	std::cout << "\t\t\t\t\t\t  PROTECT YOURSELF FROM COVID 19 !!!!!    " << endl;
	std::cout << "\t\t\t\t_____________________________________________________________________" << endl;
	std::cout << "\t\t\t\t_____________________________________________________________________" << endl;
	std::cout << "\t\t\t\t> Press S to start the game" << endl;
	std::cout << "\t\t\t\t> press A for about            " << endl;
	std::cout << "\t\t\t\t> press Q to quit             " << endl;
	std::cout << "\t\t\t\t_____________________________________________________________________" << endl;
	
	//=============================================== Main Menu ======================================================
	std::cout << "\t\t\t\t>";
	std::cin >> choix;
	 if (toupper(choix) == 'A')
	{
		 about();
		 std::cin >> choix;
		 if (toupper(choix) == 'C')
		 {
			 goto mainhome;

		 }
	}
	else if (toupper(choix) == 'Q')
		exit(1);
	else if (toupper(choix) == 'S')
	{
		//=============================================== Menu ======================================================
		system("cls");
		std::cout << " ------------------  Welcome to C++ Program Stimulation Game --------------------------" << endl;
		std::cout << " Here are some tips you might want to know before playing:" << endl;
		std::cout << " -------------------------------------------------------------------------" << endl;
		std::cout << " >> there are multiple characters and the choices you'll make will affect your character's health" << endl;
		std::cout << " >> Your character's Vitality will be set to 100 , if it drops to 0 then your character has" << endl;
		std::cout << "    caught the Corona Virus and you will lose the game."<<endl;
		std::cout << " >>right answers will increase your character's Vitality, while false answers will decrease it." << endl;
		std::cout << " >> You will be given 2 options and you have to press 1 or 2 for the right option and then press ENTER ." << endl;
		std::cout << "!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!" << endl;
		std::cout << " Press Y  to start the game!" << endl;
		std::cout << " Press any other key to return to the main menu!" << endl;
		std::cout << "----------------------------------------------------------------------------------------" << endl;
		//=============================================== Menu ======================================================
		std::cin >> choix;
		if (toupper(choix) == 'Y')
		{
			goto home;
			
		}
		else
		{
			goto mainhome;
			system("cls");
		}
	home:
		system("cls");
		std::cout << "insert the age of your character :" << endl;
		do
			std::cin >> age;
		while ((age > 100) && (age < 0));
		std::cout << "insert your character's Name :" << endl;
		std::cin >> nom;
		std::cout << "insert your character's Surname :" << endl;
		std::cin >> prenom;

		if (age > 0 && age <= 18)
		{
			p = new Child(prenom, nom);
			std::cout <<"your character "<< p->getName() <<" "<< p->getSurname() << " is a Child" << endl;
		}
		if (age > 18 && age <= 45)
		{
			p = new Adult(prenom, nom);
			std::cout << "your character " << p->getName() << " " << p->getSurname() << "is an Adult" << endl;
		}
		if (age > 45 && age <= 100)
		{
			p = new Elderly(prenom, nom);
			std::cout << "your character " << p->getName() << " " << p->getSurname() << "is an Elder" << endl;
		}
		srand(time(NULL));
		Scenario = (rand() % 2) + 1;
		//=================================================== Code Scenario 1 ================================================================
		if (Scenario == 1)
		{
			system("cls");
			std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
			std::cout << "You are showing mild symptoms for Covid19.Do you: " << endl << " 1 - contact the authoroties to have you tested, stay homeand isolate yourself " << endl << " 2 - get out and tell yourself it is just flu" << endl;
			do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
		
			if (Q1_S1(reponse)) {
			
			niveau1:
				system("cls");
				p->addVitality();
				std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
				std::cout << "You are now self-isolating. Do you: " << endl << " 1 - isolate yourself in a separate room from family members" << endl << " 2 - stay with family members in the same room" << endl;
				do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
				if (Q21_S1(reponse))
				{
					system("cls");
					p->addVitality();
					std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
					std::cout << "You want to eat,Do you: " << endl << " 1-Get out and get your food " << endl << " 2-get your food delivered in front of your room and you go out to get it" << endl;
					do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
					if (Q31_S1(reponse))
					{
						system("cls");
						p->addVitality();
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you " << endl << " 1- eat in disposable cover " << endl << " 2 - in normal cover" << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q41_S1(reponse))
						{
							system("cls");
							p->addVitality();
							std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
							std::cout << "You are back to your room, Do you: " << endl << " 1-keep it well-ventilated  " << endl << " 2- keep the windows closed" << endl;
							do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
							if (Q51_S1(reponse))
							{
								p->addVitality();
								goto GameOver;
							}
							else
							{
								p->subVitality();
								if (p->getVitality() == 0)
								{
									goto lost;
								}
								else
								{
									goto GameOver;
								}
							}
						}
						else
						{
							system("cls");
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
							std::cout << "Do you: " << endl << " 1- allow other family members to use your cover " << endl << " 2-Only use it yourself" << endl;
							do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
							if (Q52_S1(reponse))
							{
								p->addVitality();
								goto GameOver;
							}
							else
							{
								p->subVitality();
								if (p->getVitality() == 0)
								{
									goto lost;
								}
								else
								{
									goto GameOver;
								}
							}
						}

					}
				}
				else
				{
					system("cls");
					p->subVitality();
					if (p->getVitality() == 0)
					{
						goto lost;
					}
					std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
					std::cout << "Do you " << endl << " 1- wear medical mask " << endl << " 2- not wear medical mask" << endl;
					do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
					if (Q32_S1(reponse))
					{
						system("cls");
						p->addVitality();
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you " << endl << " 1- touch your eyes then touch the furniture " << endl << " 2- not touch your eyes and constantly wash your hands with soap for 20 seconds" << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q42_S1(reponse))
						{
							p->addVitality();
							goto GameOver;
						}
						else
						{
							system("cls");
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							else
							{
								goto GameOver;
							}
						}

					}
					else
					{
						system("cls");
						p->subVitality();
						if (p->getVitality() == 0)
						{
							goto lost;
						}
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you: " << endl << " 1-touch your eyes , mouth and cough all over the furniture " << endl << " 2 - not touch your eyes and mouth, cough in your hand and constantly wash your hands with soap for 20 seconds" << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q43_S1(reponse))
						{
							p->addVitality();
							goto GameOver;
						}
						else
						{
							p->subVitality(); 
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							else
							{
								goto GameOver;
							}
						}
					}

				}
			}
			else
			{
				system("cls");
				p->subVitality();
				if (p->getVitality() == 0)
				{
					goto lost;
				}
				std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
				std::cout << "Do you 1-stay out and ignore your symptoms."<< endl << "2-Decide to go back home and self - isolate." << endl;
				do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
				if (Q22_S1(reponse)) 
				{
					goto niveau1;

				}
				else
				{
					system("cls");
					p->subVitality();
					if (p->getVitality() == 0)
					{
						goto lost;
					}
					std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
					std::cout << "You meet a person you know, Do you: " << endl <<"1- make physical contact with them" << endl << "2- wave at them from a far stay away from them" << endl;
					do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
					if (Q33_S1(reponse))
					{
						system("cls");
						p->addVitality();
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "you start thinking about going back home beacause you are afraid of getting sick do you " << endl << "1- Go back home and self-isolate" << endl<<"2- Go to the grocery store" << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q44_S1(reponse))
						{
							goto niveau1;
						}
						else
						{
							system("cls");
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
							std::cout << "You entered the grocery store do you: " << endl << "1- Go back home and self-isolate" << endl << "2- Touch many of the displayed ingredients with you hands" << endl;
							do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
							if (Q53_S1(reponse))
							{
								goto niveau1;
							}
							else
							{
								system("cls");
								p->subVitality();
								if (p->getVitality() == 0)
								{
									goto lost;
								}
								std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
								std::cout << "After touching the ingredients in the grocery store do you : " << endl << "1- use sanitizer" << endl << "2- keep touching the ingerdients without a sanitizer" << endl;
								do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
								if (Q6_S1(reponse))
								{
									p->addVitality();
									goto GameOver;
								}
								else
								{
									p->subVitality();
									if (p->getVitality() == 0)
									{
										goto lost;
									}
									else
							{
								p->subVitality();
								if (p->getVitality() == 0)
								{
									goto lost;
								}
								else
								{
									goto GameOver;
								}
							}
								}
							}

						}

					}
					else
					{
						system("cls");
						p->subVitality();
						if (p->getVitality() == 0)
						{
							goto lost;
						}
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "You entered the grocery store do you: " << endl << "1- Go back home and self-isolate" << endl << "2- Touch many of the displayed ingredients with you hands" << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q53_S1(reponse))
						{
							goto niveau1;
						}
						else
						{
							system("cls");
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
							std::cout << "After touching the ingredients in the grocery store do you : " << endl << "1- use sanitizer" << endl << "2- keep touching the ingerdients without a sanitizer" << endl;
							if (Q6_S1(reponse))
							{
								p->addVitality();
								goto GameOver;
							}
							else
							{
								p->subVitality();
								if (p->getVitality() == 0)
								{
									goto lost;
								}
								else
								{
									goto GameOver;
								}
							}
						}

					}

					
				}

			}

		}
		//=================================================== Fin Code Scenario 1 ================================================================
		//=================================================== Code Scenario 2 ================================================================
		if (Scenario == 2)
		{
			system("cls");
			std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
			std::cout << "You need to buy some food. What do you do?" << endl << "1- Go out and get them " << endl << "2- Buy them online" << endl;
			do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));

			if (Q1_S2(reponse)) {
			
				system("cls");
				p->addVitality();
				std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
				std::cout << " Would you : " << endl << " 1- pay online using some kind of online payment method." << endl << " 2- Pay the delivery man when you get your order" << endl;
				do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
				if (Q22_S2(reponse))
				{
					system("cls");
					p->addVitality();
					std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
					std::cout << "Do you : " << endl << " 1- take the delivery hand to hand " << endl << " 2- you ask him to leave it at the front door." << endl;
					do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
					if (Q33_S2(reponse))
					{
						p->addVitality();
						goto washhands;

					}
					else
					{
						p->subVitality();
						if (p->getVitality() == 0)
						{
							goto lost;
						}
						goto washhands;
					}
				}
				else
				{
					system("cls");
					p->subVitality();
					if (p->getVitality() == 0)
					{
						goto lost;
					}
					std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
					std::cout << "Your delivery is here, Do you : " << endl << " 1- leave the money for him at the front door " << endl << " 2 - Pay him hand to hand  " << endl;
					do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
					if (Q34_S2(reponse))
					{
						system("cls");
						p->addVitality();
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you : " << endl << " 1- leave the money without package. " << endl << " 2- Put the money in a plastic package." << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q42_S2(reponse))
						{
							p->addVitality();
							goto washhands;

						}
						else
						{
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							goto washhands;
						}
					}
					else
					{
						system("cls");
						p->subVitality();
						if (p->getVitality() == 0)
						{
							goto lost;
						}
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you : " << endl << " 1- give him the money without package. " << endl << " 2- Put themoney in a plastic package before handing it." << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q44_S2(reponse))
						{
							system("cls");
							p->addVitality();
							std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
							std::cout << "Do you : " << endl << " 1- wait for the change " << endl << " 2- Ask him to keep it" << endl;
							do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
							if (Q53_S2(reponse))
							{
								p->addVitality();
								goto washhands;
							}
							else
							{
								p->subVitality();
								if (p->getVitality() == 0)
								{
									goto lost;
								}
								goto washhands;
							}

						}
						else
						{
							system("cls");
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
							std::cout << "Do you : " << endl << " 1- wait for the change " << endl << " 2- Ask him to keep it" << endl;
							do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
							if (Q53_S2(reponse))
							{
								p->addVitality();
								goto washhands;
							}
							else
							{
								p->subVitality();
								if (p->getVitality() == 0)
								{
									goto lost;
								}
								goto washhands;
							}

						}
						
					}

				}

			}
		else
			{
		
		system("cls");
		p->subVitality();
		std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
		std::cout << " While Going out, which of the following things you decided to take with you :" << endl << " 1- Hand sanitizer,mask,credit card." << endl << " 2- Money" << endl;
		do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
		if (Q21_S2(reponse))
		{
			
			p->addVitality();
		question2:
			system("cls");
			std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
			std::cout << "You're going out would you rather : " << endl << " 1- walk " << endl << " 2-use public means of transport." << endl;
			do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
			if (Q31_S2(reponse))
			{
				
				p->addVitality();
			question3:
				system("cls");
				std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
				std::cout << "Would you rather buy : " << endl << " 1- fresh ingredients " << endl << " 2 - packaged food " << endl;
				do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
				if (Q41_S2(reponse))
				{
					system("cls");
					p->addVitality();
					std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
					std::cout << "You're back home, would you rather: " << endl << " 1- eat fresh salad with raw ingredients  " << endl << " 2- cooked meal." << endl;
					do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
					if (Q51_S2(reponse))
					{
						system("cls");
						p->addVitality();
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you : " << endl << " 1- heat the bread before eating  " << endl << " 2-  not heat the bread" << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q61_S2(reponse))
						{
							p->addVitality();
							goto GameOver;
						}
						else
						{
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							else
							{
								goto GameOver;
							}
						}

					}
					else
					{
						system("cls");
						p->subVitality();
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you : " << endl << " 1- heat the bread before eating  " << endl << " 2-  not heat the bread" << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q61_S2(reponse))
						{
							p->addVitality();
							goto GameOver;
						}
						else
						{
							p->subVitality();
							if (p->getVitality() == 0)
							{
								goto lost;
							}
							else
							{
								goto GameOver;
							}
						}
					}
				}
				else
				{
					system("cls");
					p->subVitality();
					if (p->getVitality() == 0)
					{
						goto lost;
					}
				washhands:
					system("cls");
					std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
					std::cout << "Do you: " << endl << " 1- wash your hands before unpacking " << endl << " 2- wash your hands after unpacking." << endl;
					do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
					if (Q52_S2(reponse))
					{
						system("cls");
						p->addVitality();
						std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
						std::cout << "Do you: " << endl << " 1- unpack your food and start eating right away " << endl << " 2- sanitize your food before eating." << endl;
						do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
						if (Q62_S2(reponse))
						{
							p->addVitality();
							goto GameOver;
						}
					}
					else
					{
						p->subVitality();
						if (p->getVitality() == 0)
						{
							goto lost;
						}
						else
						{
							goto GameOver;
						}
					}
				}

			}
			else
			{
				system("cls");
				p->subVitality();
				goto question3;
			}
		}
		else
		{
			system("cls");
			p->subVitality();
			if (p->getVitality() == 0)
			{
				goto lost;
			}
			std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
			std::cout << "Do you:  " << endl << " 1- Go to the supermarket " << endl << " 2 - Go to a local store  " << endl;
			do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
			if (Q32_S2(reponse))
			{
				system("cls");
				p->addVitality();
				std::cout << p->getName() << " " << p->getSurname() << " Vitality Points : " << p->getVitality() << endl;
				std::cout << "You're in the local sore, you found it crowded, would you rather " << endl << " 1- wait in the queue " << endl << " 2- wait outside" << endl;
				do  std::cin >> reponse; while((reponse != 1) && (reponse !=2));
				if (Q42_S2(reponse))
				{
					system("cls");
					p->addVitality();
					goto question3;

				}
				else
				{
					system("cls");
					p->subVitality();
					if (p->getVitality() == 0)
					{
						goto lost;
					}
					goto question3;
				}
			}
			else
			{
				p->subVitality();
				if (p->getVitality() == 0)
				{
					goto lost;
				}
				goto question2;
			}

		}

		}

			
		}
		//=================================================== Fin Code Scenario 1 ================================================================	
		
	}


GameOver:
	system("cls");
	std::cout << "Congratulations !! " << p->getName() << " " << p->getSurname() << " has survived the epedimic" << endl;
	std::cout << " " << endl;
	std::cout << "For more informations check https://www.who.int/emergencies/diseases/novel-coronavirus-2019"<<endl;
	std::cout << " " << endl;
	std::cout << "if you want to play again ? Y/N" << endl;
	std::cin >> choix;
	if (toupper(choix) == 'Y')
	{
		goto mainhome;
	}
	if (toupper(choix) == 'N')
	{
		exit(1);
	}
lost:
	system("cls");
	std::cout << "Oh !!!! your character got the Corona Virus you should've been more careful" << endl;
	std::cout << "these are some useful tips that will protect you from the virus :" << endl;
	std::cout << "--------------------------------------" << endl;
	std::cout << "STAY home as much as you can" << endl;
	std::cout << "KEEP a safe distance" << endl;
	std::cout << "WASH hands often" << endl;
	std::cout << "COVER your cough" << endl;
	std::cout << "SICK? Call ahead" << endl;
	std::cout << "For more informations check https://www.who.int/emergencies/diseases/novel-coronavirus-2019"<<endl;
	std::cout << "--------------------------------------" << endl;
	std::cout<<""<<endl;
	std::cout << " " << endl;
	std::cout << "if you want to play again ? Y/N" << endl;
	std::cout << " " << endl;
	std::cin >> choix;
	if (toupper(choix) == 'Y')
	{
		goto mainhome;
	}
	if (toupper(choix) == 'N')
	{
		exit(1);
	}
	
	
	return 0;
}