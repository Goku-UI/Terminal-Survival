#include <cs50.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    printf("\n\n\n\n\n\n> You have executed the sacred binary. To test your worth, you must complete a game.\n");
    sleep(3);
    printf("> This game is called... \n");
    sleep(2);
    printf("> uh... \n");
    sleep(2);
    printf("> it actually doesn't have a name... \n");
    sleep(2);
    printf("> Anyway, you will play the game with no name. If you fail... \n");
    printf("you will be terminated.\n");
    sleep(3);
    printf("> MUAHAHAHAHAHAHAHAHAHAHAHAHAAAAA!\n");
    sleep(3);
    printf("> BEGIN\n");
    char b = get_char("> You're at home. Use 'l' as your first command.\n");
    if (b == 'l' || b == 'L')
    {
        printf("> Locations: EasternSafari, NorthernMountains, UCSD\n");
        sleep(3);
        printf("> Items: IntroLetter\n");
        sleep(3);
        char c = get_char("> Use 'r' to view Items\n");
        if(c == 'r' || c == 'R')
        {
            printf(" \n-------- INTRODUCTION LETTER --------\n");
            sleep(2);
            printf("Welcome! This is 'Terminal Survival'. To look around, type 'l'. To read/inspect items, type 'r'. You can also talk to people using 'r'. If you want to move around, type 'n' for north, 'e' for east, 'w' for west, and 's' for south. If the location does not have a direction, simply type the first letter of its name. The objective of the game is to defeat all enemies. To do this, learn the powerful command hidden deep inside the game.\n\n");
            sleep(10);
            char d = get_char("> Which way do you want to go? You can go to the EasternSafari or the NorthernMountains. 'e' for the safari or 'n' for the mountains.\n");
            if(d == 'n' || d == 'N')
            {
                printf("\n> You are now in the NorthernMountains!\n");
                char e = get_char("> Look around\n");
                if (e == 'l' || e == 'L')
                {
                    sleep(1);
                    printf("> Locations: Hut, WesternTrail\n");
                    sleep(2);
                    printf("> Items: None\n");
                    sleep(2);
                    printf("> People: Old Seer\n");
                    sleep(2);
                    char f = get_char("> Talk to the Old Seer\n");
                    if (f == 'r' || f == 'R')
                    {
                        printf("> AHH! GET AWAY!! AWAY, YOU MONSTER!\n");
                        printf("...\n");
                        printf("> Locations: Hut, WesternTrail\n");
                        sleep(2);
                        printf("> Items: None\n");
                        sleep(2);
                        printf("> People: Old Seer\n");
                        sleep(2);
                        char h = get_char("> Move around or restart by using ctrl+c and re-executing the game\n");
                        if (h == 'w' || h == 'W')
                        {
                            printf("> You have begun hiking in the WesternTrail\n");
                            sleep(1);
                            printf("> You advance until you reach a fork in the road\n");
                            sleep(1);
                            char i = get_char("> You can go down to the SouthernRavine or climb to the WesternForest\n");
                            if (i == 's' || i == 'S')
                            {
                                printf("> You descend into the ravine...\n");
                                sleep(2);
                                printf("> but slip on a rock and fall into the river\n");
                                sleep(1);
                                printf("> Some other rocks cover one of your legs...\n");
                                sleep(2);
                                printf("> You can't move it, and it starts raining.\n");
                                sleep(1);
                                printf("> You drown.\n");
                                sleep(1);
                                printf("> Your rating was: medium\n");
                            }
                            else if (i == 'w' || i == 'W')
                            {
                                printf("> You continue hiking in the WesternTrail\n");
                                sleep(1);
                                printf("> Ahead, there is a pack of Long-Beaked Swallows. Thankfully, they're asleep\n");
                                sleep(1);
                                printf("> You silently tiptoe past them, but fall into a hole\n");
                                sleep(1);
                                printf("> Locations: DarkTunnel, CertainDeath\n");
                                sleep(1);
                                printf("> Items: None\n");
                                sleep(1);
                                char q = get_char("> So... you first\n");
                                if (q == 'd' || q == 'D')
                                {
                                    printf("> You go into the tunnel, only to find a massive 1000-ton giraffe that looks like it's been eating lots of McDonalds. He accidentally sits on you, and you die\n");
                                    sleep(1);
                                    printf("> Your rating was: advanced\n");
                                }
                                else if (q == 'c' || q == 'C')
                                {
                                    printf("> Well, you're extremely stupid\n");
                                    sleep(1);
                                    printf("> But, in this case, it seems to have paid off\n");
                                    sleep(1);
                                    char r = get_char("> Look around\n");
                                    if (r == 'l')
                                    {
                                        printf("> Locations: None\n");
                                        sleep(1);
                                        printf("> Items: MessageInStone\n");
                                        sleep(1);
                                        char s = get_char("> Oooh. Let's read that\n");
                                        if (s == 'r' || s == 'R')
                                        {
                                            char t = get_char(">  -----MESSAGEINSTONE-----\n I am Jon CM. I was accidentally trapped in here while coding the game. I know how to escape, but I have probably already died, and when I found out how, I had little time left. \nSo, here's how to escape:\n type 'e' for escape\n");
                                            if (t == 'e' || t == 'E')
                                            {
                                                printf("Congratulations! You have WON!\n");
                                            }
                                            else
                                            {
                                                printf("> You rating was: extremely idiotic\n");
                                            }
                                        }
                                        else
                                        {
                                            printf("\n> Please type 'r'\n");
                                            sleep(2);
                                            printf("> You will now have to restart.\n");
                                            sleep(2);
                                            printf("> To play again, please re-execute the program after the $\n");
                                            sleep(2);
                                            printf("> You rating was: advance\n");
                                        }
                                    }
                                }
                                else
                                {
                                    printf("\n> Please type 'd' or 'c'\n");
                                    sleep(2);
                                    printf("> You will now have to restart.\n");
                                    sleep(2);
                                    printf("> To play again, please re-execute the program after the $\n");
                                    sleep(2);
                                    printf("> You rating was: advanced\n");
                                }
                            }
                            else
                            {
                                printf("\n> Please type 's' or 'w'\n");
                                sleep(2);
                                printf("> You will now have to restart.\n");
                                sleep(2);
                                printf("> To play again, please re-execute the program after the $\n");
                                sleep(2);
                                printf("> You rating was: novice\n");
                            }
                        }
                        else if (h == 'h' || h == 'H')
                        {
                            printf("> You are now inside the Old Seer's hut\n");
                            sleep(1);
                            printf("> Old Seer: YOU TAKE MY FAMILY AND MY SIGHT BUT YET YOU STILL COME BACK? OOOOOOUT!\n");
                            sleep(1);
                            printf("> You have been hit over the head with a frying pan\n");
                            sleep(2);
                            printf("> This results in a mortal concussion that eventually kills you.\n");
                            sleep(2);
                            printf("> Your rating was: REALLY? THAT'S HOW YOU GET KILLED?\n");
                        }
                        else
                        {
                            printf("\n> Please type 'h' or 'w'\n");
                            sleep(2);
                            printf("> You will now have to restart.\n");
                            sleep(2);
                            printf("> To play again, please re-execute the program after the $\n");
                            sleep(2);
                            printf("> You rating was: medium\n");
                        }
                    }
                    else
                    {
                        printf("\n> Please type 'r'\n");
                        sleep(2);
                        printf("> You will now have to restart.\n");
                        sleep(2);
                        printf("> To play again, please re-execute the program after the $\n");
                        sleep(2);
                        printf("> You rating was: novice\n");

                    }
                }
                else 
                {
                    printf("\n> Please type 'l'\n");
                    sleep(2);
                    printf("> You will now have to restart.\n");
                    sleep(2);
                    printf("> To play again, please re-execute after the $\n");
                    sleep(2);
                    printf("> Your rating was: novice\n");
                }
            }
            else if(d == 'e' || d == 'E')
            {
                printf("\n> You are now in the EasternSafari!\n");
                char g = get_char("> Look around\n");
                if (g == 'l' || g == 'L')
                {
                    printf("> Locations: CotttonField, MerchantShop\n");
                    sleep(1);
                    printf("> Items: None\n");
                    sleep(1);
                    printf("> THERE IS A FARTING CHEETAH RIGHT BEHIND YOU! RUN!!! IF IT FARTS, WE WILL ALL PERISH!!! EVEN THE GAME WILL PERISH!! WHY, OH WHY, GAME?\n");
                    sleep(1);
                    printf("> YOU HAVE ABOUT 10 SECONDS TO GET SOMETHING THAT WILL COVER YOUR NOSE!!! THINK FAST!\n");
                    sleep(1);
                    printf("> 10..\n");
                    sleep(1);
                    printf("> 9...\n");
                    sleep(1);
                    printf("> 8... \n");
                    sleep(1);
                    printf("> 7...\n");
                    sleep(1);
                    printf("> 6..\n");
                    sleep(1);
                    printf("> 5...\n");
                    sleep(1);
                    printf("> 4...\n");
                    sleep(1);
                    printf("> Oh... wait, no. It was just looking for its favorite stuffed animal\n");
                    sleep(2);
                    printf("> Anyway...\n");
                    sleep(1);
                    printf("> Locations: MerchantShop\n");
                    sleep(1);
                    printf("> Items: LostDollarBill\n");
                    sleep(1);
                    printf("> Wait... wasn't there a CottonField? And where did this dollar bill come from?\n");
                    sleep(2);
                    char j = get_char("> ...Eh. Whatever. Grab the dollar bill \n");
                    if (j == 'r' || j == 'R')
                    {
                        printf("> You are one dollar richer\n");
                    }
                    else if (j == 'm' || j == 'M')
                    {
                        printf("> ??? You have no money yet");
                        sleep(1);
                        printf("> Merchant: Eh? What are you doing in my shop? You have no money. OUT!\n");
                        sleep(1);
                        printf("> You are kicked out of the shop and die of shame\n");
                        sleep(2);
                        printf("> Your rating was: complete idiot\n");
                    }
                    else
                    {
                        printf("\n> Please type 'r'\n");
                        sleep(2);
                        printf("> You will now have to restart.\n");
                        sleep(2);
                        printf("> To play again, please re-execute the program after the $\n");
                        sleep(2);
                        printf("> You rating was: medium\n");
                    }
                    char k = get_char("> Kay. Now let's go shopping\n");
                    if (k == 'm' || k == 'M')
                    {
                        printf("> You are now inside the shop\n");
                        sleep(1);
                        char l = get_char("> Look around to see what there is to buy\n");
                        if (l == 'l' || l == 'L')
                        {
                            printf("> Locations: None\n");
                            sleep(1);
                            printf("> Items:\n Merchant: With your budget, you can buy these basic adventuring items:\n sword - $1\n helmet - $1\n");
                            char m = get_char("> Which one are we buying? 's' for sword and 'h' for helmet\n");
                            if (m == 's' || m == 'S')
                            {
                                printf("> You are now one sword richer and one doller poorer\n");
                                char n = get_char("> Welp, let's keep going. ONLY when I tell you, you can use 'b' for back. If not, you will be stupidly dead. Use 'b' for back\n");
                                if (n == 'b' || n == 'B')
                                {
                                    char o = get_char("> You are now in the EasternSafari. Leave quick using 'b' before another FartingCheetah appears.\n");
                                    if (o == 'b' || o == 'B')
                                    {
                                        printf("> You have escaped. In the distance, you see a green cloud of... nevermind\n");
                                        sleep(1);
                                        printf("> Anyhoo, let's keep goi --PPPPFFFFFFFFTTTTT--\n");
                                        sleep(1);
                                        printf("> Oops. I forgot their farts expand several miles after expulsed. Welp, we're dead. I hope you had a good time\n");
                                    }
                                }
                                else
                                {
                                    char p = get_char("> Merchant: Well, since you are our 1000th customer, here's a quick way out of here: use 'e' for escape to leave the game\n");
                                    if (p == 'e' || p == 'E')
                                    {
                                        printf("> RRR! THAT WAS TOO SHORT!!! I'LL GET THAT MERCHANT NEXT TIME...\n");
                                        sleep(1);
                                        printf("> Congratulations! You won!\n");
                                    }
                                    else
                                    {
                                        printf("> You're stupid\n");
                                    }
                                }
                            }
                            else if (m == 'h' || m == 'H')
                            {
                                printf("> Why would you buy a helmet???\n");
                            }
                            else
                            {
                                printf("\n> Please type 'r'\n");
                                sleep(2);
                                printf("> You will now have to restart.\n");
                                sleep(2);
                                printf("> To play again, please re-execute the program after the $\n");
                                sleep(2);
                                printf("> You rating was: novice\n");
                            }
                        }
                        else
                        {
                            printf("\n> Please type 'l'\n");
                            sleep(2);
                            printf("> You will now have to restart.\n");
                            sleep(2);
                            printf("> To play again, please re-execute the program after the $\n");
                            sleep(2);
                            printf("> You rating was: medium\n");
                        }

                    }
                    else
                    {
                        printf("\n> Please type 'm'\n");
                        sleep(2);
                        printf("> You will now have to restart.\n");
                        sleep(2);
                        printf("> To play again, please re-execute the program after the $\n");
                        sleep(2);
                        printf("> You rating was: medium\n");
                    }
                }
                else
                {
                    printf("\n> Please type 'l'\n");
                    sleep(2);
                    printf("> You will now have to restart.\n");
                    sleep(2);
                    printf("> To play again, please re-execute after the $\n");
                    sleep(2);
                    printf("> Your rating was: novice\n");
                }
            }
            else
            {
                printf("\n> Please type 'e' or 'n'\n");
                sleep(2);
                printf("> If you were attempting to go to UCSD, you do not yet have the clearence level\n.");
                sleep(2);
                printf("> You will now have to restart.\n");
                sleep(2);
                printf("> To play again, please re-execute after the $\n");
                sleep(2);
                printf("> Your rating was: novice\n");
            }
        }
        else
        {
            printf("\n> Please type 'r'\n");
            sleep(2);
            printf("> You will now have to restart.\n");
            sleep(2);
            printf("> To play again, please re-execute after the $\n");
            sleep(2);
            printf("> Your rating was: novice\n");

        }
    }
    else 
    {
        printf("\n> Please type 'l'\n");
        sleep(2);
        printf("> You will now have to restart.\n");
        sleep(2);
        printf("> To play again, please re-execute after the $\n");
        sleep(2);
        printf("> Your rating was: novice\n");
        {
            
        }
    }
}
