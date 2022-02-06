/******************************************
File Name: functions.h

Author: Jerrick Ezekiel Q. Santos 
Last Update: Feruary 6, 2022

This file contains all the game mechanic functions that are called in main
******************************************/

/**
 * @brief - checks if the owner's position is the same as the selected donkey 
 * IF the position of the owner is NOT the same as the selected donkey THEN return (0 or FALSE)
 * IF the position of the owner is the SAME as the selected donkey THEN return (1 or TRUE)
 * 
 * Example: Donkey 1 = 3, nD3 = 1, nOWM = 1 -> return 1
 * Example: Donkey 2 = 4, nD4 = 1, nOWM = 0 -> return 0
 * Example: Donkey 1 = 2, nD2 = 0, nOWM = 1 -> return 0
 * 
 * @param nDonkey - donkey selector 1 (user input)
 * @param nD1M - nDonkey1 value for movement
 * @param nD2M - nDonkey2 value for movement
 * @param nD3M - Donkey3 value for movement
 * @param nD4M - Donkey4 value for movement
 * @param nOWM - Owner value for movement
 * @return int - if the user's selected donkey movement is possible (return true (1) or false (0))
 */
int checkOwnerMovement(int nDonkey, int nD1M, int nD2M, int nD3M, int nD4M, int nOWM)
{
    //the DXchecks are representations of the donkey's movements (DXMs)
    int D1check = nD1M, D2check = nD2M, D3check = nD3M, D4check = nD4M;

        if (nDonkey == 1) //check the user input for nDonkey1 and nDonkey2
        {
            if (D1check != nOWM) //Check if the current position of the donkey is NOT EQUAL to OWNER MOVEMENT
            {
                return 0;
            }
            else if (D1check == nOWM)
            {
                return 1;
            }
            
        }
        else if (nDonkey == 2)
        {
            if (D2check != nOWM)
            {
                return 0;
            }
            else if (D2check == nOWM)
            {
                return 1;
            }
            
        }
        else if (nDonkey == 3)
        {
            if (D3check != nOWM)
            {
                return 0;
            }
            else if (D3check == nOWM)
            {
                return 1;
            }
            
        }
        else if (nDonkey == 4)
        {
            if (D4check != nOWM)
            {
                return 0;
            }
            else if (D4check == nOWM)
            {
                return 1;
            }
            
        }
        else if (nDonkey > 4)
        {
            return 0;
        }
        else if (nDonkey == 0)
        {
            return 1;
        }
        
}

/**
 * @brief moves the donkey from one stable to another based on current value - From User Selection (0 or 1)
 * 
 * Example: Donkey 1 = 3, nD3M = 0 -> nD3M = 1 
 * Example: Donkey 2 = 1, nD1M = 1 -> nD1M = 0 
 * Example: Donkey 1 = 2, nD2M = 0 -> nD2M = 1 
 * 
 * @param nDonkey - donkey selector (user input)
 * @param nD1M - Donkey1 value for movement
 * @param nD2M - Donkey2 value for movement
 * @param nD3M - Donkey3 value for movement
 * @param nD4M - Donkey4 value for movement
 * @param nOWM - Owner value for movement
 */
void donkeyMover(int nDonkey, int *nD1M, int *nD2M, int *nD3M, int *nD4M)
{
    int i;
    for (i = 1; i <= nDonkey; i++)
    {
            if (nDonkey == i)
            {
                if (i == 1)
                {
                    if (*nD1M == 0)
                    {
                        (*nD1M)++;
                    }
                    else if (*nD1M == 1)
                    {
                        (*nD1M)--;
                    }
                }
                else if (i == 2)
                {
                    if (*nD2M == 0)
                    {
                        (*nD2M)++;
                    }
                    else if (*nD2M == 1)
                    {
                        (*nD2M)--;
                    }
                }
                else if (i == 3)
                {
                    if (*nD3M == 0)
                    {
                        (*nD3M)++;
                    }
                    else if (*nD3M == 1)
                    {
                        (*nD3M)--;
                    }
                }
                else if (i == 4)
                {
                    if (*nD4M == 0)
                    {
                        (*nD4M)++;
                    }
                    else if (*nD4M == 1)
                    {
                        (*nD4M)--;
                    }
                }
                
            }
            
    }
}

