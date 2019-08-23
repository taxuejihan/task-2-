# ifndef __KEY_H
# define __KEY_H
# include "sys.h"


#define KEY0 PCin(5)
#define KEY1 PAin(15)
#define WK_UP PAin(0)

#define KEY0_PRES 1
#define KEY1_PRES 2
#define WKUP_PRES 3

void KEY_Init(void);
u8 KEY_Scan(u8 mode);

#endif

