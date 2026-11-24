/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
typedef struct {
    Pes6MatchPlayer *actor;
} MatchMotion;
extern void func_00B2A6E0(MatchMotion *, f32 outXZ[2], u16 *outHeading, u32 endFrame);
static inline u16 currentFrame(f32 *frame) { return (u16)*frame; }
void func_00B2A5F0(MatchMotion *motion, f32 outXZ[2], u16 *outHeading, u32 startFrame,
                   u32 endFrame) {
    f32 *frame = &motion->actor->info->animationFrame;
    u16 savedFrame = currentFrame(frame);
    *frame = (f32)startFrame;
    func_00B2A6E0(motion, outXZ, outHeading, endFrame);
    motion->actor->info->animationFrame = (f32)savedFrame;
}