/**
 * @brief Get the Donkey Equivalent Speed object 
 * 
 * Example: Donkey1 = 3 -> nDonkeyEquival += nD3
 * Example: Donkey2 = 4 -> nDonkeyEquival += nD4
 * Example: Donkey1 = 1 -> nDonkeyEquival += nD1
 * 
 * @param nDonkey - donkey selector (user input)
 * @param nD1M - Donkey1 value for movement
 * @param nD2M - Donkey2 value for movement
 * @param nD3M - Donkey3 value for movement
 * @param nD4M - Donkey4 value for movement
 * @param nOWM - Owner value for movement
 * @return nDonkeyEquival (equivalent speed value of selected donkey)
 */
int getDonkeyEquivalentSpeed(int nDonkey, int nD1, int nD2, int nD3, int nD4)
{
    int nDonkeyEquival = 0;

    if (nDonkey == 1)
    {
        return nDonkeyEquival += nD1;
    }
    else if (nDonkey == 2)
    {
        return nDonkeyEquival += nD2;
    }
    else if (nDonkey == 3)
    {
        return nDonkeyEquival += nD3;
    }
    else if (nDonkey == 4)
    {
        return nDonkeyEquival += nD4;
    }
    else
    {
        return nDonkeyEquival;
    }
}
/**
 * @brief Records  the Elapsed time of the 2 Donkeys and compares which nDonkeyEquival values from getDonkeyEquivalentSpeed() has slower (higher) speed value.
 * 
 * Example: nDonkeyEquival1 = 3, nDonkeyEquival2 = 6 -> return nTimecount+= nDonkeyEquival2 (higher Equivalent Value)
 * Example: nDonkeyEquival1 = 4, nDonkeyEquival2 = 2 -> return nTimecount+= nDonkeyEquival1 (higher Equivalent Value)
 * Example: nDonkeyEquival1 = 2, nDonkeyEquival2 = 6 -> return nTimecount+= nDonkeyEquival2 (higher Equivalent Value)
 * 
 * @param nDonkeyEquival1 - Equivalent speed value of Donkey 1 based on user input
 * @param nDonkeyEquival2 - Equivalent speed value of Donkey 2 based on user input
 * @param nD1 - Value of Donkey 1 
 * @param nD2 - Value of Donkey 2 
 * @param nD3 - Value of Donkey 3
 * @param nD4 - Value of Donkey 4
 * @param nTime_count - time counter/time elapsed counter of the game
 * @return int - will return an INT value to the nTime_count variable on the main function
 */
int getTimeElapsed(int nDonkeyEquival1, int nDonkeyEquival2, int nTime_count)
{
        if (nDonkeyEquival1 > nDonkeyEquival2)
        {
            return nTime_count += nDonkeyEquival1;
        }
        else if (nDonkeyEquival1 == 0 && nDonkeyEquival2 == 0)
        {
            return nTime_count;
        }
        else
        {
            return nTime_count += nDonkeyEquival2;
        }
}

/**
 * @brief - increments the selected donkeys of the user by 1 each time after they are selected
 * 
 * Example: Donkey1 = 3 -> *(nD3)++
 * Example: Donkey2 = 4 -> *(nD4)++
 * Example: Donkey1 = 2 -> *(nD2)++
 * 
 * @param nDonkey - donkey selector (For nDonkey1 and nDonkey2 inputs)
 * @param nD1 - Value of Donkey 1 
 * @param nD2 - Value of Donkey 2 
 * @param nD3 - Value of Donkey 3
 * @param nD4 - Value of Donkey 4
 */
void donkeySlowDown(int nDonkey, int *nD1, int *nD2, int *nD3, int *nD4)
{
        if (nDonkey == 1)
        {
            (*nD1)++;
        }
        else if (nDonkey == 2)
        {
            (*nD2)++;
        }
        else if (nDonkey == 3)
        {
            (*nD3)++;
        }
        else if (nDonkey == 4)
        {
            (*nD4)++;
        }
}

/**
 * @brief APPLIES the powerup speedup if the selected donkey is greather than 2 
 * UPDATES the nDonkey_speedChecks if the seelected donkey is less than or equal to 2
 * 
 * Example: nSpeedups = 2, nSpeedups_count = 1, Donkey 1 = 2, nD2 = 3 -> nD2 = 3 - 2 = 1 
 * Example: nSpeedups = 0, -> NO CHANGE 
 * Example: nSpeedups = 1, nSpeedups_count = 1, Donkey 2 = 1, nD2 = 1 -> nDonkey_speedChecks = 1;
 * 
 * @param nDonkey - donkey selector (For nDonkey1 and nDonkey2 inputs)
 * @param nSpeedups - number of speedups available 
 * @param nSpeedups_count - speedups counter
 * @param nD1 - Value of Donkey 1 
 * @param nD2 - Value of Donkey 2 
 * @param nD3 - Value of Donkey 3
 * @param nD4 - Value of Donkey 4
 * @param nDonkey_speedChecks - checks if speedup is valid to take effect or not
 */
