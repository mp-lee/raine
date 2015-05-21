
#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
/*                                                                            */
/*          RAINE MAIN EMULATION ROUTINES (run game, reset game etc)          */
/*                                                                            */
/******************************************************************************/

#include "deftypes.h"

UINT32 run_game_emulation(void);

void reset_game_hardware(void);

void set_reset_function(void (*my_func)());

#ifdef __cplusplus
}
#endif
