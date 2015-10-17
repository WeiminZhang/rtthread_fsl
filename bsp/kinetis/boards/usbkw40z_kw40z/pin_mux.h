/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pin_mux.h
**     Project     : USB-KW40Z-KW40Z
**     Processor   : MKW40Z160VHT4
**     Component   : PinSettings
**     Version     : Component 1.2.0, Driver 1.4, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc.
**     All Rights Reserved.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file pin_mux.h
** @version 1.4
** @brief
**
*/
/*!
**  @addtogroup pin_mux_module pin_mux module documentation
**  @{
*/

#ifndef pin_mux_H_
#define pin_mux_H_

/* MODULE pin_mux. */

/*!
 * @brief CMP method sets registers according routing settings. Call
 *         this method code to route desired pins into CMP0 periphery.
 * @param instance - CMP instance number (0 is expected)
 */
void configure_cmp_pins(uint32_t instance);
/*!
 * @brief GPIO method sets registers according routing settings. Call
 *         this method code to route desired pins into:
 *         GPIOA, GPIOB, GPIOC
 *         peripherals.
 * @param instance - GPIO instance number 0..2
 */
void configure_gpio_pins(uint32_t instance);
/*!
 * @brief I2C method sets registers according routing settings. Call
 *         this method code to route desired pins into:
 *         I2C0, I2C1
 *         peripherals.
 * @param instance - I2C instance number 0..1
 */
void configure_i2c_pins(uint32_t instance);
/*!
 * @brief LLWU method sets registers according routing settings. Call
 *         this method code to route desired pins into LLWU periphery.
 * @param instance - LLWU instance number (0 is expected)
 */
void configure_llwu_pins(uint32_t instance);
/*!
 * @brief LPUART method sets registers according routing settings. Call
 *         this method code to route desired pins into LPUART0 periphery.
 * @param instance - LPUART instance number (0 is expected)
 */
void configure_lpuart_pins(uint32_t instance);
/*!
 * @brief SPI method sets registers according routing settings. Call
 *         this method code to route desired pins into:
 *         SPI0, SPI1
 *         peripherals.
 * @param instance - SPI instance number 0..1
 */
void configure_spi_pins(uint32_t instance);
/*!
 * @brief TPM method sets registers according routing settings. Call
 *         this method code to route desired pins into:
 *         TPM0, TPM1, TPM2
 *         peripherals.
 * @param instance - TPM instance number 0..2
 */
void configure_tpm_pins(uint32_t instance);

/* END pin_mux. */
#endif /* #ifndef __pin_mux_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
