#ifndef switch_handler_h
#define switch_handler_h

void switchHandlerInit(void);
void switchHandler(const struct timer_task *const timer_task);
uint16_t getLatchedSwitchesBlockState(uint8_t aBlock);


#endif // switch_handler_h



