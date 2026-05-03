//A c program to create a game called kausha

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

void GameCards(){
	int card[9] = { 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char special_card[6] = { 'V', 'A', 'J', 'j', 'k', 'Q' };

		/*	A = "ace / demander"
			V = "Special Ace"
			J = "Special jackal"
			j = "jackal / jump"
			Q = "Queen / question"
			K = "King / kick-back"			*/
	
//those are the card types to be used to play
//special cards have different functionalities and capabilities

/*	card 'A':
		also called Ace.
		when a player throws an 'A', He has the functionality to ask for the symbol of play from the cards he/she has
		special Ace 'V' , which allows the player to ask for a card number and a symbol from the ones he/she has
		When demanded to pick by the game owner, one can use this special 'A' to reject the pick
		if used very special Ace 'V' , to reject, it's functionality is reduced to symbol demand only
		one cannot Posses /Win the game if he/she is remaining only with an 'A' Card or 'V' Card


	
	Card 2:
		This card demands the next player to pick two cards from the pick_desk
		one can reject this harsh demand if he/she has an 'A' Card or 'V' card
		If he/she has a card 2 or card 3 with the same symbol as the demand card
		One cannot posses the game with the demand card
		The player can throw all demand cards if he has as long as they are in -line with the rules
		This is considered as a single throw
		The total number of demand cards determine the number of cards to be picked from the pick_desk by the victim who has no insurance
		demand cards work jointly (2 or 3 ) but should be of the same symbol in case two happen together
		if only one type is available,
		the one which matches the previous card symbol before the demand should be at the bottom,
		next to the previous card played

	Card 3:
		This card demands the next player to pick two cards from the pick_desk
		one can reject this harsh demand if he/she has an 'A' Card or
		If he/she has a card 3 or card 2 with the same symbol as the demand card
		One cannot posses the game with the demand card
		The total number of demand cards determine the number of cards to be picked from the pick_desk by the victim who has no insurance
		demand cards work jointly (3 or 2 ) but should be of the same symbol in case two happen together
		The player can throw all demand cards if he has as long as they are in -line with the rules
		This is considered as a single throw
		if only one type is available,
		the one which matches the previous card symbol before the demand should be at the bottom,
		next to the previous card played

	Card 4:
		Played Anywhere
		it's symbol should match the previous card symbol or should follow another previous four
		Cannot be an Answer to a question
		One can posses the Game with this card
		Only After declaring "GAME ON"


	Card 5:
		Played Anywhere
		it's symbol should match the previous card symbol or should follow another previous five
		Can be an Answer to a question
		One can posses the Game with this card
		Only after declaring "GAME ON"
	
	card 6:
		Played Anywhere
		it's symbol should match the previous card symbol or should follow another previous six
		Can be an Answer to a question
		One can posses the Game with this card
		Only after declaring "GAME ON"
	
	Card 7:
		Played Anywhere
		it's symbol should match the previous card symbol or should follow another previous seven
		Can be an Answer to a question
		One can posses the Game with this card
		Only after declaring "GAME ON"
	
	Card 8:
		This is also a Question
		Demands an answer( 5 - 10)
		Failure to provide an answer leads to fine of picking one card from the pick_desk
		One cannot posses the game with this card
		used together or interchangeably with 'Q' as both are questions
		One can throw all the cards he/she has in this case
	
	Card 9:
		Played Anywhere
		it's symbol should match the previous card symbol or should follow another previous nine
		Can be an Answer to a question
		One can posses the Game with this card
		Only after declaring "GAME ON"
	
	Card 10:
		Played Anywhere
		it's symbol should match the previous card symbol or should follow another previous ten
		Can be an Answer to a question
		One can posses the Game with this card
		Only after declaring "GAME ON"
	
	Card 'J':
		Called jackal.
		At normal play it means a jump.
		the player who throws it makes the next player to be skipped
		this is thrown at random, when one player throws it
		The player with more than one of this card can throw them once as they are considered as a single throw
		no matter the sequence of playing
		Any person in the game with a same card can throw it and the next players in the play sequence are skipped in that order
		The special 'J' has a very funny functionality where if the next player doesn't have it
		Or an 'A' to reject the game is forced to pick five cards from the pick_Desk
		Any player in the game no matter the series is allowed to add the special card if any
		if the next person in the game adds the special 'J',
		The next is expected to pick ten cards from the pick_desk
		that is if he/she doesn't have a card to reject the bill
		One cannot posses the game with this card

		a player with more than one of this card can throw them altogether
		they are taken as a single card
		If the player also has a card number eight(which is Also a question)
		he/She can throwit together with this card as they are determined as same card or a single play
		If the player lacks an answer for his/her question
		they are expected to pick one card from the pick_desk
		One cannot Posses the game with this card
	Card 'Q':
		Called the Queen
		this is a Question card
		A player who throws this should provide an answer to his/her Question
		Answers Accepted are numbers from five to ten excluding number eight
	
	
	Card 'K':
		called king/ KickBack
		This card returns the previous player to the play stage and reverses the sequence of playing
		i.e the series of playing starts to go in the opposite direction
		One can place all of this cards he/she has
		Any one in the game is also allowed to add the similar card no matter the series of playing
		one cannot posses the game with this card		*/

	printf("The following cards are used in the game : \n");

	for(int i = 0;i <= 9;i++){
		printf("%d\n", card);
	}

	printf("The following cards have a special functionality in the game : \n");

	for (int j = 0;j <= 6; j++){
		printf("%c\n", special_card);
	}

	printf("\n=============  ALL THE BEST CHAMPION   =====================\n");

}