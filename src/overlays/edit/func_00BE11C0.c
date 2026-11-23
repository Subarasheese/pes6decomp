/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "pes6/edit_player_params.h"
extern s32 func_00BC5150(s32 question, s32 title);
extern s32 D_00CE5A90, D_00CBDBB0[];
extern void *func_001C4730(void *out, const void *in, u32 size);
extern void func_00BC91D0(s32 option, Pes6EditPlayerRecord *record);
s32 func_00BE11C0(Pes6EditPlayerRecord *player, const Pes6EditPlayerParams *source) {
    s32 answer = func_00BC5150(0xf40005, 0x6c001a);
    if (answer == 1) {
        player->params.registeredPosition = source->registeredPosition;
        player->params.cf = source->cf;
        player->params.ss = source->ss;
        player->params.wg = source->wg;
        player->params.am = source->am;
        player->params.sm = source->sm;
        player->params.cm = source->cm;
        player->params.wb = source->wb;
        player->params.dm = source->dm;
        player->params.sb = source->sb;
        player->params.cbt = source->cbt;
        player->params.cwp = source->cwp;
        player->params.gk = source->gk;
        player->params.favoredSide = source->favoredSide;
        {
            Pes6EditPlayerRecord preview;
            s32 slot = D_00CE5A90;
            func_001C4730(&preview, player, sizeof(preview));
            if (slot >= 2 && slot < 14)
                preview.params.registeredPosition = D_00CBDBB0[(slot - 2) % 13];
            func_00BC91D0(0, &preview);
        }
    }
    return answer;
}
