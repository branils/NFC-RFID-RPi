/**
* used the example source of NfcrdlibEx1_BasicDiscoveryLoop that uses the Discovery loop implementation.
* and only added the following:
*
*/
/**
* Reader Library Headers

/* lots of includes */

#include <Example1_incl_WiringPi.h>

/*added: WiringPI Header */
/*************************************************/
#include <wiringPi.h>
#include <stdio.h>

#define    LED    21 //BCM Number GPIO21 !

/*************************************************/

/*******************************************************************************
**   Global Defines
*******************************************************************************/

/*  ...  */

/*******************************************************************************
**   Static Defines
*******************************************************************************/
/*  ...  */

/*******************************************************************************
**   Function Declarations
*******************************************************************************/
/*  ...  */

/*******************************************************************************
**   Function Definitions
*******************************************************************************/

/* BLINK ROUTINE *******/
 /*   remember: #define    LED    21 //BCM Number GPIO21!!!!! */

  int blink_led(void)
  {
    DEBUG_PRINTF("Raspberry Pi blink\n") ;

    wiringPiSetupGpio();
    pinMode(LED, OUTPUT) ;
      int x;
    for (x=0; x<2; x++)
    {
      digitalWrite(LED, 1);    // On, instead of HIGH you could write 1
      delay(500);        // mS
      digitalWrite(LED, 0) ;    // Off
      delay(500) ;
    }
    return 0;
  }
/* BLINK ROUTINE *******/
 
                  
/*******************************************************************************
**   Main Function
*******************************************************************************/
int main (void)
{
        /*  ...  */
            else if((status & PH_ERR_MASK) == PHAC_DISCLOOP_DEVICE_ACTIVATED)
            {
                /* BLINK ROUTINE *******/
                blink_led();
               /* BLINK ROUTINE *******/
                DEBUG_PRINTF (" \n Card detected and activated successfully... \n");
                /*  ...  */
            }
    /*  ...  */
}
/*  ...  */
