#include "Pony.hpp"
#include <iostream>
#include <string>

Pony	*ponyOnTheHeap(std::string const pony_name)
{
	return (new Pony(pony_name));
}

Pony	ponyOnTheStack(std::string const pony_name)
{
	return (Pony(pony_name));
}

int main(void)
{
	Pony	*RainbowDash;
	Pony	*FlutterShy;
	Pony	Rarity = ponyOnTheStack("Rarity");
	Pony	AppleJack = ponyOnTheStack("Apple Jack");
	Pony	*Twighlight;

	RainbowDash = ponyOnTheHeap("Rainbow Dash");
	FlutterShy = ponyOnTheHeap("Fluttershy");
	Twighlight = ponyOnTheHeap("Twightlight");

	Rarity.ponyJump();
	AppleJack.ponyJump();
	RainbowDash->ponyJump();
	Twighlight->ponyJump();
	FlutterShy->ponyJump();

	Rarity.ponyPlayBall();
	AppleJack.ponyPlayBall();
	RainbowDash->ponyPlayBall();
	Twighlight->ponyPlayBall();
	FlutterShy->ponyPlayBall();

	Rarity.ponyFeedEat();
	AppleJack.ponyFeedEat();
	RainbowDash->ponyFeedEat();
	Twighlight->ponyFeedEat();
	FlutterShy->ponyFeedEat();

	Rarity.ponyWalkRun();
	AppleJack.ponyWalkRun();
	RainbowDash->ponyWalkRun();
	Twighlight->ponyWalkRun();
	FlutterShy->ponyWalkRun();

	Rarity.ponyFly();
	AppleJack.ponyFly();
	RainbowDash->ponyFly();
	Twighlight->ponyFly();
	FlutterShy->ponyFly();

	delete RainbowDash;
	delete FlutterShy;
	delete Twighlight;
	return (0);
}