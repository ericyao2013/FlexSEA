/*******************************************************************************
* FILENAME: cyfitter_cfg.c
* PSoC Creator 3.0 SP2
*
* Description:
* This file is automatically generated by PSoC Creator with device 
* initialization code.  Except for the user defined sections in
* CyClockStartupError(), this file should not be modified.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include <string.h>
#include <cytypes.h>
#include <cydevice_trm.h>
#include <cyfitter.h>
#include <CyLib.h>
#include <cyfitter_cfg.h>

#define CY_NEED_CYCLOCKSTARTUPERROR 1


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
    #define CYPACKED 
    #define CYPACKED_ATTR __attribute__ ((packed))
    #define CYALIGNED __attribute__ ((aligned))
    #define CY_CFG_UNUSED __attribute__ ((unused))
    #define CY_CFG_SECTION __attribute__ ((section(".psocinit")))
    
    #if defined(__ARMCC_VERSION)
        #define CY_CFG_MEMORY_BARRIER() __memory_changed()
    #else
        #define CY_CFG_MEMORY_BARRIER() __sync_synchronize()
    #endif
    
#elif defined(__ICCARM__)
    #include <intrinsics.h>

    #define CYPACKED __packed
    #define CYPACKED_ATTR 
    #define CYALIGNED _Pragma("data_alignment=4")
    #define CY_CFG_UNUSED _Pragma("diag_suppress=Pe177")
    #define CY_CFG_SECTION _Pragma("location=\".psocinit\"")
    
    #define CY_CFG_MEMORY_BARRIER() __DMB()
    
#else
    #error Unsupported toolchain
#endif


CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n);
CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n)
{
	(void)memset(s, 0, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}



/* Clock startup error codes                                                   */
#define CYCLOCKSTART_NO_ERROR    0u
#define CYCLOCKSTART_XTAL_ERROR  1u
#define CYCLOCKSTART_32KHZ_ERROR 2u
#define CYCLOCKSTART_PLL_ERROR   3u

#ifdef CY_NEED_CYCLOCKSTARTUPERROR
/*******************************************************************************
* Function Name: CyClockStartupError
********************************************************************************
* Summary:
*  If an error is encountered during clock configuration (crystal startup error,
*  PLL lock error, etc.), the system will end up here.  Unless reimplemented by
*  the customer, this function will stop in an infinite loop.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode);
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode)
{
    /* To remove the compiler warning if errorCode not used.                */
    errorCode = errorCode;

    /* `#START CyClockStartupError` */

    /* If we have a clock startup error (bad MHz crystal, PLL lock, etc.),  */
    /* we will end up here to allow the customer to implement something to  */
    /* deal with the clock condition.                                       */

    /* `#END` */

    /* If nothing else, stop here since the clocks have not started         */
    /* correctly.                                                           */
    while(1) {}
}
#endif

#define CY_CFG_BASE_ADDR_COUNT 42u
CYPACKED typedef struct
{
	uint8 offset;
	uint8 value;
} CYPACKED_ATTR cy_cfg_addrvalue_t;

#define cy_cfg_addr_table ((const uint32 CYFAR *)0x48000000u)
#define cy_cfg_data_table ((const cy_cfg_addrvalue_t CYFAR *)0x480000A8u)

/* IDMUX_IRQ Address: CYREG_IDMUX_IRQ_CTL0 Size (bytes): 8 */
#define BS_IDMUX_IRQ_VAL ((const uint8 CYFAR *)0x48001068u)

/* UDB_0_1_1_CONFIG Address: CYDEV_UCFG_B1_P4_U0_BASE Size (bytes): 128 */
#define BS_UDB_0_1_1_CONFIG_VAL ((const uint8 CYFAR *)0x48001070u)

/* UCFG_BCTL0 Address: CYREG_BCTL0_MDCLK_EN Size (bytes): 16 */
#define BS_UCFG_BCTL0_VAL ((const uint8 CYFAR *)0x480010F0u)

