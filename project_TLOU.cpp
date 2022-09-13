#include <iostream>

int main(){

    //start story beginning
    std::cout << "There was a huge virus outbreak in europe 5 years ago.\n"; 
    std::cout << "The virus can mutate human into dangerous eating-flesh mutants\n";
    std::cout << "But some of the people managed to get away from them by fighting using various kind of weapons\n";
    std::cout << "such as axes, rifles and more. You managed to run away from them with Ellie.\n" ;
    std::cout << "Ellie is your best friend since you were 10 years old\n" ;
    std::cout << "You guys need to survive!\n\n\n";

    //outbreak will start at your base
    std::cout << "One day, you heard someone in the radio talking about an outbreak.\n";
    std::cout << "They said a large sum of mutants will be coming to your base.\n";
    std::cout << "We need to move Ellie or else we gonna die! What weapon should we bring?\n\n";
    
    //Weapon types and choices
    char weapon_choice;
    
    for (int i = 0; i < 3 && weapon_choice != 'A' && weapon_choice != 'B' && weapon_choice != 'C'; i++) {

    std::cout << "Type 'A' if you think we should bring a rifle.\n"; 
    std::cout << "Type 'B' if you think we should bring a katana.\n";
    std::cout << "Type 'C' if you think we should bring a bow and arrow.\n";
    std::cin >> weapon_choice;
    
    }

    switch (weapon_choice)
    {
    case 'A' :
        std::cout << "Aight let me grab my rifle behind the door.\n";
        std::cout << "We also need to find some ammos, Ellie.\n\n";
        break;

    case 'B':
        std::cout << "Okay let's make this katana sharp as hell!\n\n";
        break;

    case 'C' : 
        std::cout << "Let me make more arrows, we surely need more.\n\n";
        break;

    default:
        std::cout << "Sorry, Invalid input!\n";
        break;
    }

    //Do some preparations
    std::cout << "You and Ellie did some preparations for a few hours including\n" ;
    std::cout << "packed some foods, water and also torchlights.\n" ;
    std::cout << "They started arguing which direction they should go?\n\n";
    
    //nak pergi mana?
    char direction;

    for (int i = 0; i < 3 && direction != 'A' && direction != 'B' && direction != 'C'; i++) {
        std::cout << "Type A if we should go to the sea.\n";
        std::cout << "Type B if we should go to the city.\n";
        std::cout << "Type C if we should go to the forest.\n";
        std::cin >> direction ;
    }

    switch (direction)
    {

    //pergi sea
    case 'A':
        std::cout << "\n" << "You went to the sea using the van you found at the creeepy forest.\n";
        std::cout << "Ellie was the driver. Ellie told you to find some fuel to refuel the van at a nearby gas station.\n";
        std::cout << "You managed to get the fuel with avoiding the huge mutants in the gas station.\n" << "Ellie continued driving to the sea jetty.\n";
        std::cout << "They were a few boats to get to the safe island. You guys safely arrived at the island and greeted by some great survivors!\n";
        std::cout << "They continued to live for 5 years and counting happily.\n";
        return 0;

    //pergi city
    case 'B':
        std::cout << "\n" << "Someone told in the radio they will be a plane for some survivors to go to London.\n" ;
        std::cout << "You guys were so excited. But on the way to the airbase, you heard someone calling for help.\n" ;
        std::cout << "IT WAS FAKE CALL! The mutants in the city were so clever to trap both of you!\n";
        std::cout << "You both ran from the mutants. But Ellie stuck on the elevator because there were so many mutants swarmed them.\n";
        std::cout << "Its up to you whether to help Ellie or went straight to the airbase to catch up the plane.\n\n";
        //choice nak tolong ellie ke tak
        char decision;
        std::cout << "Type A if you want to help Ellie.\n";
        std::cout << "Type B if you want to catch up the plane.\n";
        std::cin >> decision;

        //kalau tolong ellie
        if (decision == 'A') {
            std::cout << "\n" << "You went straight to Ellie using the weapon you have. You both managed to ran away from the mutants.\n";
            std::cout << "Both of you failed to catch up the plane because you were late.\n";
            std::cout << "After that, you guys went travel to ukraine by horses and meet some great survivors along the journey.\n";
            std::cout << "Both of you arrived at a safezone in Ukraine and live happily there.\n" ;
            return 0;
        }
        //kalau tak tolong
        else if (decision == 'B') {
            std::cout << "\n" << "You went straight to your horse, and speed up straight to the airbase.\n";
            std::cout << "You were lucky enough to catch up the plane to London.\n";
            std::cout << "In the plane, there was a half-mutated human, so and outbreak occur and in the end you could'nt survive.\n";
            std::cout << "You died, Ellie died . Remember, karma is real in life!.\n";
            return 0;
        }


    //pergi forest
    case 'C':
        std::cout << "You went to the forest with Ellie by horses.\n";
        std::cout << "Both of you stumbled into a cave and swarmed into mutants!\n";
        std::cout << "YOU DIED!\n"; 
        return 0;

    default:
        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;
    }


}