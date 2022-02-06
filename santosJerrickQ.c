#include <stdio.h>
#include "display.h"
#include "functions.h"

int main()
{
    int nDonkey1, nDonkey2; //Donkey Selection
    int nD1 = 1, nD2 = 2, nD3 = 4, nD4 = 6, nOW; //Values of Donkeys 
    int nD1M = 0, nD2M = 0, nD3M = 0, nD4M = 0, nOWM = 0; //Donkey Movements
    int nTime_count = 0, nSpeedups = 2, nSpeedups_count = 0; //Game Mechs 
    int nDonkeyEquival1, nDonkeyEquival2; //Variables to check which donkey has the slowest speed 
    int nCount = 0; //Counter for how many are in STABLE 2 (including the OWNER)
    int nDonkey1_speedCheck = 0, nDonkey2_speedCheck = 0; //check if there is change when speedup is chosen
    int nWelcome, nEnd; //Game initializations

    //WELCOME PROMPT 
    displayWelcomePrompt();
    printf("\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t[Type 1] to START GAME: ");
    scanf("%d", &nWelcome);
    printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\n");
    if (nWelcome == 1)
    {
    //Initial Prompt    
    displayStableHeader();
    displayDonkeys(nD1M, nD2M, nD3M, nD4M, nOWM);
    printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------------\n");

    while (nCount != 5)
    {
        //USER INPUTS!----------------------------------------------------------------------------------------------------------------
        printf("\n");
        printf("\t\t\t\t\t\t\tDONKEY SPEED: \n");
        printf("\t\t\t\t\t\t\t| D1 = %d | D2 = %d | D3 = %d | D4 = %d |\n", nD1, nD2, nD3, nD4);
        printf("\t\t\t\t\t\t\tSPEED UPS: %d\n", nSpeedups);
        printf("\t\t\t\t\t\t\tTIME ELAPSED: %d\n", nTime_count);
        do
        {
            printf("\t\t\t\t\t\t\tSELECT FIRST DONKEY: ");
            scanf("%d", &nDonkey1);
            printf("\t\t\t\t\t\t\tSELECT SECOND DONKEY: ");
            scanf("%d", &nDonkey2);

            /**
             * @brief CHECKS if the input to nDonkey1 and nDonkey2 are valid
             * This Loop will keep occuring until nDonkey1 and nDonkey2 becomes valid 
             * IF either nDonkey1 and nDonkey2 has an invalid input the checkOwnerMovement will return 0 (meaninf INVALID)
             */
            if (checkOwnerMovement(nDonkey1, nD1M, nD2M, nD3M, nD4M, nOWM) == 0 || checkOwnerMovement(nDonkey2, nD1M, nD2M, nD3M, nD4M, nOWM) == 0)
            {
                displayInvalidSelection();
            }
            

        } while (checkOwnerMovement(nDonkey1, nD1M, nD2M, nD3M, nD4M, nOWM) == 0 || checkOwnerMovement(nDonkey2, nD1M, nD2M, nD3M, nD4M, nOWM) == 0);

        if (nSpeedups > 0)
        {
            printf("\t\t\t\t\t\t\tUSE SPEEDUP [TYPE 1]: ");
            scanf("%d", &nSpeedups_count);
        }
        
        printf("\n");
        printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------------\n");
        
        //DISPLAY FEATURES!-------------------------------------------------------------------------------------------------------------- 

        if (nDonkey1 == nDonkey2)
        {
            donkeyMover(nDonkey1, &nD1M, &nD2M, &nD3M, &nD4M);
        }
        else
        {
            donkeyMover(nDonkey1, &nD1M, &nD2M, &nD3M, &nD4M);
            donkeyMover(nDonkey2, &nD1M, &nD2M, &nD3M, &nD4M);
        }

        //OWNER MOVEMENT
        if (nDonkey1 == 0 && nDonkey2 == 0)
        {
            printf("");
        }
        else
        {
            if (nOWM == 0)
            {
                nOWM++;
            }
            else if (nOWM == 1)
            {
                nOWM--;
            }
        }
        
        //MAIN GAME LOGIC!----------------------------------------------------------------------------------------------------------------

        //POSSIBLE ERROR MESSAGE - if no Donkeys are selected

        if (nDonkey1 == 0 && nDonkey2 == 0)
        {
            displayNoDonkeySelected();
        }

        //SPEEDUPS (The speedup application depends on certain conditions of the donkey inputs)
        if (nDonkey1 == nDonkey2)
        {
            getSpeedups(nDonkey1, &nSpeedups, &nSpeedups_count, &nD1, &nD2, &nD3, &nD4, &nDonkey1_speedCheck);
        }
        else
        {  
            //checks if the applied speed up is valid or not
            checkSpeedups(nDonkey1, &nSpeedups, &nSpeedups_count, &nD1, &nD2, &nD3, &nD4, &nDonkey1_speedCheck);
            checkSpeedups(nDonkey2, &nSpeedups, &nSpeedups_count, &nD1, &nD2, &nD3, &nD4, &nDonkey2_speedCheck);

            if (nDonkey1_speedCheck == 0 && nDonkey2_speedCheck == 0)
            {
                //Applies the speedup powerup if nDonkey1_speedCheck and nDonkey2_speedCheck are 0
                getSpeedups(nDonkey1, &nSpeedups, &nSpeedups_count, &nD1, &nD2, &nD3, &nD4, &nDonkey1_speedCheck);
                getSpeedups(nDonkey2, &nSpeedups, &nSpeedups_count, &nD1, &nD2, &nD3, &nD4, &nDonkey2_speedCheck);
            }
            
        }

        //once the speedup is deducted or not, then it will check the following conditions 
        if (nSpeedups_count == 1 && nDonkey1_speedCheck == 0 && nDonkey2_speedCheck == 0 && nSpeedups > 0 && (nDonkey1 != 0 || nDonkey2 != 0))
        {
            nSpeedups--;
        }
        else if (nSpeedups_count == 1 && (nDonkey1_speedCheck != 0 || nDonkey2_speedCheck != 0))
        {
            speedUpNotApplied();
        }

        //REVERT speed checks to 0 after checking
        nDonkey1_speedCheck = 0;
        nDonkey2_speedCheck = 0;

        //TIME ELAPSED------------------------------------------------ 

        //GETS the equivalent speed value of the selected Donkey
        nDonkeyEquival1 = getDonkeyEquivalentSpeed(nDonkey1, nD1, nD2, nD3, nD4);
        nDonkeyEquival2 = getDonkeyEquivalentSpeed(nDonkey2, nD1, nD2, nD3, nD4);

        //COMPARES nDonkeyEquival1 and nDonkeyEquival2 and adds it to the nTimeElapsed variable
        nTime_count = getTimeElapsed(nDonkeyEquival1, nDonkeyEquival2, nD1, nD2, nD3, nD4, nTime_count);

        //SLOWDOWN OF EACH DONKEY------------------------------------------------ 
        if (nDonkey1 == nDonkey2)
        {
            donkeySlowDown(nDonkey1, &nD1, &nD2, &nD3, &nD4);
        }
        else
        {
            donkeySlowDown(nDonkey1, &nD1, &nD2, &nD3, &nD4);
            donkeySlowDown(nDonkey2, &nD1, &nD2, &nD3, &nD4);
        }
        
        displayStableHeader();
        displayDonkeys(nD1M, nD2M, nD3M, nD4M, nOWM);
        printf("\n");
        printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------------\n");
        nCount = getEndGameVerification(nD1M, nD2M, nD3M, nD4M, nOWM);
        
    }

    //SHOW FINAL GAME STATS
    displayFinalGameStats(nD1, nD2, nD3, nD4, nSpeedups, nTime_count);

    // DISPLAY FINAL ELAPSED TIME
    if (nTime_count > 13)
    {
        displaySlow();
    }
    else
    {
        displayFast();
    }

    printf("\n");
    do
    {
        printf("\t\t\t\t\t\t\t[Type 0] to EXIT GAME: ");
        scanf("%d", nEnd);
    } while (nEnd == 0);
    
    }
    else
    {
        printf("\t\t\t\t\t\t\tGAME TERMINATED - Please relaunch program to restart.");
        printf("\n");
    }
    do
    {
        printf("\t\t\t\t\t\t\t[Type 0] to EXIT GAME: ");
        scanf("%d", &nEnd);
    } while (nEnd != 0);
    
 
    return 0;
}

/******************************************************************************
This is to certify that this project is my own work, based on my personal
efforts in studying and applying the concepts learned. I have constructed
the functions and their respective algorithms and corresponding code by
myself. The program was run, tested, and debugged by my own efforts. I
further certify that I have not copied in part or whole or otherwise
plagiarized the work of other students and/or persons.
<Jerrick Ezekiel Q. Santos> - <12119326> - <S26>
******************************************************************************/