/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_bank.h"
#include "pes6/sound_driver.h"

extern s32 func_00251B10(void);
extern s32 func_00251B20(void);
extern s32 D_003E9BBC;
extern s32 D_003E9BC0;
extern s32 D_003E9BC4;
extern s32 D_003E9BC8;
extern s32 D_003E9BCC;
extern s32 D_003E9BD0;
extern s32 D_003E9BD4;

s32 func_002558D0(const SoundBankBlock *__restrict block, s32 resume) {
    if (!resume)
        D_0058C5E0.transferPhase = 1;
    switch (D_0058C5E0.transferPhase) {
    case 0:
        break;
    case 1:
        D_003E9BBC = 0;
        D_003E9BC0 = 1;
        D_003E9BC4 = block->size;
        func_0024FB20(0x2200002b, 0, 0, 0);
        func_0024FB20(0x2200001e, 2, 0, 0);
        func_0024FB20(SOUND_BANK_SET_BANK, block->bank, 0, 0);
        func_0024FB20(SOUND_BANK_SET_TRANSFER_ADDRESS, func_00251B20(), 0, 0);
        func_0024FB20(SOUND_BANK_SET_BANK_ADDRESS, block->bankAddress, 0, 0);
        D_003E9BC8 = func_00251B10();
        D_0058C5E0.transferPhase = 2;
        break;
    case 2:
        D_003E9BC4 -= D_003E9BC8;
        if (D_003E9BC4 <= 0) {
            D_003E9BC8 += D_003E9BC4;
            D_003E9BC0 = 0;
        }
        func_0024FB20(SOUND_BANK_SET_TRANSFER_SIZE, D_003E9BC8, 0, 0);
        {
            s32 base = D_0058C5E0.buffer;
            D_003E9BD0 = block->offset + base + D_003E9BBC * func_00251B10();
        }
        D_003E9BD4 = func_00251B20();
        D_003E9BCC = func_00255BA0(D_003E9BD0, D_003E9BD4, func_00251B10());
        D_003E9BBC++;
        D_0058C5E0.transferPhase = 3;
        break;
    case 3:
        if (func_00255B90(D_003E9BCC) < 0)
            D_0058C5E0.transferPhase = 4;
        break;
    case 4:
        func_0024FB20(0x22000023, 0, 0, 0);
        D_0058C5E0.transferPhase = 5;
        break;
    case 5: {
        if (acknowledgeTransfer() == 1) {
            if (!D_003E9BC0) {
                D_0058C5E0.transferPhase = 0;
            } else
                D_0058C5E0.transferPhase = 2;
        }
    } break;
    }
    return D_0058C5E0.transferPhase;
}
