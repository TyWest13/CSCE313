/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'nios_system'
 * SOPC Builder design path: ../../nios_system.sopcinfo
 *
 * Generated: Wed Feb 07 08:33:06 EST 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00020820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x12
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 4096
#define ALT_CPU_EXCEPTION_ADDR 0x00010020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x12
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00010000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00020820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x12
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 4096
#define NIOS2_EXCEPTION_ADDR 0x00010020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x12
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00010000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x210a0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x210a0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x210a0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios_system"


/*
 * bcd_input configuration
 *
 */

#define ALT_MODULE_CLASS_bcd_input altera_avalon_pio
#define BCD_INPUT_BASE 0x21010
#define BCD_INPUT_BIT_CLEARING_EDGE_REGISTER 0
#define BCD_INPUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BCD_INPUT_CAPTURE 0
#define BCD_INPUT_DATA_WIDTH 4
#define BCD_INPUT_DO_TEST_BENCH_WIRING 0
#define BCD_INPUT_DRIVEN_SIM_VALUE 0
#define BCD_INPUT_EDGE_TYPE "NONE"
#define BCD_INPUT_FREQ 50000000
#define BCD_INPUT_HAS_IN 1
#define BCD_INPUT_HAS_OUT 0
#define BCD_INPUT_HAS_TRI 0
#define BCD_INPUT_IRQ -1
#define BCD_INPUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BCD_INPUT_IRQ_TYPE "NONE"
#define BCD_INPUT_NAME "/dev/bcd_input"
#define BCD_INPUT_RESET_VALUE 0
#define BCD_INPUT_SPAN 16
#define BCD_INPUT_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x210a0
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x10000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "nios_system_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 65536
#define ONCHIP_MEMORY2_0_SPAN 65536
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * random_pattern configuration
 *
 */

#define ALT_MODULE_CLASS_random_pattern altera_avalon_pio
#define RANDOM_PATTERN_BASE 0x21070
#define RANDOM_PATTERN_BIT_CLEARING_EDGE_REGISTER 0
#define RANDOM_PATTERN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RANDOM_PATTERN_CAPTURE 0
#define RANDOM_PATTERN_DATA_WIDTH 18
#define RANDOM_PATTERN_DO_TEST_BENCH_WIRING 0
#define RANDOM_PATTERN_DRIVEN_SIM_VALUE 0
#define RANDOM_PATTERN_EDGE_TYPE "NONE"
#define RANDOM_PATTERN_FREQ 50000000
#define RANDOM_PATTERN_HAS_IN 0
#define RANDOM_PATTERN_HAS_OUT 1
#define RANDOM_PATTERN_HAS_TRI 0
#define RANDOM_PATTERN_IRQ -1
#define RANDOM_PATTERN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RANDOM_PATTERN_IRQ_TYPE "NONE"
#define RANDOM_PATTERN_NAME "/dev/random_pattern"
#define RANDOM_PATTERN_RESET_VALUE 0
#define RANDOM_PATTERN_SPAN 16
#define RANDOM_PATTERN_TYPE "altera_avalon_pio"


/*
 * segment0 configuration
 *
 */

#define ALT_MODULE_CLASS_segment0 altera_avalon_pio
#define SEGMENT0_BASE 0x21060
#define SEGMENT0_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT0_CAPTURE 0
#define SEGMENT0_DATA_WIDTH 8
#define SEGMENT0_DO_TEST_BENCH_WIRING 0
#define SEGMENT0_DRIVEN_SIM_VALUE 0
#define SEGMENT0_EDGE_TYPE "NONE"
#define SEGMENT0_FREQ 50000000
#define SEGMENT0_HAS_IN 0
#define SEGMENT0_HAS_OUT 1
#define SEGMENT0_HAS_TRI 0
#define SEGMENT0_IRQ -1
#define SEGMENT0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT0_IRQ_TYPE "NONE"
#define SEGMENT0_NAME "/dev/segment0"
#define SEGMENT0_RESET_VALUE 0
#define SEGMENT0_SPAN 16
#define SEGMENT0_TYPE "altera_avalon_pio"


