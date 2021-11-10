#include <iostream>
#include <string>
using namespace std;

char decisionInput{};
char tibiWine{};
char decisionName{};
string odysseusHero{};
string polyphemusMonster{};

int main();

int polyphemusEnd()
{
    return 0;
}

int odysseusEnd()
{
    cout << "\n\nAfter your experiences do you think Odysseus was a hero in your story? Y = Yes, N = No.\n";
    cin >> decisionInput;

    if (decisionInput == 'Y')
    {
        cout << "\nHhmm. This is your last response: " << odysseusHero << "." << " What makes you think Odysseus is a hero in this story?\n\n";
        cin >> odysseusHero;
        cout << "\nYou should play this game again, take a different path, and compare your responses! Do you want to play again? A = Again, N = No.\n";
        cin >> decisionInput;

        if (decisionInput == 'A')
        {
            main();
        }

        return 0;
    }
    else
    {
        cout << "\nHmm. This is your last response: " << odysseusHero << "." << " What did Odysseus do that makes you think he isnt a hero.\n";
        cin >> odysseusHero;
        cout << "\nYou should play this game again, take a different path, and compare your responses!";
        cout << "\nDo you want to play again? A = Again, N = No.\n";
        cin >> decisionInput;

        if (decisionInput == 'A')
        {
            main();
        }
        else
        {
            return 0;
        }

        return 0;
    }

    return 0;
}

