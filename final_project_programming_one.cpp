#include <iostream>
//#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	//string usernameR[1];
	//string usernameF[1];
	/*ifstream reader("username.txt");
	reader >> usernameF[0];
	reader.close();
	cout << "please enter your username " << endl;
	cin >> usernameR[0];
	if (usernameF==usernameR)
	{
		cout << "correct username ";
	}
	*/
	string usernameR[1];//R for reader from user 
	string passwordR[1];
	string usernameF[50];//F readed from file
	string passwordF[50];
	string usernameW[1];//W writed to the file
	string passwordW[1];
	float balance[50];
	int a, b, c, d, n, nb, e, k,nn;//c for number of digits e for code readed from file d for code entered   nb for number of code in the file
	int arrR[24];
	float g;
	//string x;
	ifstream inFile;
	ofstream outFile;
	//ifstream reader("checkbanker.txt");
	//ofstream writer("checkbanker.txt");
	//C:\Users\User\source\repos\final_project_programming_one\final_project_programming_one
	inFile.open("username.txt");
	outFile.open("username.txt",ios::app);//ios::app to append in the file not to replace the file trunc to empty the file
	//writer.open("checkbanker.txt");
	//reader.open("checkbanker.txt");

	
	if (!inFile) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}
	/*for (int i = 0; i < 50; i++)
	{
		inFile >> usernameF[i];
		inFile >> passwordF[i];
		inFile >> balance[i];

	}*/	
	
	do
	{
		inFile >> n;
		for (int i = 0; i < 51; i++)
		{
			inFile >> usernameF[i];
			inFile >> passwordF[i];
			inFile >> balance[i];

		}

	
	   cout << "1 sign up " << endl;
	   cout << "2 sign in " << endl;
	   cin >> a;

	   while (a != 1 && a != 2)
	   {
		   system("cls");
		  cout << "please make sure to choose the right option " << endl;
		  cout << "1 sign up " << endl;
		  cout << "2 sign in " << endl;
		  cin >> a;
	   }
	   if (a==1)
	   {
		   for (int i = 0; i < 51; i++)
		   {
			   inFile >> usernameF[i];
			   inFile >> passwordF[i];
			   inFile >> balance[i];

		   }
		
		  cout << "please create your username " << endl;
		  cin >> usernameW[0];
		  for (int iii = 0; iii < 52; iii++)
		  {
			  while (usernameW[0] == usernameF[iii])
			  {
			   	cout << "this username is already taken choose another one " << endl;
				cout << "create new username : ";//<< endl;
				cin >> usernameW[0];
				
			  }
			// outFile << usernameW[0]<<endl;
			 cout << "create your password " << endl;			
			 cin >> passwordW[0];
			// passwordF[iii] = passwordW[0];
			 //sernameF[iii] = usernameW[0];

			 outFile << usernameW[0] << endl;
			 outFile << passwordW[0]<<endl;//endl to break the line in the file after writing it
			 outFile << "0"<<endl;
			 
			 	 
			 
			 break;
		  }
		  n++;
	   }
	   for (int i = 0; i < 51; i++)
	   {
		   inFile >> usernameF[i];
		   inFile >> passwordF[i];
		   inFile >> balance[i];

	   }
	   outFile.close();
	   if (a == 2)
	   {
		  

		   
		   int i = 0;
		   do
		   {
			   for (int mm = 0; mm < 51; mm++)
			   {
				   inFile >> usernameF[mm];
				   inFile >> passwordF[mm];
				   inFile >> balance[mm];

			   }
			   cout << "please enter your username " << endl;
			   cin >> usernameR[0];
			   int U;
			   for (i = 0; i < 52; i++)
			   {
				   if (usernameF[i] == usernameR[0])
				   {
					   cout << "correct username " << endl;
					   int ii = 0;
					   do
					   {
						   cout << "please enter your password " << endl;
						   cin >> passwordR[0];
						   for (ii = 0; ii < 52; ii++)
						   {
							   if (passwordF[i] == passwordR[0])
							   {

								   cout << "correct password " << endl;
								   cout << "your current balance is " << balance[i] << "$" << endl;
								   g = balance[i];
								   
								   do
								   {
									   cout << "please choose an option " << endl << "1- deposit" << endl << "2- withdraw" << endl;
									   //cout << "1- deposit" << endl;
									   //cout << "2- withdraw" << endl;
									   cin >> b;
									   while (b != 1 && b != 2)
									   {
										   cout << "please choose carefully the option " << endl;
										   cout << "1- deposit" << endl;
										   cout << "2- withdraw" << endl;
										   cin >> b;
									   }
									   system("cls");
									   if (b == 1)
									   {
										   cout << "please enter number of digits of the code for the check banker : ";
										   cout << endl;
										   cin >> c;
										   while (c != 7 && c != 8 && c != 9)
										   {
											   cout << "incorrect number of digits " << endl;
											   cout << "please re-enter number of digits : ";
											   cin >> c;
										   }
										   cout << endl;
										   int iii = 0;
										   do
										   {
											   cout << "please enter the code : ";
											   cin >> d;
											   cout << endl;
											   cout << endl;
											   nb = 25;
											   n = 0;
											   int aa;
											   ifstream reader("checkbanker.txt");
											   //ofstream writer("checkbanker.txt");
											   for (aa = 0; aa < nb; aa++)
											   {
												   reader >> e;
												   arrR[aa] = e;
											   }





											   for (iii = 0; iii < nb + 2; iii++)
											   {

												   if (arrR[iii] == d)
												   {
													   k = iii;

													   if (c == 7)
													   {
														   cout << "10$ will be added to your balance " << endl;
														   nb = nb - 1;
														   g += 10;
														   //arrR[iii] = 0;
														   //cout << arrR[iii];

													   }
													   if (c == 8)
													   {
														   cout << "20$ will be added to your balance " << endl;
														   nb = nb - 1;
														   g += 20;
														   //arrR[iii] = 0;

													   }
													   if (c == 9)
													   {
														   cout << "30$ will be added to your balance " << endl;
														   nb = nb - 1;
														   g += 30;
														   //arrR[iii] = 0;

													   }

													   balance[i] = g;
													   arrR[k] = 0;


													   ofstream writer("checkbanker.txt");
													   //cout << arrR[k] << endl;
													   //cout << k<<endl;
													   for (int m = 0; m < 23; m++)
													   {
														   writer << arrR[m] << endl;
													   }
													   writer.close();

													   break;
												   }
												   if (iii == nb + 1)
												   {
													   cout << "incorrect code " << endl;
													   break;
												   }
											   }
											   //system("cls");
										   } while (iii == nb + 1);



										   cout << "your balance is " << g << "$" << endl;
										   
										   outFile.close();
										   outFile.open("username.txt", ios::app);
										   
										   
										   outFile << n;
											   for (int kk = 0; kk < n + 3; kk++)
											   {
												   outFile << usernameF[kk] << endl;
												   outFile << passwordF[kk] << endl;
												   outFile << balance[kk] << endl;
											   }
										   	   
										   							 							   
										     //reader.close();

										   system("pause");

									   }
									   else
									   {
										   for (int nn = 0; nn < 50; nn++)
										   {
											   inFile >> usernameF[nn];
											   inFile >> passwordF[nn];
											   inFile >> balance[nn];

										   }
										   cout << "withdraw" << endl;
										   cout << balance[i] << endl;    
										   system("pasue");
									   }
									   
									   
								   } while (b == 1 || b == 2);

							   }
							   if (ii == 51) {
								   cout << "incorrect password " << endl;
								   break;
							   }
						   }
						   //break;
						   //system("cls");
					   } while (passwordF[i] != passwordR[0]);

					   
					   for (int kk = 0; kk < 50; kk++)
					   {
						   inFile >> usernameF[kk];
						   inFile >> passwordF[kk];
						   inFile >> balance[kk];
					   }

					   
				   }
				   if (i == 51)
					   cout << "incorrect username " << endl;
			   }
			   system("cls");
		   }while (i!=51);


		   //outFile.close();
		   //reader.close();
		   //writer.close();

	   }
	   system("cls");
	  }while (a == 1);
	//outFile.close();
	/*for (int i = 0; i < 51; i++)
	{
		inFile >> usernameF[i];
		inFile >> passwordF[i];
		inFile >> balance[i];

	}*/
	//cout << "The name is " << usernameF[0] << endl;
	//ofstream writer("username.txt");
	//writer << "meme";
	
	inFile.close();
	outFile.close();
	system("pause");

}