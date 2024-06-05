#include"admin.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cmath>

using namespace std;
string cname;
string pnumber;
string spnumber;
long balance;
long with;
int Refrigerators;
int Air_Conditioners;
int Microwave_oven;
int Iron;
int Washing_machines;
int Vacuum_cleaners;
int Coffee_machine;
int Electric_kettle;
int Vacuum_sealer;
int Water_heater;
int RefrigeratorsP;
int Air_ConditionersP;
int Microwave_ovenP;
int IronP;
int Washing_machinesP;
int Vacuum_cleanersP;
int Coffee_machineP;
int Electric_kettleP;
int Vacuum_sealerP;
int Water_heaterP;
int money;
long totalprice;
long stotalprice;

void admins::homes(){
	
}
void home::homes(){
	system("cls");
	cout<<"\n\n";
	load();
	int choice;
	system("color A");
	cout<<"\t\t _____________________"<<endl;
	cout<<"\t\t|                     |"<<endl;
	cout<<"\t\t|       Main menu     |"<<endl;
	cout<<"\t\t|_____________________|"<<endl;
	cout<<"\t\t|                     |"<<endl;
	cout<<"\t\t|                     |"<<endl;
	cout<<"\t\t|     1. Customer     |"<<endl;
	cout<<"\t\t|     2. Admin        |"<<endl;
	cout<<"\t\t|     3. Exit         |"<<endl;
	cout<<"\t\t|_____________________|"<<endl<<endl;
	cout<<"\t Enter your choise  : ";
	cin>>choice;
	switch(choice){
		case 1:
			appliances();
			break; 
			case 2:
				{
					system("cls");
					cout<<"\n\n";
					cout<<"\t Please enter your password : ";
					cin>>pass;
					infile.open("pass.txt");
					if(!infile){
						cout<<"Error opening file "<<endl;
					}
					while(infile>>passs){
						if(pass==passs){
					menus();
				}
						else{
							
							system("color 04");
					cout<<"Password is incorrect "<<endl;
					system("pause");
					homes();
				}
					break;
				}
				case 3:
					exit(0);
					break;
						default:
							system("color 04");
							cout<<"\t Enter the valid number "<<endl;
							system("pause");
							
							homes();
	}
	
}
}

void home::menus(){
	
		int ch;
		system("color A");
		system("cls");
		cout<<"\t\t _______________________________"<<endl;
		cout<<"\t\t|                               |"<<endl;
		cout<<"\t\t|             Admin             |"<<endl;
		cout<<"\t\t|_______________________________|"<<endl<<endl;
		cout<<"\t\t _______________________________"<<endl;
		cout<<"\t\t|                               |"<<endl;
		cout<<"\t\t|        1. Checkbalance        |"<<endl;
		cout<<"\t\t|        2. Withdrawal          |"<<endl;
		cout<<"\t\t|        3. Products            |"<<endl;
		cout<<"\t\t|        4. Change Password     |"<<endl;
		cout<<"\t\t|        5. See Record          | "<<endl;
		cout<<"\t\t|        6. Main menu           |"<<endl;
		cout<<"\t\t|_______________________________|"<<endl<<endl;
		cout<<"\t\tEnter your choise  : ";
		cin>>ch;
		switch(ch){
			case 1:
				checkbalance();
				break;
				case 2:
					checkwithdrawal();
					break;
						case 3:
							products();
							break;
							case 4:
								changepass();
								break;
								case 5:
									seeRecord();
									break;
								case 6:
									homes();
									break;
									default:
										system("color 04");
										cout<<"Enter the valid input "<<endl;
										system("pause");
										
										menus();
		}
	}
		