/*
 * segment1 configuration
 *
 */

#define ALT_MODULE_CLASS_segment1 altera_avalon_pio
#define SEGMENT1_BASE 0x21050
#define SEGMENT1_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT1_CAPTURE 0
#define SEGMENT1_DATA_WIDTH 8
#define SEGMENT1_DO_TEST_BENCH_WIRING 0
#define SEGMENT1_DRIVEN_SIM_VALUE 0
#define SEGMENT1_EDGE_TYPE "NONE"
#define SEGMENT1_FREQ 50000000
#define SEGMENT1_HAS_IN 0
#define SEGMENT1_HAS_OUT 1
#define SEGMENT1_HAS_TRI 0
#define SEGMENT1_IRQ -1
#define SEGMENT1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT1_IRQ_TYPE "NONE"
#define SEGMENT1_NAME "/dev/segment1"
#define SEGMENT1_RESET_VALUE 0
#define SEGMENT1_SPAN 16
#define SEGMENT1_TYPE "altera_avalon_pio"


/*
 * segment2 configuration
 *
 */

#define ALT_MODULE_CLASS_segment2 altera_avalon_pio
#define SEGMENT2_BASE 0x21040
#define SEGMENT2_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT2_CAPTURE 0
#define SEGMENT2_DATA_WIDTH 8
#define SEGMENT2_DO_TEST_BENCH_WIRING 0
#define SEGMENT2_DRIVEN_SIM_VALUE 0
#define SEGMENT2_EDGE_TYPE "NONE"
#define SEGMENT2_FREQ 50000000
#define SEGMENT2_HAS_IN 0
#define SEGMENT2_HAS_OUT 1
#define SEGMENT2_HAS_TRI 0
#define SEGMENT2_IRQ -1
#define SEGMENT2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT2_IRQ_TYPE "NONE"
#define SEGMENT2_NAME "/dev/segment2"
#define SEGMENT2_RESET_VALUE 0
#define SEGMENT2_SPAN 16
#define SEGMENT2_TYPE "altera_avalon_pio"


/*
 * segment3 configuration
 *
 */

#define ALT_MODULE_CLASS_segment3 altera_avalon_pio
#define SEGMENT3_BASE 0x21030
#define SEGMENT3_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT3_CAPTURE 0
#define SEGMENT3_DATA_WIDTH 8
#define SEGMENT3_DO_TEST_BENCH_WIRING 0
#define SEGMENT3_DRIVEN_SIM_VALUE 0
#define SEGMENT3_EDGE_TYPE "NONE"
#define SEGMENT3_FREQ 50000000
#define SEGMENT3_HAS_IN 0
#define SEGMENT3_HAS_OUT 1
#define SEGMENT3_HAS_TRI 0
#define SEGMENT3_IRQ -1
#define SEGMENT3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT3_IRQ_TYPE "NONE"
#define SEGMENT3_NAME "/dev/segment3"
#define SEGMENT3_RESET_VALUE 0
#define SEGMENT3_SPAN 16
#define SEGMENT3_TYPE "altera_avalon_pio"


/*
 * segment4 configuration
 *
 */

#define ALT_MODULE_CLASS_segment4 altera_avalon_pio
#define SEGMENT4_BASE 0x21020
#define SEGMENT4_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT4_CAPTURE 0
#define SEGMENT4_DATA_WIDTH 8
#define SEGMENT4_DO_TEST_BENCH_WIRING 0
#define SEGMENT4_DRIVEN_SIM_VALUE 0
#define SEGMENT4_EDGE_TYPE "NONE"
#define SEGMENT4_FREQ 50000000
#define SEGMENT4_HAS_IN 0
#define SEGMENT4_HAS_OUT 1
#define SEGMENT4_HAS_TRI 0
#define SEGMENT4_IRQ -1
#define SEGMENT4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT4_IRQ_TYPE "NONE"
#define SEGMENT4_NAME "/dev/segment4"
#define SEGMENT4_RESET_VALUE 0
#define SEGMENT4_SPAN 16
#define SEGMENT4_TYPE "altera_avalon_pio"


