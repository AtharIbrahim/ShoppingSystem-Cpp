#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;
class admin{
	protected:
		long withdrawal;
		long price;
		int quantity;
		string pass;
		string passs;
		string spass;
		ifstream infile;
		ofstream outfile;
		ifstream ifile;
		ofstream ofile;
		int money;
		int retur;
		public:
		virtual void menus()=0;

};
class admins{
	public:
		virtual void homes();
};
class home:public admin,public admins{
	public:
		void homes();
		void menus();
		void report();
		void checkbalance();
		void checkwithdrawal();
		void products();
		void changepass();
		void appliances();
		void seeRecord();
		void save();
		void load();      
		void record();
};
