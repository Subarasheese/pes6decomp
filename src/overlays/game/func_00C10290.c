/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 minute, period, interval;
} ClockChange;
typedef struct {
    u8 kind, minute, period, interval;
    u8 payloadTail[12];
} MatchEventPacket;
extern void func_00C13870(const void *);
void func_00C10290(s32 eventKind, const ClockChange *change) {
    MatchEventPacket event;
    event.kind = 1;
    event.minute = change->minute;
    event.period = change->period;
    event.interval = change->interval;
    func_00C13870(&event);
}