/*
 * speed_controller configuration
 *
 */

#define ALT_MODULE_CLASS_speed_controller altera_avalon_pio
#define SPEED_CONTROLLER_BASE 0x21000
#define SPEED_CONTROLLER_BIT_CLEARING_EDGE_REGISTER 0
#define SPEED_CONTROLLER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SPEED_CONTROLLER_CAPTURE 0
#define SPEED_CONTROLLER_DATA_WIDTH 1
#define SPEED_CONTROLLER_DO_TEST_BENCH_WIRING 0
#define SPEED_CONTROLLER_DRIVEN_SIM_VALUE 0
#define SPEED_CONTROLLER_EDGE_TYPE "NONE"
#define SPEED_CONTROLLER_FREQ 50000000
#define SPEED_CONTROLLER_HAS_IN 1
#define SPEED_CONTROLLER_HAS_OUT 0
#define SPEED_CONTROLLER_HAS_TRI 0
#define SPEED_CONTROLLER_IRQ -1
#define SPEED_CONTROLLER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SPEED_CONTROLLER_IRQ_TYPE "NONE"
#define SPEED_CONTROLLER_NAME "/dev/speed_controller"
#define SPEED_CONTROLLER_RESET_VALUE 0
#define SPEED_CONTROLLER_SPAN 16
#define SPEED_CONTROLLER_TYPE "altera_avalon_pio"


/*
 * system_counter configuration
 *
 */

#define ALT_MODULE_CLASS_system_counter altera_avalon_pio
#define SYSTEM_COUNTER_BASE 0x21080
#define SYSTEM_COUNTER_BIT_CLEARING_EDGE_REGISTER 0
#define SYSTEM_COUNTER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SYSTEM_COUNTER_CAPTURE 0
#define SYSTEM_COUNTER_DATA_WIDTH 8
#define SYSTEM_COUNTER_DO_TEST_BENCH_WIRING 0
#define SYSTEM_COUNTER_DRIVEN_SIM_VALUE 0
#define SYSTEM_COUNTER_EDGE_TYPE "NONE"
#define SYSTEM_COUNTER_FREQ 50000000
#define SYSTEM_COUNTER_HAS_IN 0
#define SYSTEM_COUNTER_HAS_OUT 1
#define SYSTEM_COUNTER_HAS_TRI 0
#define SYSTEM_COUNTER_IRQ -1
#define SYSTEM_COUNTER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSTEM_COUNTER_IRQ_TYPE "NONE"
#define SYSTEM_COUNTER_NAME "/dev/system_counter"
#define SYSTEM_COUNTER_RESET_VALUE 0
#define SYSTEM_COUNTER_SPAN 16
#define SYSTEM_COUNTER_TYPE "altera_avalon_pio"


/*
 * system_modes configuration
 *
 */

#define ALT_MODULE_CLASS_system_modes altera_avalon_pio
#define SYSTEM_MODES_BASE 0x21090
#define SYSTEM_MODES_BIT_CLEARING_EDGE_REGISTER 0
#define SYSTEM_MODES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SYSTEM_MODES_CAPTURE 0
#define SYSTEM_MODES_DATA_WIDTH 2
#define SYSTEM_MODES_DO_TEST_BENCH_WIRING 0
#define SYSTEM_MODES_DRIVEN_SIM_VALUE 0
#define SYSTEM_MODES_EDGE_TYPE "NONE"
#define SYSTEM_MODES_FREQ 50000000
#define SYSTEM_MODES_HAS_IN 1
#define SYSTEM_MODES_HAS_OUT 0
#define SYSTEM_MODES_HAS_TRI 0
#define SYSTEM_MODES_IRQ -1
#define SYSTEM_MODES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSTEM_MODES_IRQ_TYPE "NONE"
#define SYSTEM_MODES_NAME "/dev/system_modes"
#define SYSTEM_MODES_RESET_VALUE 0
#define SYSTEM_MODES_SPAN 16
#define SYSTEM_MODES_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
