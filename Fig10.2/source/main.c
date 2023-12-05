#include <stdio.h>
#include <stdlib.h>

typedef struct _card
{
	char *face;
	char *suit;
}card;

int main(void)
{
	card aCard;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	card *cardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);

	system("pause");
	return 0;
}