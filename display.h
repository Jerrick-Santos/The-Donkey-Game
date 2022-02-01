void displayStableHeader()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t _________________  - - - - - - - - - - - -  _________________\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|     STABLE 1    | - - - - - - - - - - - - |     STABLE 2    |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
}

void displayStable1()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t|        /))_     | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|        )   \"\" -.| - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|   ____./  ._  oo| - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| .i       /  ),-'| - - - - - - - - - - - - |                 |\n");
}

void displayStable2()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |        /))_     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |        )   \"\" -.|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |   ____./  ._  oo|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - | .i       /  ),-'|\n");
}

void displayOwner1()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t|      _____      | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|    .'     '.    | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|   |  .__._  |   | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|   \\ ;_____\\ /   | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|   (|| 0|0 ||)   | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|    |'-(_)-'|    | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|    \\ .___. /    | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|     '.-  .'     | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|       '-'       | - - - - - - - - - - - - |                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|    MANG JUAN    | - - - - - - - - - - - - |                 |\n");
    printf("\n");
}

void displayOwner2()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |      _____      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |    .'     '.    |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |   |  .__._  |   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |   \\ ;_____\\ /   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |   (|| 0|0 ||)   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |    |'-(_)-'|    |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |    \\ .___. /    |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |     '.-  .'     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |       '-'       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |    MANG JUAN    |\n");
    printf("\n");
}

void displayDonkeys(int D1M, int D2M, int D3M, int D4M, int OWM)
{
    if (D1M == 0)
    {
        displayStable1();
        printf("\t\t\t\t\t\t\t\t\t\t\t|     DONKEY 1    | - - - - - - - - - - - - |                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }
    else if (D1M == 1)
    {
        displayStable2();
        printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |     DONKEY 1    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }

    if (D2M == 0)
    {
        displayStable1();
        printf("\t\t\t\t\t\t\t\t\t\t\t|     DONKEY 2    | - - - - - - - - - - - - |                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }
    else if (D2M == 1)
    {
        displayStable2();
        printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |     DONKEY 2    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }

    if (D3M == 0)
    {
        displayStable1();
        printf("\t\t\t\t\t\t\t\t\t\t\t|     DONKEY 3    | - - - - - - - - - - - - |                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }
    else if (D3M == 1)
    {
        displayStable2();
        printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |     DONKEY 3    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }

    if (D4M == 0)
    {
        displayStable1();
        printf("\t\t\t\t\t\t\t\t\t\t\t|     DONKEY 4    | - - - - - - - - - - - - |                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }
    else if (D4M == 1)
    {
        displayStable2();
        printf("\t\t\t\t\t\t\t\t\t\t\t|                 | - - - - - - - - - - - - |     DONKEY 4    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|_________________| - - - - - - - - - - - - |_________________|\n");
    }

    if (OWM == 0)
    {
        displayOwner1();
    }
    else if (OWM == 1)
    {
        displayOwner2();
    }

    
}

void displayWelcomePrompt()
{
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t (\\w/)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t (..  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t_/  )  \\______\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t(oo /'\\        )`,\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t`--' (v  __( / ||\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t       |||  |||||\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t      //_| //_|   \n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|                                    |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|           Howdy, Partner!          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|    Welcome to THE 4 DONKEYS GAME   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|                                    |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-------------------------------------\n");

    printf("\t\t\t\t\n");   
    printf("\t\t\t\t\t\t\t______________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t\tLET'S GET STARTED!\n");
    printf("\t\t\t\t\t\t\tOBJECTIVE: Mang Juan and his 4 DONKEYS needs to be transfered from STABLE 1 to STABLE 2.\n");
    printf("\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\tRULES: \n");
    printf("\t\t\t\t\t\t\t1. Choose from donkeys 1 to 4 for each trip.\n");
    printf("\t\t\t\t\t\t\t2. Each donkey will add +1 hour to the ELAPSED TIME after the selected donkey's initial travel\n");
    printf("\t\t\t\t\t\t\t3. You are given 2 speedups that shall reduce 2 HOURS of travel for each travel. It is up to you to utilize the speedups!\n");
    printf("\t\t\t\t\t\t\t4. At the end of the game, if the total ELAPSED TIME is MORE THAN 13, then Mang Juan is too SLOW.\n");
    printf("\t\t\t\t\t\t\tBut if the total ELAPSED TIME IS LESS THAN 13, then Mang Juan is FAST!\n");
    printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\tNOTE: Mang Juan can only choose a maximum of 2 DONKEYS and a minimum of 1 DONKEY for each trip.\n");
    printf("\t\t\t\t\t\t\tNOTE: A selection is INVALID if Mang Juan is not on the same stable as the selected donkey.\n");
    printf("\t\t\t\t\t\t\tNOTE: The SPEEDUP power up cannot take effect if the donkey's speed is less than or equal to 2.\n");
    printf("\t\t\t\t\t\t\t______________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t _____ ____  ____  ____    _     _     ____  _  __ _ \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t/  __//  _ \\/  _ \\/  _ \\  / \\   / \\ /\\/   _\\/ |/ // \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| |  _| / \\|| / \\|| | \\|  | |   | | |||  /  |   / | |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| |_//| \\_/|| \\_/|| |_/|  | |_/\\| \\_/||  \\_ |   \\ \\_/\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\\____\\\\____/\\____/\\____/  \\____/\\____/\\____/\\_|\\_\\(_)\n");
}

void displayInvalidSelection()
{
    printf("\n");
    printf("\t\t\t\t\t\t\t ____________________\n");
    printf("\t\t\t\t\t\t\t|                    |\n");
    printf("\t\t\t\t\t\t\t| INVALID SELECTION! |\n");
    printf("\t\t\t\t\t\t\t|____________________|\n");
    printf("\n");
}

void displayNoDonkeySelected()
{
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t______________________________________________________________\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                                                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|               CAUTION! - No Donkeys are selected            |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|_____________________________________________________________|\n");
    printf("\n");
}

void speedUpNotApplied()
{
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t______________________________________________________________\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|                                                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| SPEEDUP NOT APPLIED! - Any Donkey CANNOT be less than 1     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|_____________________________________________________________|\n");
    printf("\n");
}

void displayFinalGameStats(int nD1, int nD2, int nD3, int nD4, int nSpeedups, int nTime_count)
{
    printf("\n");
    printf("\t\t\t\t\t\t\t _____________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t\t|                                                                                                                             |\n");
    printf("\t\t\t\t\t\t\t|----------------------------------------------------/ GAME OVER! /-----------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t|_____________________________________________________________________________________________________________________________|\n");
    printf("\n");
    printf("\t\t\t\t\t\t\tDONKEY SPEED: \n");
    printf("\t\t\t\t\t\t\t| D1 = %d | D2 = %d | D3 = %d | D4 = %d |\n", nD1, nD2, nD3, nD4);
    printf("\t\t\t\t\t\t\tSPEEDUPS: %d\n", nSpeedups);
    printf("\t\t\t\t\t\t\tELAPSED: %d\n", nTime_count);
}