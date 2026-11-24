/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_bank.h"
#include "pes6/sound_driver.h"

extern s32 func_00251B10(void);
extern s32 func_00251B20(void);
extern s32 D_003E9BD8;
extern s32 D_003E9BDC;
extern s32 D_003E9BE0;
extern s32 D_003E9BE4;
extern s32 D_003E9BE8;
extern s32 D_003E9BEC;
extern s32 D_003E9BF0;
extern s32 D_003E9BF4;

s32 func_00255600(const SoundBankBlock *__restrict block, s32 resume) {
    if (!resume)
        D_0058C5E0.transferPhase = 1;
    switch (D_0058C5E0.transferPhase) {
    case 0:
        break;
    case 1:
        D_003E9BD8 = 0;
        D_003E9BDC = 1;
        D_003E9BE0 = block->size;
        func_0024FB20(0x2200002b, 0, 0, 0);
        func_0024FB20(0x2200001e, 2, 0, 0);
        func_0024FB20(SOUND_BANK_SET_BANK, block->bank, 0, 0);
        func_0024FB20(SOUND_BANK_SET_TRANSFER_ADDRESS, func_00251B20(), 0, 0);
        func_0024FB20(SOUND_BANK_SET_BANK_ADDRESS, block->bankAddress, 0, 0);
        D_003E9BE4 = func_00251B10();
        if ((block->flags >> 4) & 1)
            D_003E9BF4 = block->bankAddress;
        D_0058C5E0.transferPhase = 2;
        break;
    case 2:
        D_003E9BE0 -= D_003E9BE4;
        if (D_003E9BE0 <= 0) {
            D_003E9BE4 += D_003E9BE0;
            D_003E9BDC = 0;
        }
        func_0024FB20(SOUND_BANK_SET_TRANSFER_SIZE, D_003E9BE4, 0, 0);
        {
            s32 base = D_0058C5E0.buffer;
            D_003E9BEC = block->offset + base + D_003E9BD8 * func_00251B10();
        }
        D_003E9BF0 = func_00251B20();
        D_003E9BE8 = func_00255BA0(D_003E9BEC, D_003E9BF0, func_00251B10());
        D_003E9BD8++;
        D_0058C5E0.transferPhase = 3;
        break;
    case 3:
        if (func_00255B90(D_003E9BE8) < 0)
            D_0058C5E0.transferPhase = 4;
        break;
    case 4:
        func_0024FB20(0x22000023, 0, 0, 0);
        D_0058C5E0.transferPhase = 5;
        break;
    case 5: {
        if (acknowledgeTransfer() == 1) {
            if (!D_003E9BDC) {
                if ((block->flags >> 8) & 1)
                    func_0024FB20(SOUND_BANK_SET_BANK_ADDRESS, D_003E9BF4, 0, 0);
                D_0058C5E0.transferPhase = 0;
            } else
                D_0058C5E0.transferPhase = 2;
        }
    } break;
    }
    return D_0058C5E0.transferPhase;
}