/* IOPINS0_0 Address: CYREG_PRT0_DR Size (bytes): 10 */
#define BS_IOPINS0_0_VAL ((const uint8 CYFAR *)0x48001100u)

/* IOPINS0_7 Address: CYREG_PRT12_DR Size (bytes): 10 */
#define BS_IOPINS0_7_VAL ((const uint8 CYFAR *)0x4800110Cu)

/* IOPINS0_8 Address: CYREG_PRT15_DR Size (bytes): 10 */
#define BS_IOPINS0_8_VAL ((const uint8 CYFAR *)0x48001118u)

/* IOPINS0_1 Address: CYREG_PRT1_DM0 Size (bytes): 8 */
#define BS_IOPINS0_1_VAL ((const uint8 CYFAR *)0x48001124u)

/* IOPINS0_2 Address: CYREG_PRT2_DR Size (bytes): 10 */
#define BS_IOPINS0_2_VAL ((const uint8 CYFAR *)0x4800112Cu)

/* IOPINS0_3 Address: CYREG_PRT3_DM0 Size (bytes): 8 */
#define BS_IOPINS0_3_VAL ((const uint8 CYFAR *)0x48001138u)

/* IOPINS0_4 Address: CYREG_PRT4_DR Size (bytes): 10 */
#define BS_IOPINS0_4_VAL ((const uint8 CYFAR *)0x48001140u)

/* IOPINS0_5 Address: CYREG_PRT5_DM0 Size (bytes): 8 */
#define BS_IOPINS0_5_VAL ((const uint8 CYFAR *)0x4800114Cu)

/* IOPINS0_6 Address: CYREG_PRT6_DM0 Size (bytes): 8 */
#define BS_IOPINS0_6_VAL ((const uint8 CYFAR *)0x48001154u)

/* CYDEV_CLKDIST_ACFG0_CFG0 Address: CYREG_CLKDIST_ACFG0_CFG0 Size (bytes): 12 */
#define BS_CYDEV_CLKDIST_ACFG0_CFG0_VAL ((const uint8 CYFAR *)0x4800115Cu)


/*******************************************************************************
* Function Name: cfg_write_bytes32
********************************************************************************
* Summary:
*  This function is used for setting up the chip configuration areas that
*  contain relatively sparse data.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
static void cfg_write_bytes32(const uint32 addr_table[], const cy_cfg_addrvalue_t data_table[]);
static void cfg_write_bytes32(const uint32 addr_table[], const cy_cfg_addrvalue_t data_table[])
{
	/* For 32-bit little-endian architectures */
	uint32 i, j = 0u;
	for (i = 0u; i < CY_CFG_BASE_ADDR_COUNT; i++)
	{
		uint32 baseAddr = addr_table[i];
		uint8 count = (uint8)baseAddr;
		baseAddr &= 0xFFFFFF00u;
		while (count != 0u)
		{
			CY_SET_XTND_REG8((void CYFAR *)(baseAddr + data_table[j].offset), data_table[j].value);
			j++;
			count--;
		}
	}
}