void home::save(){
	outfile.open("online.txt");
	if(!outfile){
		cout<<"Error opening file "<<endl;
		balance = 0;
        Refrigerators = 0;
        Air_Conditioners = 0;
        Microwave_oven = 0;
        Iron = 0;
        Washing_machines = 0;
        Vacuum_cleaners = 0;
        Coffee_machine = 0;
        Electric_kettle = 0;
        Vacuum_sealer = 0;
        Water_heater = 0;
	}
	outfile<<balance<<endl;
	outfile<<with<<endl;
	outfile<<Refrigerators<<endl;
	outfile<<RefrigeratorsP<<endl;
	outfile<<Air_Conditioners<<endl;
	outfile<<Air_ConditionersP<<endl;
	outfile<<Microwave_oven<<endl;
	outfile<<Microwave_ovenP<<endl;
	outfile<<Iron<<endl;
	outfile<<IronP<<endl;
	outfile<<Washing_machines<<endl;
	outfile<<Washing_machinesP<<endl;
	outfile<<Vacuum_cleaners<<endl;
	outfile<<Vacuum_cleanersP<<endl;
	outfile<<Coffee_machine<<endl;
	outfile<<Coffee_machineP<<endl;
	outfile<<Electric_kettle<<endl;
	outfile<<Electric_kettleP<<endl;
	outfile<<Vacuum_sealer<<endl;
	outfile<<Vacuum_sealerP<<endl;
	outfile<<Water_heater<<endl;
	outfile<<Water_heaterP<<endl;
	outfile.close();
}
void home::load(){
	infile.open("online.txt");
	if(!infile){
		balance = 0;
        Refrigerators = 0;
        Air_Conditioners = 0;
        Microwave_oven = 0;
        Iron = 0;
        Washing_machines = 0;
        Vacuum_cleaners = 0;
        Coffee_machine = 0;
        Electric_kettle = 0;
        Vacuum_sealer = 0;
        Water_heater = 0;
	}
	infile>>balance;
	infile>>with;
	infile>>Refrigerators;
	infile>>RefrigeratorsP;
	infile>>Air_Conditioners;
	infile>>Air_ConditionersP;
	infile>>Microwave_oven;
	infile>>Microwave_ovenP;
	infile>>Iron;
	infile>>IronP;
	infile>>Washing_machines;
	infile>>Washing_machinesP;
	infile>>Vacuum_cleaners;
	infile>>Vacuum_cleanersP;
	infile>>Coffee_machine;
	infile>>Coffee_machineP;
	infile>>Electric_kettle;
	infile>>Electric_kettleP;
	infile>>Vacuum_sealer;
	infile>>Vacuum_sealerP;
	infile>>Water_heater;
	infile>>Water_heaterP;
	infile.close();
}
void home::checkbalance(){
	system("cls");
	cout<<"\n\n";

	cout<<"\t Your balance is = "<<balance<<"\n\n";
	cout<<"\t Your Total Withdrawl = "<<with<<endl<<endl;
	save();
	system("pause");
	menus();
}
void home::checkwithdrawal(){
	system("cls");
	cout<<"\n\n";
	int a;
	cout<<"\t Enter the amount to withdrawal : ";
	cin>>withdrawal;
	if(balance<withdrawal){
		system("color 04");
		cout<<"\t Not enough balance "<<endl;
		system("pause");
		menus();
	}
	else{
		balance=balance-withdrawal;
			with+=withdrawal;
		cout<<"\t Balance withdrawal successfull "<<endl;
		save();
		system("pause");
		menus();
	}
}
void home::changepass(){
	system("cls");
	cout<<"\n\n";
	char ch;
	cout<<"\t Would you change password (y/n) "<<endl;
	cout<<"\t ";
	cin>>ch;
	if(ch=='y'||ch=='Y'){
		label15:
		cout<<"\t Enter your password : ";
		cin>>pass;
			if(pass.length()>8){
				cout<<"Enter atleast 8 digit"<<endl;
				goto label15;
		}
		bool hasdigit=false;
		for(size_t i=0;i<pass.length();i++){
	    if(isdigit(pass[i])){
	        hasdigit=true;
	        break;
	    }
	}
		if(!hasdigit){
			cout<<"\t Password not containing integer "<<endl;
			goto label15;
		}	
		outfile.open("pass.txt");
		outfile<<pass<<endl;
		outfile.close();
		menus();
}
	
		else{
				menus();
			}
}
void home::seeRecord(){
	system("cls");
	cout << "\n\n";
	ifstream recordFile("record.txt");
	if(!recordFile) {
		cout<<"Error opening file"<<endl;
	}
	else {
		string line;
		while(getline(recordFile,line)){
			cout<<line<<endl;
		}
		recordFile.close();
	}
	system("pause");
	menus();
}

