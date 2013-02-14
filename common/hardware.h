#ifndef HARDWARE_H
#define	HARDWARE_H

#include <stdint.h>

#include "hardware_impl.h" // should implement CYCLE_WAIT(cycles) and HW_ACCESS{}

////////////////////////////////////////////////////////////////////////////////
// Low level interface, implemented by firmware or mockup
////////////////////////////////////////////////////////////////////////////////

extern void mem_write(uint16_t address, uint8_t value);
extern void io_write(uint8_t address, uint8_t value);
extern uint8_t mem_read(uint16_t address);
extern uint8_t io_read(uint8_t address);

#endif	/* HARDWARE_H */

