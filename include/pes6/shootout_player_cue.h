#ifndef PES6_SHOOTOUT_PLAYER_CUE_H
#define PES6_SHOOTOUT_PLAYER_CUE_H

#include "pes6/paired_player_action.h"
#include "pes6/match_cue_script.h"
#include "pes6/match_stats.h"

extern const CueTrack D_003B91B0[];
extern u8 D_00592740[], D_00CBBDF6[], D_00CBBDF7[], D_00CBBDFD[], D_00CBBE04[], D_00CBBE05[];
extern void func_002BC2B0(void);
extern void func_002BB870(s32 player, s8 weight), func_002BB820(s32 player, s32 cue);
extern void func_002BBF20(const CueTrack *);
extern void func_001AAF50(void *state, s32 event, ...), func_001AAF40(void *state, s8 enabled);
extern void func_00B25220(void), func_00B24A80(s32), func_00B25C50(s32);

static inline void playShootoutPlayerCue(PairedContext *player) {
    func_002BC2B0();
    func_002BB870(player->actor->id, 100);
    func_002BB820(player->actor->id, 0x1d);
    func_002BBF20(D_003B91B0);
    func_001AAF50(player->actor->playback->owner, 0);
    func_001AAF40(player->actor->playback->owner, 1);
    func_00B25220();
    func_00B24A80(0);
    func_00B25C50(0);
    D_00592740[0] = 3;
}

#endif