/*******************************************************************************
* Function Name: ClockSetup
********************************************************************************
*
* Summary:
*  Performs the initialization of all of the clocks in the device based on the
*  settings in the Clock tab of the DWR.  This includes enabling the requested
*  clocks and setting the necessary dividers to produce the desired frequency. 
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void ClockSetup(void);
static void ClockSetup(void)
{
	uint32 timeout;
	uint8 pllLock;


	/* Configure Digital Clocks based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG0_CFG0), 0x0001u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DCFG0_CFG0 + 0x2u), 0x18u);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG1_CFG0), 0x0000u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DCFG1_CFG0 + 0x2u), 0x50u);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG2_CFG0), 0x000Cu);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DCFG2_CFG0 + 0x2u), 0x18u);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG3_CFG0), 0x0007u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DCFG3_CFG0 + 0x2u), 0x1Fu);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG4_CFG0), 0x0015u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DCFG4_CFG0 + 0x2u), 0x18u);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG5_CFG0), 0x031Fu);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DCFG5_CFG0 + 0x2u), 0x18u);

	/* Configure Analog Clocks based on settings from Clock DWR */
	CYCONFIGCPY((void CYFAR *)(CYREG_CLKDIST_ACFG0_CFG0), (const void CYFAR *)(BS_CYDEV_CLKDIST_ACFG0_CFG0_VAL), 12u);

	/* Configure ILO based on settings from Clock DWR */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_SLOWCLK_ILO_CR0), 0x06u);

	/* Configure XTAL based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_XMHZ_CFG0), 0x550Eu);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_FASTCLK_XMHZ_CSR), 0x05u);
	/* Wait up to 130000us for the XTAL to lock */
	CY_GET_XTND_REG8((void CYFAR *)CYREG_FASTCLK_XMHZ_CSR);
	for (timeout = 130000u / 10u; (timeout > 0u) && ((CY_GET_XTND_REG8((void CYFAR *)CYREG_FASTCLK_XMHZ_CSR) & 0x80u) != 0u); timeout--)
	{ 
		
		CyDelayCycles(10u * 48u); /* Delay 10us based on 48MHz clock */
	}
	if (timeout == 0u)
	{
		CyClockStartupError(CYCLOCKSTART_XTAL_ERROR);
	}

	/* Configure PLL based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_P), 0x0528u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_CR), 0x01u);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_CFG0), 0x2251u);
	/* Wait up to 250us for the PLL to lock */
	pllLock = 0u;
	for (timeout = 250u / 10u; (timeout > 0u) && (pllLock != 0x03u); timeout--)
	{ 
		pllLock = 0x03u & ((uint8)((uint8)pllLock << 1) | ((CY_GET_XTND_REG8((void CYFAR *)CYREG_FASTCLK_PLL_SR) & 0x01u) >> 0));
		CyDelayCycles(10u * 48u); /* Delay 10us based on 48MHz clock */
	}
	/* If we ran out of time the PLL didn't lock so go to the error function */
	if (timeout == 0u)
	{
		CyClockStartupError(CYCLOCKSTART_PLL_ERROR);
	}

	/* Configure Bus/Master Clock based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x0100u);

	/* Configure IMO based on settings from Clock DWR */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_FASTCLK_IMO_CR), 0x52u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_IMO_TR1), (CY_GET_XTND_REG8((void CYFAR *)CYREG_FLSHID_CUST_TABLES_IMO_USB)));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x07u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_BCFG0), 0x00u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_BCFG2), 0x48u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x00u);

	/* Configure USB Clock based on settings from Clock DWR */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_UCFG), 0x00u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_LD), 0x02u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DLY1), 0x04u);

	CY_SET_XTND_REG8((void CYFAR *)(CYREG_PM_ACT_CFG2), ((CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG2) | 0x3Fu)));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_PM_ACT_CFG1), ((CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG1) | 0x07u)));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_PM_ACT_CFG0), ((CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG0) | 0x80u)));
}


/* Analog API Functions */


