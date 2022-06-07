/* Auto-generated config file peripheral_clk_config.h */
#ifndef PERIPHERAL_CLK_CONFIG_H
#define PERIPHERAL_CLK_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

/**
 * \def CONF_CPU_FREQUENCY
 * \brief CPU's Clock frequency
 */
#ifndef CONF_CPU_FREQUENCY
#define CONF_CPU_FREQUENCY 48000000
#endif

// <y> Core Clock Source
// <id> core_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for CORE.
#ifndef CONF_GCLK_SERCOM1_CORE_SRC
#define CONF_GCLK_SERCOM1_CORE_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

// <y> Slow Clock Source
// <id> slow_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the slow clock source.
#ifndef CONF_GCLK_SERCOM1_SLOW_SRC
#define CONF_GCLK_SERCOM1_SLOW_SRC GCLK_CLKCTRL_GEN_GCLK1_Val
#endif

/**
 * \def CONF_GCLK_SERCOM1_CORE_FREQUENCY
 * \brief SERCOM1's Core Clock frequency
 */
#ifndef CONF_GCLK_SERCOM1_CORE_FREQUENCY
#define CONF_GCLK_SERCOM1_CORE_FREQUENCY 48000000
#endif

/**
 * \def CONF_GCLK_SERCOM1_SLOW_FREQUENCY
 * \brief SERCOM1's Slow Clock frequency
 */
#ifndef CONF_GCLK_SERCOM1_SLOW_FREQUENCY
#define CONF_GCLK_SERCOM1_SLOW_FREQUENCY 1000000
#endif

// <y> RTC Clock Source
// <id> rtc_clk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for RTC.
#ifndef CONF_GCLK_RTC_SRC
#define CONF_GCLK_RTC_SRC GCLK_CLKCTRL_GEN_GCLK1_Val
#endif

/**
 * \def CONF_GCLK_RTC_FREQUENCY
 * \brief RTC's Clock frequency
 */
#ifndef CONF_GCLK_RTC_FREQUENCY
#define CONF_GCLK_RTC_FREQUENCY 1000000
#endif

// <y> TC Clock Source
// <id> tc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TC.
#ifndef CONF_GCLK_TC3_SRC
#define CONF_GCLK_TC3_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TC3_FREQUENCY
 * \brief TC3's Clock frequency
 */
#ifndef CONF_GCLK_TC3_FREQUENCY
#define CONF_GCLK_TC3_FREQUENCY 48000000
#endif

// <y> TC Clock Source
// <id> tc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TC.
#ifndef CONF_GCLK_TC4_SRC
#define CONF_GCLK_TC4_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TC4_FREQUENCY
 * \brief TC4's Clock frequency
 */
#ifndef CONF_GCLK_TC4_FREQUENCY
#define CONF_GCLK_TC4_FREQUENCY 48000000
#endif

// <y> TC Clock Source
// <id> tc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TC.
#ifndef CONF_GCLK_TC5_SRC
#define CONF_GCLK_TC5_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TC5_FREQUENCY
 * \brief TC5's Clock frequency
 */
#ifndef CONF_GCLK_TC5_FREQUENCY
#define CONF_GCLK_TC5_FREQUENCY 48000000
#endif

// <y> TCC Clock Source
// <id> tcc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TCC.
#ifndef CONF_GCLK_TCC0_SRC
#define CONF_GCLK_TCC0_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TCC0_FREQUENCY
 * \brief TCC0's Clock frequency
 */
#ifndef CONF_GCLK_TCC0_FREQUENCY
#define CONF_GCLK_TCC0_FREQUENCY 48000000
#endif

// <y> TCC Clock Source
// <id> tcc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TCC.
#ifndef CONF_GCLK_TCC1_SRC
#define CONF_GCLK_TCC1_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TCC1_FREQUENCY
 * \brief TCC1's Clock frequency
 */
#ifndef CONF_GCLK_TCC1_FREQUENCY
#define CONF_GCLK_TCC1_FREQUENCY 48000000
#endif

// <y> TCC Clock Source
// <id> tcc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TCC.
#ifndef CONF_GCLK_TCC2_SRC
#define CONF_GCLK_TCC2_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TCC2_FREQUENCY
 * \brief TCC2's Clock frequency
 */
#ifndef CONF_GCLK_TCC2_FREQUENCY
#define CONF_GCLK_TCC2_FREQUENCY 48000000
#endif

// <y> WDT Clock Source
// <id> wdt_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for WDT.
#ifndef CONF_GCLK_WDT_SRC
#define CONF_GCLK_WDT_SRC GCLK_CLKCTRL_GEN_GCLK1_Val
#endif
/**
 * \def CONF_GCLK_WDT_FREQUENCY
 * \brief WDT's Clock frequency
 */
#ifndef CONF_GCLK_WDT_FREQUENCY
#define CONF_GCLK_WDT_FREQUENCY 1000000
#endif

// <<< end of configuration section >>>

#endif // PERIPHERAL_CLK_CONFIG_H