void home::products(){
	system("cls");
	cout<<"\n\n";
	system("color A");
	int quan;
	int chos;
	int cho;
	char zah;
	cout<<"\t\t _____________________________"<<endl;
	cout<<"\t\t|                             |"<<endl;
	cout<<"\t\t|       Product History       |"<<endl;
	cout<<"\t\t|_____________________________|"<<endl<<endl;
	cout<<"\t\t _____________________________"<<endl;
	cout<<"\t\t|                             |"<<endl;
	cout<<"\t\t| 1. Add products quantity    |"<<endl;
	cout<<"\t\t| 2. See products quantity    |"<<endl;
	cout<<"\t\t| 3. Admin                    |"<<endl;
	cout<<"\t\t|_____________________________|"<<endl<<endl;
	cout<<"\t Enter your choise  : ";
	cin>>cho;
	if(cho==1){
	
		system("cls");
		cout<<"\n\n";
		cout<<"\t Select which product would you like to add "<<endl<<endl;
		cout<<"\t\t _____________________________"<<endl;
		cout<<"\t\t|                             |"<<endl;
		cout<<"\t\t| 1. Refrigerators            |"<<endl;
		cout<<"\t\t| 2. Air Conditioners         |"<<endl;
		cout<<"\t\t| 3. Microwave_oven           |"<<endl;
		cout<<"\t\t| 4. Iron                     |"<<endl;
		cout<<"\t\t| 5. Washing_machines         |"<<endl;
		cout<<"\t\t| 6. Vacuum_cleaners          |"<<endl;
		cout<<"\t\t| 7. Coffee_machine           |"<<endl;
		cout<<"\t\t| 8. Electric_kettle          |"<<endl;
		cout<<"\t\t| 9. Vacuum_sealer            |"<<endl;
		cout<<"\t\t| 10. Water_heater            |"<<endl;
		cout<<"\t\t|_____________________________|"<<endl<<endl;
		cout<<"\t\t Enter your choise :";
		cin>>chos;
		if(chos==1){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Refrigerators "<<endl;
			cout<<"\t ";
			cin>>quan;
			Refrigerators+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price Refrigerators"<<endl;
			cout<<"\t ";
			cin>>RefrigeratorsP;
		}
			save();
		products();
			}
		else if(chos==2){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Air Conditioners "<<endl;
			cout<<"\t ";
			cin>>quan;
			Air_Conditioners+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Air_ConditionersP;
		}
			save();
			products();
		}
		else if(chos==3){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Microwave_oven "<<endl;
			cout<<"\t ";
			cin>>quan;
			Microwave_oven+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Microwave_ovenP;
		}
			save();
		products();
		}
		else if(chos==4){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Iron "<<endl;
			cout<<"\t ";
			cin>>quan;
			Iron+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>IronP;
		}
			save();
			products();
		}
		else if(chos==5){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Washing_machines "<<endl;
			cout<<"\t ";
			cin>>quan;
			Washing_machines+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Washing_machinesP;
		}
			save();
		products();
		}
		else if(chos==6){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Vacuum_cleaners "<<endl;
			cout<<"\t ";
			cin>>quan;
			Vacuum_cleaners+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Vacuum_cleanersP;
		}
			save();
			products();
		}
		else if(chos==7){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Coffee_machine "<<endl;
			cout<<"\t ";
			cin>>quan;
			Coffee_machine+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Coffee_machineP;
		}
			save();
			products();
		}
		else if(chos==8){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Electric_kettle "<<endl;
			cout<<"\t ";
			cin>>quan;
			Electric_kettle+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Electric_kettleP;
		}
			save();
		products();
		}
		else if(chos==9){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Vacuum_sealer "<<endl;
			cout<<"\t ";
			cin>>quan;
			Vacuum_sealer+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Vacuum_sealerP;
		}
			save();
			products();
		}
		else if(chos==10){
			system("cls");
			cout<<"\n\n";
			cout<<"\t Add Water_heater "<<endl;
			cout<<"\t ";
			cin>>quan;
			Water_heater+=quan;
			cout<<"\t Would you like to enter the price (y/n) "<<endl;
			cout<<"\t ";
			cin>>zah;
			if(zah=='y'||zah=='Y'){
			cout<<"\t Enter the price "<<endl;
			cout<<"\t ";
			cin>>Water_heaterP;
		}
			save();
			products();
		}
		else{
			system("color 04");
			cout<<"Enter the valid input "<<endl;
			system("pause");
		
			products();
		}
	}
	else if(cho==2){
		system("cls");
		
		cout<<"\n\n";
		cout<<"\t\t ______________________________________________________________"<<endl;
		cout<<"\t\t|                           |                 |                |"<<endl;
		cout<<"\t\t|          Items            |    Quantity     |      Price     |"<<endl;
		cout<<"\t\t|___________________________|_________________|________________|"<<endl;
		cout<<"\t\t|                           |                 |                |"<<endl;
		cout<<"\t\t| present Refrigerators     |"<<"        "<<Refrigerators<<"       |"<<"      "<<RefrigeratorsP<<"     |"<<endl;
		cout<<"\t\t| present Air_Conditioners  |"<<"        "<<Air_Conditioners<<"       |"<<"      "<<Air_ConditionersP<<"     |"<<endl;
		cout<<"\t\t| present Microwave_oven    |"<<"        "<<Microwave_oven<<"       |"<<"      "<<Microwave_ovenP<<"     |"<<endl;
		cout<<"\t\t| present Iron              |"<<"        "<<Iron<<"       |"<<"      "<<IronP<<"      |"<<endl;
		cout<<"\t\t| present Washing_machines  |"<<"        "<<Washing_machines<<"       |"<<"      "<<Washing_machinesP<<"     |"<<endl;
		cout<<"\t\t| present Vacuum_cleaners   |"<<"        "<<Vacuum_cleaners<<"       |"<<"      "<<Vacuum_cleanersP<<"     |"<<endl;
		cout<<"\t\t| present Coffee_machine    |"<<"        "<<Coffee_machine<<"       |"<<"      "<<Coffee_machineP<<"      |"<<endl;
		cout<<"\t\t| present Electric_kettle   |"<<"        "<<Electric_kettle<<"       |"<<"      "<<Electric_kettleP<<"      |"<<endl;
		cout<<"\t\t| present Vacuum_sealer     |"<<"        "<<Vacuum_sealer<<"       |"<<"      "<<Vacuum_sealerP<<"     |"<<endl;
		cout<<"\t\t| present Water_heater      |"<<"        "<<Water_heater<<"       |"<<"      "<<Water_heaterP<<"     |"<<endl;
		cout<<"\t\t|___________________________|_________________|________________|"<<endl<<endl;
		system("pause");
		products();
	}
	else if(cho == 3){
		menus();
	}
	else{
		system("color 04");
		cout<<"Enter the valid input "<<endl;
		system("pause");
		products();
	
	}
}
void home::appliances(){
	system("cls");
	load();
	cout<<"\n\n";
	system("color A");
	int choi;
	char cha;
	cout<<"\t\t\t\t _________________________________________"<<endl;
	cout<<"\t\t\t\t|                                         |"<<endl;
	cout<<"\t\t\t\t|       Wellcome To Online Shopping       |"<<endl;
	cout<<"\t\t\t\t|_________________________________________|"<<endl<<endl;
	cout<<"\t\t __________________________"<<endl;
	cout<<"\t\t|                          |"<<endl;
	cout<<"\t\t| 1.Refrigerators          |"<<endl;
	cout<<"\t\t| 2.Air Conditioners       |"<<endl;
	cout<<"\t\t| 3.Microwave_oven         |"<<endl;
	cout<<"\t\t| 4.Iron                   |"<<endl;
	cout<<"\t\t| 5.Washing_machines       |"<<endl;
	cout<<"\t\t| 6.Vacuum_cleaners        |"<<endl;
	cout<<"\t\t| 7.Coffee_machine         |"<<endl;
	cout<<"\t\t| 8.Electric_kettle        |"<<endl;
	cout<<"\t\t| 9.Vacuum_sealer          |"<<endl;
	cout<<"\t\t| 10.Water_heater          |"<<endl;
	cout<<"\t\t| 11.Mainmenu              |"<<endl;
	cout<<"\t\t| 12.Exit                  |"<<endl;
	cout<<"\t\t|__________________________|"<<endl<<endl;
	cout<<"\t Enter your choise  : ";
	cin>>choi;
	if(choi==1){
		system("cls");
		cout<<"\n\n";
		RefrigeratorsP;
		
		cout<<"\t you select refrigerator "<<endl<<endl;
		cout<<"\t Price of refrigerator = "<<RefrigeratorsP<<endl;
		cout<<"\t Enter the quantity of refrigerator "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Refrigerators>quantity){
		cout<<"\t Would you buy refrigerator (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
			totalprice=RefrigeratorsP*quantity;
		if(cha=='y'||cha=='Y'){
			cout<<"\t Total price is = "<<totalprice<<endl;
			label1:
			system("color A");	
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				system("pause");
				goto label1;
				appliances();
			}
			else{
				balance+=totalprice;
				Refrigerators-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
				cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Refrigerator "<<endl;
				cout<<" \t\t   Unit Price    : "<<RefrigeratorsP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Refrigerators"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<RefrigeratorsP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
	}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==2){
		system("cls");
		cout<<"\n\n";
		Air_ConditionersP;
		cout<<"\t you select Air Conditioners "<<endl<<endl;
		cout<<"\t Price of Air Conditioners = "<<Air_ConditionersP<<endl;
		cout<<"\t Enter the quantity of Air Conditioners "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Air_Conditioners>quantity){
		cout<<"\t Would you buy Air Conditioners (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Air_ConditionersP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label2:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label2;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Air_Conditioners-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
				cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Air Conditioner "<<endl;
				cout<<" \t\t   Unit Price    : "<<Air_ConditionersP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Air Conditioners"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Air_ConditionersP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==3){
		system("cls");
		cout<<"\n\n";
		Microwave_ovenP;
		cout<<"\t you select Microwave oven "<<endl<<endl;
		cout<<"\t Price of Microwave oven = "<<Microwave_ovenP<<endl;
		cout<<"\t Enter the quantity of Microwave oven "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Microwave_oven>quantity){
		cout<<"\t Would you buy Microwave oven (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Microwave_ovenP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label3:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label3;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Microwave_oven-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
				cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Microwave Oven "<<endl;
				cout<<" \t\t   Unit Price    : "<<Microwave_ovenP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Microwave Oven"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Microwave_ovenP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();		
	}
	}
	else if(choi==4){
		system("cls");
		cout<<"\n\n";
		IronP;
		cout<<"\t you select Iron "<<endl<<endl;
		cout<<"\t Price of Iron = "<<IronP<<endl;
		cout<<"\t Enter the quantity of Iron "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Iron>quantity){
		cout<<"\t Would you buy Iron (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=IronP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label4:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label4;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Iron-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
				cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Iron "<<endl;
				cout<<" \t\t   Unit Price    : "<<IronP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Irons"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<IronP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==5){
		system("cls");
		cout<<"\n\n";
		Washing_machinesP;
		cout<<"\t you select Washing machines "<<endl<<endl;
		cout<<"\t Price of Washing machines = "<<Washing_machinesP<<endl;
		cout<<"\t Enter the quantity of Washing machines "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Washing_machines>quantity){
		cout<<"\t Would you buy Washing machines (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Washing_machinesP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label5:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label5;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Washing_machines-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
				cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Washing Machines "<<endl;
				cout<<" \t\t   Unit Price    : "<<Washing_machinesP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Washing Machines"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Washing_machinesP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}

	else if(choi==6){
		system("cls");
		cout<<"\n\n";
		Vacuum_cleanersP;
		cout<<"\t you select Vacuum cleaners "<<endl<<endl;
		cout<<"\t Price of Vacuum cleaners = "<<Vacuum_cleanersP<<endl;
		cout<<"\t Enter the quantity of Vacuum cleaners "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Vacuum_cleaners>quantity){
		cout<<"\t Would you buy Vacuum cleaners (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Vacuum_cleanersP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label6:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label6;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Vacuum_cleaners-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
				cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Vacuum Cleaners "<<endl;
				cout<<" \t\t   Unit Price    : "<<Vacuum_cleanersP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Vacuum Cleaners"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Vacuum_cleanersP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==7){
		system("cls");
		cout<<"\n\n";
		Coffee_machineP;
		cout<<"\t you select Coffee machine "<<endl<<endl;
		cout<<"\t Price of Coffee machine = "<<Coffee_machineP<<endl;
		cout<<"\t Enter the quantity of Coffee machine "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Coffee_machine>quantity){
		cout<<"\t Would you buy Coffee machine (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Coffee_machineP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label7:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label7;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Coffee_machine-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
			    cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Coffee machine "<<endl;
				cout<<" \t\t   Unit Price    : "<<Coffee_machineP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Coffee machine"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Coffee_machineP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==8){
		system("cls");
		cout<<"\n\n";
		Electric_kettleP;
		cout<<"\t you select Electric kettle "<<endl<<endl;
		cout<<"\t Price of Electric kettle = "<<Electric_kettleP<<endl;
		cout<<"\t Enter the quantity of Electric kettle "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Electric_kettle>quantity){
		cout<<"\t Would you buy Electric kettle (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Electric_kettleP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label8:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label8;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Electric_kettle-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
			cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Electric kettle "<<endl;
				cout<<" \t\t   Unit Price    : "<<Electric_kettleP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Electric kettle"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Electric_kettleP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==9){
		system("cls");
		cout<<"\n\n";
		Vacuum_sealerP;
		cout<<"\t you select Vacuum sealer "<<endl<<endl;
		cout<<"\t Price of Vacuum sealer = "<<Vacuum_sealerP<<endl;
		cout<<"\t Enter the quantity of Vacuum sealer "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Vacuum_sealer>quantity){
		cout<<"\t Would you buy Vacuum sealer (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Vacuum_sealerP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label9:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label9;
				appliances();
			}
			else{
				balance+=totalprice;
				Vacuum_sealer-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
			cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Vacuum sealer "<<endl;
				cout<<" \t\t   Unit Price    : "<<Vacuum_sealerP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Vacuum sealer"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Vacuum_sealerP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==10){
		system("cls");
		cout<<"\n\n";
		Water_heaterP;
		cout<<"\t you select Water heater "<<endl<<endl;
		cout<<"\t Price of Water heater = "<<Water_heaterP<<endl;
		cout<<"\t Enter the quantity of Water heater "<<endl;
		cout<<"\t ";
		cin>>quantity;
		if(Water_heater>quantity){
		cout<<"\t Would you buy Water heater (y/n) "<<endl;
		cout<<"\t ";
		cin>>cha;
		if(cha=='y'||cha=='Y'){
			totalprice=Water_heaterP*quantity;
			cout<<"\t Total price is = "<<totalprice<<endl;
			label10:
			system("color A");
			cout<<"\t Enter the cash : ";
			cin>>money;
			if(money<totalprice){
				system("color 04");
				cout<<"\t Again enter the full cash "<<endl;
				goto label10;
				system("pause");
				appliances();
			}
			else{
				balance+=totalprice;
				Water_heater-=quantity;
				retur = money-totalprice;
				cout<<"\t Return cash = "<<retur<<endl;
				cout<<"\t Please Enter your name : ";
				cin>>cname;
				cout<<"\t Enter your phone number : ";
				cin>>pnumber;
				if(pnumber.length()<11){
					cout<<"\t phone number too short "<<endl;
					system("pause");
					homes();
				}
				else{
				system("cls");
				cout<<"\n\n\t\t\t\t Receipt"<<endl;
	    		cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \t\t   Customer Name : "<<cname<<endl;				
				cout<<" \t\t   Contact Info  : "<<pnumber<<endl;
				cout<<" \t\t   Item Name     : Water heater "<<endl;
				cout<<" \t\t   Unit Price    : "<<Water_heaterP<<endl;
				cout<<" \t\t   Quantity      : "<<quantity<<endl;
				cout<<" \t\t   Total Price   : "<<totalprice<<endl;
				cout<<" \t\t   Payment       : "<<money<<endl;
				cout<<" \t\t   Return        : "<<retur <<endl;
				cout<<" \t\t ___________________________________"<<endl<<endl;
				cout<<" \tThanks for visiting !"<<endl<<endl;
				
				system("pause");
				ofile.open("record.txt",ios::app);
				if(!ifile){
					cout<<"\t Error opening file "<<endl;
					homes();
				}
				ofile<<"						Water heater"<<endl;
				ofile<<" Customer Name : "<<cname<<endl;	
				ofile<<" Phone number  : "<<pnumber<<endl;
				ofile<<" Unit Price    : "<<Water_heaterP<<endl;
				ofile<<" Quantity      : "<<quantity<<endl;
				ofile<<" Total Price   : "<<totalprice<<endl;
				ofile<<" Payment       : "<<money<<endl;
				ofile<<" Return        : "<<retur<<endl<<endl;
				ofile.close();
				appliances();
			}
		}
		}
		else{
			cout<<"\t you want to purchase another item "<<endl;
			cout<<"\t ";
			cin>>cha;
			if(cha=='y'||cha=='Y'){
				appliances();
			}
			else{
				exit(0);
			}
		}
	}
	else{
		system("color 04");
		cout<<"\t not avalible that quantity "<<endl;
		system("pause");
		appliances();
	}
	}
	else if(choi==11){
		system("cls");
		save();
		homes();
	}
	else if(choi==12){
		save();
		exit(0);
	}
	else{
		cout<<"\n\n";
		system("color 04");
		cout<<"\t Enter the valid input "<<endl;
		system("pause");
		appliances();
	}
}