/*******************************************************************************
* Function Name: AnalogSetDefault
********************************************************************************
*
* Summary:
*  Sets up the analog portions of the chip to default values based on chip
*  configuration options from the project.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void AnalogSetDefault(void);
static void AnalogSetDefault(void)
{
	uint8 bg_xover_inl_trim = CY_GET_XTND_REG8((void CYFAR *)(CYREG_FLSHID_MFG_CFG_BG_XOVER_INL_TRIM + 1u));
	uint8 cr4 = CY_GET_XTND_REG8((void CYFAR *)(CYREG_RESET_CR4));
	uint8 cr5 = CY_GET_XTND_REG8((void CYFAR *)(CYREG_RESET_CR5));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_BG_DFT0), (bg_xover_inl_trim & 0x07u));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_BG_DFT1), ((bg_xover_inl_trim >> 4) & 0x0Fu));
	/* Disable PRES while setting up SAR voltage reference */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_RESET_CR4), (cr4 | 0x03u));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_RESET_CR5), (cr5 | 0x03u));
	CY_SET_XTND_REG8((void CYFAR *)CYREG_PRT1_AG, 0x04u);
	CY_SET_XTND_REG16((void CYFAR *)CYREG_PRT3_AMUX, 0x600Fu);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_PRT4_AG, 0x03u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_BG_CR0, 0x09u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SAR0_CSR1, 0x40u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SAR0_CSR3, 0x40u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SAR1_CSR1, 0x40u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SAR1_CSR3, 0x40u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SC3_SW0, 0x04u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_DAC2_SW2, 0x04u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_DAC3_SW0, 0x20u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_CMP0_SW3, 0x40u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_CMP0_SW4, 0x10u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SAR0_SW3, 0x20u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SAR1_SW0, 0x40u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_SAR1_SW3, 0x20u);
	CY_SET_XTND_REG32((void CYFAR *)CYREG_OPAMP0_MX, 0x02020102u);
	CY_SET_XTND_REG16((void CYFAR *)CYREG_OPAMP2_MX, 0x0107u);
	CY_SET_XTND_REG8((void CYFAR *)CYREG_BUS_SW0, 0x01u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_RESET_CR5), (cr5));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_RESET_CR4), (cr4));
	CY_SET_XTND_REG8((void CYFAR *)CYREG_PUMP_CR0, 0x44u);
}


/*******************************************************************************
* Function Name: SetAnalogRoutingPumps
********************************************************************************
*
* Summary:
* Enables or disables the analog pumps feeding analog routing switches.
* Intended to be called at startup, based on the Vdda system configuration;
* may be called during operation when the user informs us that the Vdda voltage
* crossed the pump threshold.
*
* Parameters:
*  enabled - 1 to enable the pumps, 0 to disable the pumps
*
* Return:
*  void
*
*******************************************************************************/
void SetAnalogRoutingPumps(uint8 enabled)
{
	uint8 regValue = CY_GET_XTND_REG8((void CYFAR *)CYREG_PUMP_CR0);
	if (enabled != 0u)
	{
		regValue |= 0x22u;
	}
	else
	{
		regValue &= (uint8)~0x22u;
	}
	CY_SET_XTND_REG8((void CYFAR *)CYREG_PUMP_CR0, regValue);
}

#define CY_AMUX_UNUSED CYREG_BOOST_SR
static uint8 CYXDATA * const CYCODE AMux_1__outerAddr[6] = {
	(uint8 CYXDATA *)CYREG_SC3_SW8, 
	(uint8 CYXDATA *)CYREG_PRT1_AG, 
	(uint8 CYXDATA *)CYREG_PRT2_AG, 
	(uint8 CYXDATA *)CYREG_PRT2_AG, 
	(uint8 CYXDATA *)CYREG_PRT2_AG, 
	(uint8 CYXDATA *)CYREG_PRT4_AG, 
};

static const uint8 CYCODE AMux_1__outerMask[6] = {
	0x01u, 
	0x10u, 
	0x04u, 
	0x02u, 
	0x01u, 
	0x40u, 
};

static uint8 CYXDATA * const CYCODE AMux_1__innerAddr[4] = {
	(uint8 CYXDATA *)CYREG_SAR0_SW0, 
	(uint8 CYXDATA *)CYREG_SAR0_SW0, 
	(uint8 CYXDATA *)CYREG_SAR0_SW0, 
	(uint8 CYXDATA *)CYREG_SAR0_SW0, 
};

static const uint8 CYCODE AMux_1__innerMask[4] = {
	0x01u, 
	0x04u, 
	0x02u, 
	0x40u, 
};

static const uint8 CYCODE AMux_1__innerMap[6] = {
	0u, 
	0u, 
	1u, 
	2u, 
	0u, 
	3u, 
};

