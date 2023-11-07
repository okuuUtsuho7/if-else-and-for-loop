// Program that uses a combination of if-else statement and the for loop

#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string username, nuke_confirm, nuke_confirm2, nuke_code, nuke_target, scarlet, hey_mister;
	
	cout << "Enter your name: ";
	cin >> username;
		
	if (username == "Vadim" || username == "vadim") // Demonstrates a for loop for first condition
	{
		for (;;)
		{			
			cout << "VADIM BLYAT!" << endl;
		}
	}
	
	else if (username == "Utsuho" || username == "utsuho") // condition 2 if user is confirmed to be Mr. Utsuho or Reiuji Utsuho
	{
		cout << "Hello Mr. Utsuho / Reiuji Utsuho." << endl;
		cout << endl;
		cout << "Launch Nuclear Missile? (y/n) ";
		cin >> nuke_confirm;
		cout << endl;
		
		if (nuke_confirm == "y" || nuke_confirm == "yes")
		{
			cout << "Please enter nuclear passcode: ";
			cin >> nuke_code;
			cout << endl;
			
			if (nuke_code == "69420")
			{
				cout << "Please type in the target name: ";
				cin >> nuke_target;
				cout << endl;
				
				cout << "Target set to " << nuke_target << endl;
				cout << "Are you sure you will launch Nuclear Missile to this target? (y/n) ";
				cin >> nuke_confirm2;
				cout << endl;
				
				if (nuke_confirm2 == "y" || nuke_confirm2 == "yes")
				{
					cout << "Launching Nuclear Missile to " << nuke_target << endl;						
					cout << "Estimated time to impact: 10 Minutes";
				}
				
				else if (nuke_confirm2 == "n" || nuke_confirm2 == "no")
				{
					cout << "Cancelling launch. Have a good day." << endl;
				}
				
			}
			
			else
			{
				cout << "Incorrect Password. Program will terminate.";
			}
			
			
		}
		
		else if (nuke_confirm == "n" || nuke_confirm == "no")
		{
			cout << "Have a good day sir!";
		}
	}
	
	else if (username == "Myon" || username == "myon" || username == "Youmu") // condition 3 if user is confirmed to be Myon or Youmu Konpaku
	{
		cout << "Hug Myon!" << endl;
	}
	
	else if (username == "Remilia" || username == "remilia" || username == "mistr00s" || username == "remi") // condition 4. You must be a man of culture for this condition.
	{
		cout << "Hello, Remilia Scarlet.";
		cout << endl;
		cout << "Do you want to cover the sky with Scarlet Mist? (y/n) ";
		cin >> scarlet;
		cout << endl;
		
		if (scarlet == "y" || scarlet == "yes")
		{
			cout << "Please enter passcode (clue is Hey Mister): ";
			cin >> hey_mister;
			cout << endl;
			
			if (hey_mister == "200834") // The user must input the Hey Mister doujin.
			{
				cout << "Covering sky with Scarlet Mist." << endl;
				cout << endl;
				cout << "You can now go outside without a parasol to block the sun.";
			}
			
			else
			{
				cout << "Incorrect passcode";
			}
		}
		
		else if (scarlet == "n" || scarlet == "no")
		{
			cout << "Good day, Remilia Scarlet.";
		}
	}
	
	else // condition 3 if user is anyone else other than Okuu, Myon, or Vadim
	{
		cout << "Hello " << username;
	}
	
	
	return 0;
}