void getSpeedups(int nDonkey, int *nSpeedups, int *nSpeedups_count, int *nD1, int *nD2, int *nD3, int *nD4, int *nDonkey_speedChecks)
{
        if (*nSpeedups > 0)
        {

            if (*nSpeedups_count == 1)
            {
                if (nDonkey == 1)
                {
                    if (*nD1 > 2)
                    {
                        *nD1 -= 2;
                    }
                    else
                    {
                        *nDonkey_speedChecks = 1;
                    }
                }
                else if (nDonkey == 2)
                {
                    if (*nD2 > 2)
                    {
                         *nD2 -= 2;
                    }
                    else
                    {
                        *nDonkey_speedChecks = 1;
                    }
                }
                else if (nDonkey == 3)
                {
                    if (*nD3 > 2)
                    {
                         *nD3 -= 2;
                    }
                    else
                    {
                        *nDonkey_speedChecks = 1;
                    }
                }
                else if (nDonkey == 4)
                {
                    if (*nD4 > 2)
                    {
                         *nD4 -= 2;
                    }
                    else
                    {
                        *nDonkey_speedChecks = 1;
                    }
                }
                
            }
        }
}

/**
 * @brief - checks IF the user input (nDonkey) is valid (DX > 2) to be deducted in speedups (-2) then nDonkey_Speedchecks = 0
 * IF NOT THEN - nDonkey_speedChecks = 1 (DX <= 2)
 * 
 * Example: nSpeedups = 2, nSpeedups_count = 1, Donkey 1 = 2, nD2 = 2 -> nDonkey_speedChecks = 1;
 * Example: nSpeedups = 0, -> NO CHANGE 
 * Example: nSpeedups = 1, nSpeedups_count = 1, Donkey 2 = 4, nD4 = 6 -> NO CHANGE
 * 
 * @param nDonkey - donkey selector (For nDonkey1 and nDonkey2 inputs)
 * @param nSpeedups - number of speedups available 
 * @param nSpeedups_count - speedups counter
 * @param nD1 - Value of Donkey 1 
 * @param nD2 - Value of Donkey 2 
 * @param nD3 - Value of Donkey 3
 * @param nD4 - Value of Donkey 4
 * @param nDonkey_speedChecks - checks if speedup is valid to take effect or not
 */
void checkSpeedups(int nDonkey, int *nSpeedups, int *nSpeedups_count, int *nD1, int *nD2, int *nD3, int *nD4, int *nDonkey_speedChecks)
{
        if (*nSpeedups > 0)
        {
            if (*nSpeedups_count == 1)
            {
                if (nDonkey == 1)
                {
                    if (*nD1 <= 2)
                    {
                        *nDonkey_speedChecks = 1;
                    }
                }
                else if (nDonkey == 2)
                {
                    if (*nD2 <= 2)
                    {
                        *nDonkey_speedChecks = 1;
                    }                    
                }
                else if (nDonkey == 3)
                {
                    if (*nD3 <= 2)
                    {
                        *nDonkey_speedChecks = 1;
                    }                   
                }
                else if (nDonkey == 4)
                {
                    if (*nD4 <= 2)
                    {
                        *nDonkey_speedChecks = 1;
                    }                    
                }
                
            }
        }
}

/**
 * @brief - check if all positions are on the othe side of the STABLE
 * 
 * Example: nD1M = 0, nD2M = 1, nD3M = 0, nD4M = 1, nOWM = 1 -> return 0
 * Example: nD1M = 1, nD2M = 1, nD3M = 1, nD4M = 1, nOWM = 1 -> return 5
 * Example: nD1M = 1, nD2M = 0, nD3M = 1, nD4M = 0, nOWM = 1 -> return 0
 * 
 * @param nD1M nDonkey1 value for movement
 * @param nD2M nDonkey2 value for movement
 * @param nD3M Donkey3 value for movement
 * @param nD4M Donkey4 value for movement
 * @param nOWM Owner value for movement
 * @return int - return 5 if true, return 0 if not
 */
int getEndGameVerification(int nD1M, int nD2M, int nD3M, int nD4M, int nOWM)
{
    //IF ALL positions of the DONKEY and the OWNER is in the same position, RETURN 5
    if (nD1M == 1 && nD2M == 1 && nD3M == 1 && nD4M == 1 && nOWM == 1)
    {
        return 5; 
    }
    else
    {
        return 0;
    }
    
}