static uint8 AMux_1__armsEnabled = 0u;
static uint8 AMux_1__refCnt[] = {0u, 0u, 0u, 0u};

/*******************************************************************************
* Function Name: AMux_1_Set
********************************************************************************
* Summary:
*  This function is used to set a particular channel as active on the AMux.
*
* Parameters:  
*   channel - The mux channel input to set as active
*
* Return:
*   void
*
*******************************************************************************/
void AMux_1_Set(uint8 channel)
{
	uint8 i;
	uint8 channelMask = (1UL << channel);
	if ((channel < 6u) && ((AMux_1__armsEnabled & channelMask) == 0u))
	{
		AMux_1__armsEnabled |= channelMask;
		*AMux_1__outerAddr[channel] |= AMux_1__outerMask[channel];
		i = AMux_1__innerMap[channel];
		if (AMux_1__refCnt[i] == 0u)
		{
			*AMux_1__innerAddr[i] |= AMux_1__innerMask[i];
		}
		AMux_1__refCnt[i]++;
	}
}

/*******************************************************************************
* Function Name: AMux_1_Unset
********************************************************************************
* Summary:
*  This function is used to clear a particular channel from being active on the
*  AMux.
*
* Parameters:  
*   channel - The mux channel input to mark inactive
*
* Return:
*   void
*
*******************************************************************************/
void AMux_1_Unset(uint8 channel)
{
	uint8 i;
	uint8 channelMask = (1UL << channel);
	if ((channel < 6u) && ((AMux_1__armsEnabled & channelMask) != 0u))
	{
		AMux_1__armsEnabled &= (uint8)~channelMask;
		*AMux_1__outerAddr[channel] &= (uint8)~AMux_1__outerMask[channel];
		i = AMux_1__innerMap[channel];
		AMux_1__refCnt[i]--;
		if (AMux_1__refCnt[i] == 0)
		{
			*AMux_1__innerAddr[i] &= (uint8)~AMux_1__innerMask[i];
		}
	}
}

/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
uint8 CYXDATA * const CYCODE AMux_2__addrTable[4] = {
	(uint8 CYXDATA *)CYREG_PRT0_AMUX, (uint8 CYXDATA *)CYREG_DSM0_SW3, 
	(uint8 CYXDATA *)CYREG_PRT0_AG, (uint8 CYXDATA *)CYREG_DSM0_SW0, 
};

/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
const uint8 CYCODE AMux_2__maskTable[4] = {
	0x20u, 0x01u, 
	0x08u, 0x80u, 
};

/*******************************************************************************
* Function Name: AMux_2_Set
********************************************************************************
* Summary:
*  This function is used to set a particular channel as active on the AMux.
*
* Parameters:  
*   channel - The mux channel input to set as active
*
* Return:
*   void
*
*******************************************************************************/
void AMux_2_Set(uint8 channel)
{
	if (channel < 2)
	{
		channel += channel;
		*AMux_2__addrTable[channel] |= AMux_2__maskTable[channel];
		channel++;
		*AMux_2__addrTable[channel] |= AMux_2__maskTable[channel];
	}
}

/*******************************************************************************
* Function Name: AMux_2_Unset
********************************************************************************
* Summary:
*  This function is used to clear a particular channel from being active on the
*  AMux.
*
* Parameters:  
*   channel - The mux channel input to mark inactive
*
* Return:
*   void
*
*******************************************************************************/
void AMux_2_Unset(uint8 channel)
{
	if (channel < 2)
	{
		channel += channel;
		*AMux_2__addrTable[channel] &= (uint8)~AMux_2__maskTable[channel];
		channel++;
		*AMux_2__addrTable[channel] &= (uint8)~AMux_2__maskTable[channel];
	}
}

/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
uint8 CYXDATA * const CYCODE ADC_DelSig_1_AMux__addrTable[2] = {
	(uint8 CYXDATA *)CYREG_DSM0_SW3, 
	(uint8 CYXDATA *)CY_AMUX_UNUSED, 
};

