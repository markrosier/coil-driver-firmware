#include <atmel_start.h>
#include "conv.h"


uint16_t byte2word(uint8_t high_byte, uint8_t low_byte)
{
  return (uint16_t)high_byte<<8 | (uint16_t)low_byte;
}

uint8_t high_byte(uint16_t word_16bit)
{
  return (uint8_t)(word_16bit>>8);
}

uint8_t low_byte(uint16_t word_16bit)
{
  return (uint8_t)(word_16bit & 0x00FF);
}

