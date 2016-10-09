// Program: Blackjack
// Created by: Oscar Cairoli
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int main () {
	
	srand ( (unsigned int) time (0) );
	
	cout << "Welcome to Oscar's Black Jack game. Press '1' to begin: " << endl;
	int begin;
	cin >> begin;
	
	while (true)
	{
		bool playerBust = false;
		bool dealerBust = false;
		
		
		if ( begin == 1 )
		{
			int dealcard1 = ( 1 + rand() % 10 );
			int dealcard2 = ( 1 + rand() % 10 );
			int dealsum1 = ( dealcard1 + dealcard2 );
			
			int playcard1 = ( 1 + rand() % 10 );
			int playcard2 = ( 1 + rand() % 10 );
			int playsum1 = (playcard1 + playcard2);
			
			cout << " The dealer has a " << dealcard1 << " showing. " << endl;
			cout << endl;
			cout << " Your first card is " << playcard1 << "." << endl;
			cout << " Your second card is " << playcard2 << "." << endl;
			cout << endl;
			cout << " The total card count is " << playsum1 << "." << endl;
			cout << " ________________________________________________ " << endl;
							
			if (dealerBust == false){ 
				
			while ( true ) // The player loop.
			{
				cout << " Enter '1' to hit or '2' to stay. " << endl;
				cout << endl;
				int hit;
				cin >> hit;
						
				if ( hit == 1 )
				{
					
					int playcard3 = ( 1 + rand() % 10 );
					playsum1 += playcard3;	
					
					cout << " Your new card is " << playcard3 << "." << endl;
					cout << " The total card count is " << playsum1 << "." << endl;
					cout << " _________________________________________ " << endl;
					
					if ( playsum1 > 21 )
					{
						playerBust = true;
						break;
					}
					if ( playsum1 == 21 )
					{
						
						break;
					}
					
					
				}				
			
			
					if ( hit == 2 ){break;}
			} // End of 'if (dealerBust == false)
			
			if (playerBust == false) {
				
				cout << " The dealer's original card was " << dealcard1 << "." << endl;
				cout << " The dealer's second card was " << dealcard2 << "." << endl;
				cout << endl;
				
				while ( true ) // The dealer loop.
				{
					
										
					if ( dealsum1 < 17 )
					{
						int dealcard3 = ( 1 + rand() % 10 );
						dealsum1 += dealcard3;
						
						cout << "The dealer flipped a " << dealcard3 << "." << endl;
						cout << "The dealer's card count is " << dealsum1 << "." << endl;
						cout << endl;
						
						
						// Insert code to tell user that either the dealer won or lost after reaching 16.
					} else {
						break;
					}
				} // end of dealer loop
			} // end of "if (playerBust == false)
			
			// decisions and declaration of winner/loser, etc.
			while (true)
			{
				if ( dealsum1 >= 17 )
				{ 
					if ( dealsum1 > 21 ) 
					{
						cout << " The dealer bust! You win! " << endl;
						cout << endl;
						break;
					}
				
					if ( dealsum1 > playsum1 )
					{
						cout << " The dealer wins! Try again. " << endl;
						cout << endl;
						break;
					}
					if ( playsum1 > dealsum1 )
					{
						if ( playsum1 > 21 )
						{
							break;
						}
						
						cout << " You win! Congratulations. " << endl;
						cout << endl;
						break;
												
					}
					if ( dealsum1 > 21 )
					{
						dealerBust = true;
						cout << " The dealer bust! Congratulations, you win! " << endl;
						cout << endl;
						break;
					}
				
				
				}
			
			if ( playsum1 == dealsum1 )
			{ 
				cout << " Push! " << endl;
				cout << endl;
				break;
			}
			if ( playsum1 > 21 )
			{
				cout << "You bust! Try again. " << endl;
				cout << endl;
				break;
			}
			
			}	
				
			
			}
		}
	}
			
				
			return 0;
}