/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
const uint8 CYCODE ADC_DelSig_1_AMux__maskTable[2] = {
	0x40u, 
	0x00u, 
};

/*******************************************************************************
* Function Name: ADC_DelSig_1_AMux_Set
********************************************************************************
* Summary:
*  This function is used to set a particular channel as active on the AMux.
*
* Parameters:  
*   channel - The mux channel input to set as active
*
* Return:
*   void
*
*******************************************************************************/
void ADC_DelSig_1_AMux_Set(uint8 channel)
{
	if (channel < 2)
	{
		*ADC_DelSig_1_AMux__addrTable[channel] |= ADC_DelSig_1_AMux__maskTable[channel];
	}
}

/*******************************************************************************
* Function Name: ADC_DelSig_1_AMux_Unset
********************************************************************************
* Summary:
*  This function is used to clear a particular channel from being active on the
*  AMux.
*
* Parameters:  
*   channel - The mux channel input to mark inactive
*
* Return:
*   void
*
*******************************************************************************/
void ADC_DelSig_1_AMux_Unset(uint8 channel)
{
	if (channel < 2)
	{
		*ADC_DelSig_1_AMux__addrTable[channel] &= (uint8)~ADC_DelSig_1_AMux__maskTable[channel];
	}
}



/*******************************************************************************
* Function Name: cyfitter_cfg
********************************************************************************
* Summary:
*  This function is called by the start-up code for the selected device. It
*  performs all of the necessary device configuration based on the design
*  settings.  This includes settings from the Design Wide Resources (DWR) such
*  as Clocks and Pins as well as any component configuration that is necessary.
*
* Parameters:  
*   void
*
* Return:
*   void
*
*******************************************************************************/

