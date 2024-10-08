#ifndef SYSTEM_H_
#define SYSTEM_H_

#include "global_state.h"

void SYSTEM_task(void * parameters);

void SYSTEM_notify_accepted_share(GlobalState * GLOBAL_STATE);
void SYSTEM_notify_rejected_share(GlobalState * GLOBAL_STATE);
void SYSTEM_notify_found_nonce(GlobalState * GLOBAL_STATE, double pool_diff);
void SYSTEM_check_for_best_diff(GlobalState * GLOBAL_STATE, double found_diff, uint8_t job_id);
void SYSTEM_notify_mining_started(GlobalState * GLOBAL_STATE);
void SYSTEM_notify_new_ntime(GlobalState * GLOBAL_STATE, uint32_t ntime);

#endif /* SYSTEM_H_ */
