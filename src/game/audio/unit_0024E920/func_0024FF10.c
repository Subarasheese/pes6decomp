/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_playback.h"
#include "pes6/sound_adx.h"

extern s32 func_00251BE0(void);

#define fadeChannel D_003E9B54

void func_0024FF10(void) {
    static s32 fadeChannel;
    fadeChannel = 0;
    while (fadeChannel < SOUND_PLAYBACK_CHANNELS) {
        if (!func_00251BE0() || !func_00250E70(fadeChannel, SOUND_FIELD_FOLLOW_PAUSE)) {
            if (func_00250E70(fadeChannel, SOUND_FIELD_FADE_ACTIVE)) {
                if (func_00250E70(fadeChannel, SOUND_FIELD_FADE_TICKS) < 0) {
                    func_002511D0(fadeChannel, SOUND_FIELD_FADE_TICKS, 0);
                    if (func_00250E70(fadeChannel, SOUND_FIELD_PHASE) != 4) {
                        func_002511D0(fadeChannel, SOUND_FIELD_LEVEL,
                                      func_00250E70(fadeChannel, SOUND_FIELD_FADE_TARGET));
                        if (!func_00250E70(fadeChannel, SOUND_FIELD_DIRTY))
                            func_002511D0(fadeChannel, SOUND_FIELD_DIRTY, 1);
                    }
                    func_002511D0(fadeChannel, SOUND_FIELD_FADE_ACTIVE, 0);
                    return;
                }
                func_002511D0(fadeChannel, SOUND_FIELD_FADE_ACCUMULATOR,
                              func_00250E70(fadeChannel, SOUND_FIELD_FADE_ACCUMULATOR) +
                                  func_00250E70(fadeChannel, SOUND_FIELD_FADE_STEP));
                {
                    s32 delta = func_00250E70(fadeChannel, SOUND_FIELD_FADE_ACCUMULATOR) / 1024;
                    s32 previous = func_00250E70(fadeChannel, SOUND_FIELD_FADE_START);
                    func_002511D0(fadeChannel, SOUND_FIELD_FADE_LEVEL, previous + delta);
                }
                if (func_00250E70(fadeChannel, SOUND_FIELD_FADE_DIRECTION) > 0) {
                    if (func_00250E70(fadeChannel, SOUND_FIELD_FADE_LEVEL) >=
                        func_00250E70(fadeChannel, SOUND_FIELD_FADE_TARGET)) {
                        func_002511D0(fadeChannel, SOUND_FIELD_FADE_LEVEL,
                                      func_00250E70(fadeChannel, SOUND_FIELD_FADE_TARGET));
                        func_002511D0(fadeChannel, SOUND_FIELD_FADE_ACTIVE, 0);
                    }
                } else if (func_00250E70(fadeChannel, SOUND_FIELD_FADE_DIRECTION) < 0) {
                    if (func_00250E70(fadeChannel, SOUND_FIELD_FADE_LEVEL) <=
                        func_00250E70(fadeChannel, SOUND_FIELD_FADE_TARGET)) {
                        func_002511D0(fadeChannel, SOUND_FIELD_FADE_LEVEL,
                                      func_00250E70(fadeChannel, SOUND_FIELD_FADE_TARGET));
                        func_002511D0(fadeChannel, SOUND_FIELD_FADE_ACTIVE, 0);
                    }
                } else {
                    func_002511D0(fadeChannel, SOUND_FIELD_FADE_ACTIVE, 0);
                    return;
                }
                if (func_00250E70(fadeChannel, SOUND_FIELD_PHASE) != 4) {
                    func_002511D0(fadeChannel, SOUND_FIELD_LEVEL,
                                  func_00250E70(fadeChannel, SOUND_FIELD_FADE_LEVEL));
                    if (!func_00250E70(fadeChannel, SOUND_FIELD_DIRTY))
                        func_002511D0(fadeChannel, SOUND_FIELD_DIRTY, 1);
                }
                D_00583F80[fadeChannel].fadeTicks--;
            }
        }
        fadeChannel++;
    }
}
