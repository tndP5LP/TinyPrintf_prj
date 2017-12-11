/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>


int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
	
	/* Start SCB UART module */
	UART_dbg_Start();
	/* initialize tinyprintf with PSoC putchar function */
	init_printf(NULL,putdata);

    CyGlobalIntEnable; /* Uncomment this line to enable global interrupts. */
	
	/* tinyprintf supports the following formats:
	
	'd' int as a signed decimal number
	'u' uint as a decimal number
	'c' character
	's' null terminated string
	'x' / 'X' hexadecimal with lower / upper case letters
	
	*/
	

	/* Place your application code here. */

	UART_dbg_PutString("USB_UART\n");
	NewLine();
	NewLine();

	/* printf examples */

	UART_dbg_PutString("printf Examples");
	NewLine();
	NewLine();
    /* Run the TinyPrintf example */
    tpf_test();
    
    
    for(;;)
    {

    }
}

/* [] END OF FILE */