void cyfitter_cfg(void)
{
#ifdef CYGlobalIntDisable
	/* Disable interrupts by default. Let user enable if/when they want. */
	CYGlobalIntDisable
#endif


	/* Set Flash Cycles based on max possible frequency in case a glitch occurs during ClockSetup(). */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CACHE_CC_CTL), (((CYDEV_INSTRUCT_CACHE_ENABLED) != 0) ? 0x61u : 0x60u));
	/* Setup clocks based on selections from Clock DWR */
	ClockSetup();
	/* Enable/Disable Debug functionality based on settings from System DWR */
	CY_SET_XTND_REG8((void CYFAR *)CYREG_MLOGIC_DEBUG, (CY_GET_XTND_REG8((void CYFAR *)CYREG_MLOGIC_DEBUG) | 0x04u));

	{

		CYPACKED typedef struct {
			void CYFAR *address;
			uint16 size;
		} CYPACKED_ATTR cfg_memset_t;


		CYPACKED typedef struct {
			void CYFAR *dest;
			const void CYFAR *src;
			uint16 size;
		} CYPACKED_ATTR cfg_memcpy_t;

		static const cfg_memset_t CYCODE cfg_memset_list [] = {
			/* address, size */
			{(void CYFAR *)(CYREG_I2C_XCFG), 25u},
			{(void CYFAR *)(CYREG_TMR0_CFG0), 36u},
			{(void CYFAR *)(CYDEV_UCFG_B0_P0_U0_BASE), 4096u},
			{(void CYFAR *)(CYDEV_UCFG_B1_P2_U0_BASE), 1024u},
			{(void CYFAR *)(CYDEV_UCFG_B1_P4_U1_BASE), 896u},
			{(void CYFAR *)(CYDEV_UCFG_DSI0_BASE), 2560u},
			{(void CYFAR *)(CYDEV_UCFG_DSI12_BASE), 512u},
			{(void CYFAR *)(CYREG_BCTL1_MDCLK_EN), 16u},
		};

		static const cfg_memcpy_t CYCODE cfg_memcpy_list [] = {
			/* dest, src, size */
			{(void CYFAR *)(CYREG_IDMUX_IRQ_CTL0), BS_IDMUX_IRQ_VAL, 8u},
			{(void CYFAR *)(CYDEV_UCFG_B1_P4_U0_BASE), BS_UDB_0_1_1_CONFIG_VAL, 128u},
			{(void CYFAR *)(CYREG_BCTL0_MDCLK_EN), BS_UCFG_BCTL0_VAL, 16u},
		};

		uint8 CYDATA i;

		/* Zero out critical memory blocks before beginning configuration */
		for (i = 0u; i < (sizeof(cfg_memset_list)/sizeof(cfg_memset_list[0])); i++)
		{
			const cfg_memset_t CYCODE * CYDATA ms = &cfg_memset_list[i];
			CYMEMZERO(ms->address, (uint32)(ms->size));
		}

		/* Copy device configuration data into registers */
		for (i = 0u; i < (sizeof(cfg_memcpy_list)/sizeof(cfg_memcpy_list[0])); i++)
		{
			const cfg_memcpy_t CYCODE * CYDATA mc = &cfg_memcpy_list[i];
			void * CYDATA destPtr = mc->dest;
			const void * CYDATA srcPtr = mc->src;
			uint16 CYDATA numBytes = mc->size;
			CYCONFIGCPY(destPtr, srcPtr, numBytes);
		}

		cfg_write_bytes32(cy_cfg_addr_table, cy_cfg_data_table);

		/* Perform normal device configuration. Order is not critical for these items. */
		CY_SET_XTND_REG8((void CYFAR *)(CYREG_DSM0_CR3), 0x0Au);
		CY_SET_XTND_REG8((void CYFAR *)(CYREG_DSM0_CLK), 0x02u);

		/* Enable digital routing */
		CY_SET_XTND_REG8((void CYFAR *)CYREG_BCTL0_BANK_CTL, CY_GET_XTND_REG8((void CYFAR *)CYREG_BCTL0_BANK_CTL) | 0x02u);
		CY_SET_XTND_REG8((void CYFAR *)CYREG_BCTL1_BANK_CTL, CY_GET_XTND_REG8((void CYFAR *)CYREG_BCTL1_BANK_CTL) | 0x02u);

		/* Enable UDB array */
		CY_SET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG0, CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG0) | 0x40u);
		CY_SET_XTND_REG8((void CYFAR *)CYREG_PM_AVAIL_CR2, CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_AVAIL_CR2) | 0x10u);
	}

	/* Perform second pass device configuration. These items must be configured in specific order after the regular configuration is done. */
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT0_DR), (const void CYFAR *)(BS_IOPINS0_0_VAL), 10u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT12_DR), (const void CYFAR *)(BS_IOPINS0_7_VAL), 10u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT15_DR), (const void CYFAR *)(BS_IOPINS0_8_VAL), 10u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT1_DM0), (const void CYFAR *)(BS_IOPINS0_1_VAL), 8u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT2_DR), (const void CYFAR *)(BS_IOPINS0_2_VAL), 10u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT3_DM0), (const void CYFAR *)(BS_IOPINS0_3_VAL), 8u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT4_DR), (const void CYFAR *)(BS_IOPINS0_4_VAL), 10u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT5_DM0), (const void CYFAR *)(BS_IOPINS0_5_VAL), 8u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT6_DM0), (const void CYFAR *)(BS_IOPINS0_6_VAL), 8u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_B0_P2_U0_CFG27), 0xC4u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_B0_P7_U0_CFG27), 0x44u);

	/* Switch Boost to the precision bandgap reference from its internal reference */
	CY_SET_REG8((void CYXDATA *)CYREG_BOOST_CR2, (CY_GET_REG8((void CYXDATA *)CYREG_BOOST_CR2) | 0x08u));

	/* Perform basic analog initialization to defaults */
	AnalogSetDefault();

	/* Configure alternate active mode */
	CYCONFIGCPY((void CYFAR *)CYDEV_PM_STBY_BASE, (const void CYFAR *)CYDEV_PM_ACT_BASE, 14u);
}