int Odysseus()
{
    cout << "\n\nYou are odysseus the greatest greek hero, or is he? I wonder what you will think of him?\n\n";
    cout << "           ///////\n";
    cout << "          /// // //\n";
    cout << "           ///  //\n";
    cout << "             ////\n";
    cout << "         //////////////\n";
    cout << "       //////////////////\n";

    cout << "\nYou are on the Homeric Galley. You have been at sea for days and are out of food and water. You spot an unknown island. Do you land and explore it. Y = yes, N = no.\n";
    cin >> decisionInput;

    if (decisionInput == 'Y')
    {
        cout << "\nYou land on the island and anchor your ship on the coast so that you could leave quickly. You take your most trusted men and start exploring to find food. Do you bring a gift of wine to give to whoever you meet? Y = Yes, N = No.\n";
        cin >> tibiWine;

        cout << "\nYou explore the island and find hudge expanes of green fields but no cattle or sheep. Continueing to look for food, you spot a hudge cave. As you inspect the cave you see signs of people living in it. Do you explore the cave, or wait\npolitly outside for whoever lives their? W = Wait, C = Cave.\n";
        cin >> decisionInput;

        if (decisionInput == 'C')
        {
            cout << "\nYou walk into the cave and you find stacks of cheese and flocks of healthy sheep. Your men beg you to take the cheesse\nand the sheep and run back to your ship. Do you steal the food, wait for the owner, or start eating the food. Steal = S, Wait = W, Eat = E.\n";
            cin >> decisionInput;

            if (decisionInput == 'S')
            {
                cout << "\nYou decide that your hunger is more important than whoever owns all this food. So, you grab all the cheese and sheep you can carry and run back to your ship to sail away. You hear a roar and see a hudge figure as the owner of the cave\nrealizes that you stole all his food. Do you taunt the figure? Y = Yes, N = No.\n";
                cin >> decisionInput;

                if (decisionInput == 'Y')
                {
                    cout << "\nYou notice that the figure only has one eye. He is a cyclops! Idiot, you yell! The cyclops pickes up a huge rock like a piece of paper and throws it at you, but fortunatly misses. You jeer again. IDIOT! He throws another rock and it hits a sail. You decide that it would be more prudent to not taunt him anymore.\n\n";
                    odysseusEnd();
                }
                else
                {
                    odysseusEnd();
                }
            }
            else if (decisionInput == 'W')
            {
                cout << "A giant man came through the door. He was a giant Cyclops!";
                cout << "Do you politly speak to him, or do you run? S = Speak, R = Run.";
                cin >> decisionInput;

                if (decisionInput == 'S')
                {
                    cout << "Hello cyclops! We did not mean to disturb your house. Do you accept our gift of wine?";
                    cout << "The cyclops seems to think over his words for a moment. He asks, why did you come into my house?";
                    cout << "My crew and I have been on the sea for day we are out of food and water.";
                    cout << "Well then, I will prepare some food.";
                    cout << "The cyclops prepares the food and eats with you.";
                    if (tibiWine == 'Y')
                    {
                        cout << "Do you politly thank the cyclops, give him the wine, take some food for your ship and leave or do you wait till Polyphemus is sleeping and steal all his food and sheep. S = Steal, L = Leave.";
                        cin >> decisionInput;

                        if (decisionInput == 'S')
                        {
                            cout << "You wait until Polyphemus is sleeping and steal all his cheese and sheep. You make your way onto your ship and start sailing away. You hear a roar as Polyphemus realizes you stole his food.";
                            cout << "Do you taunt Polyphemus? Y = Yes, N = No.";

                            if (decisionInput == 'Y')
                            {
                                cout << "Polyphemus! You idiot! Polyphemus throws a rock at you he misses. You jeer again. IDIOT! He throws another rock and it hits a sail.";
                                odysseusEnd();
                            }
                            else
                            {
                                odysseusEnd();
                            }
                        }
                        else
                        {
                            cout << "You politing thank the cyclops and give him the wine. You take some food and sail away.";
                            odysseusEnd();
                        }
                    }
                    else
                    {
                        cout << "After you eat the Cyclops seems to be waiting for something. You keep eating and say to the Cyclops, thank you for your hospitality. We will be going to our ship now if you give us some food.";
                        cout << "Polyphemus chases you back to your ship becuase you didnt give him a gift.";
                        cout << "You manage to get on your ship and sail away. Do you taunt Polyphemus? Y = Yes, N = No.";

                        if (decisionInput == 'Y')
                        {
                            cout << "Polyphemus! You idiot! Polyphemus throws a rock at you he misses. You jeer again. IDIOT! He throws another rock and it hits a sail.";
                            odysseusEnd();
                        }
                        else
                        {
                            odysseusEnd();
                        }
                    }
                }
                else
                {
                    
                }
            }
            else if (decisionInput == 'E')
            {
                cout << "\nYou start eating and wait for the owner to come home. You see a hudge figure come through the door with his sheep.\n";
                cout << "You see a giant figure walk through the door. The figure only has one eye! He is a cyclops!\n";
                cout << "Do you run, hide or talk? R = Run, H = Hide, T = Talk.\n";
                cin >> decisionInput;

                if (decisionInput == 'R')
                {
                    cout << "You decide that this cyclops is a brute and that he cant be reasoned with. So, you call to your men, RUN!";
                    cout << "You barely get to your ship and sail away. Do you taunt the stupid cyclopes? Y = Yes, N = No.\n";
                    cin >> decisionInput;

                    if (decisionInput == 'Y')
                    {
                        cout << "Polyphemus! You idiot! Polyphemus throws a rock at you he misses. You jeer again. IDIOT! He throws another rock and it hits a sail.";
                        odysseusEnd();
                    }
                    else
                    {
                        odysseusEnd();
                    }
                }
                if (decisionInput == 'T')
                {
                    cout << "Hello cyclops! We did not mean to disturb your house. Do you accept our gift of wine?";
                    cout << "The cyclops seems to think over his words for a moment. He asks, why are you on our island?";
                    cout << "My crew and I have been on the sea for day we are out of food and water.";
                    cout << "Well then, I will prepare some food.";
                    cout << "The cyclops prepares the food and eats with you.";
                }
            }
        }
        else
        {
            cout << "\nYou decide to be the polite guest and wait outside the cave until the owner comes back.\n";
            cout << "After a few minutes a hudge figure appeared a few feet away. It was a cyclopes herding sheep! Do you run or try to talk to the cyclopes? R = Run,\nT = Talk.\n";
            cin >> decisionInput;

            if (decisionInput == 'T')
            {
                cout << "Hello cyclops! We did not mean to disturb your house.\n";

                if (tibiWine == 'Y')
                {
                    cout << "Do you accept our gift of wine?\n";
                }

                cout << "The cyclops seems to think over his words for a moment. He asks, why are you on our island?\n";
                cout << "My crew and I have been on the sea for day we are out of food and water.\n";
                cout << "Well then, I will prepare some food.\n";
                cout << "The cyclops prepares the food and eats with you.\n";
                cout << "The cyclopes says, my name is Polyphemus, what is yours?\n";
                cout << "Do you tell Polyphemus your real name? Y = Yes, N = No\n";
                cin >> decisionName;

                if (decisionName == 'Y')
                {
                    cout << "My name is Odysseus.\n";
                }
                else
                {
                    cout << "My name is Nobody.\n";
                }


                if (tibiWine == 'Y')
                {
                    cout << "Do you politly thank the cyclops, give him the wine, take some food for your ship and leave or do you wait till Polyphemus is sleeping and steal all his food and sheep. S = Steal, L = Leave.";
                    cin >> decisionInput;

                    if (decisionInput == 'S')
                    {
                        cout << "You wait until Polyphemus is sleeping and steal all his cheese and sheep. You make your way onto your ship and start sailing away. You hear a roar as Polyphemus realizes you stole his food.";
                        cout << "The cyclopes shouts, "
                        cout << "Do you taunt Polyphemus? Y = Yes, N = No.";

                        if (decisionInput == 'Y')
                        {
                            cout << "Polyphemus! You idiot! Polyphemus throws a rock at you he misses. You jeer again. IDIOT! He throws another rock and it hits a sail.";
                            odysseusEnd();
                        }
                        else
                        {
                            odysseusEnd();
                        }
                    }
                    else
                    {
                        cout << "You politing thank the cyclops and give him the wine. You take some food and sail away.";
                        odysseusEnd();
                    }
                }
                else
                {
                    cout << "After you eat the Cyclops seems to be waiting for something. You keep eating and say to the Cyclops, thank you for your hospitality. We will be going to our ship now if you give us some food.";
                    cout << "Polyphemus chases you back to your ship becuase you didnt give him a gift.";
                    cout << "You manage to get on your ship and sail away. Do you taunt Polyphemus? Y = Yes, N = No.";

                    if (decisionInput == 'Y')
                    {
                        cout << "Polyphemus! You idiot! Polyphemus throws a rock at you he misses. You jeer again. IDIOT! He throws another rock and it hits a sail.";
                        odysseusEnd();
                    }
                    else
                    {
                        odysseusEnd();
                    }
                }
            }
            else
            {
                cout << "\nYou decide that this creature is too dangerous to talk to and yell to your men to start running.\n";
                cout << "Polyphemus chases after you but you manage to get to your ship and sail away.\n";
                cout << "Do you taunt Polyphemus? Y = Yes, N = No.\n";
                cin >> decisionInput;

                if (decisionInput == 'Y')
                {
                    cout << "Polyphemus! You idiot! Polyphemus throws a rock at you he misses. You jeer again. IDIOT! He throws another rock and it hits a sail.";
                    odysseusEnd();
                }
                else
                {
                    odysseusEnd();
                }
            }
        }
    }
    else
    {
        odysseusEnd();
    }

    return 0;
}

int Polyphemus()
{
    cout << "You are a cyclops. Your name is Polyphemus. You are a sheep herder that lives on a lonely island.\n";
    cout << "After the long day of herding sheep and eating cheese you start herding you sheep back to your cave.\n";
    cout << "As you enter the cave you find a group of humans eating your cheese!";
    cin >> decisionInput;

    if (decisionInput == 'C')
    {
        cout << "You hurridly hurd you livestock back to the cave and are relived when you dont see anything around it.";
        cout << "You secure your sheep in the cave and start making dinner when you see a flash in the back of the cave.";
        cout << "You investigate and find some humans. Do you kill them for dinner or try to talk? K = Kill, T = Talk.";
        cin >> decisionInput;

        if (decisionInput == 'K')
        {
             
        }
    }

    return 0;
}

int main()
{
    cout << "\n\nThis is a choose your own adventure story that is meant to show the diffrent ways that Polyphemus and Odysseus can take in The Odyssey.\n\n";
    cout << "Do you want to play Polyphemus or Odysseus? O = Odysseus, P = Polyphemus.\n";
    cin >> decisionInput;

    if (decisionInput == 'O')
    {
        Odysseus();
    } 
    else
    {
        Polyphemus();
    }

    return 0;
}