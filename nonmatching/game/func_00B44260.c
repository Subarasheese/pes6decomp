/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B44260(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = a0 & 0xff;
    at = (u64) v1 < (u64) (s64) 116;
    { s32 c_ = at == 0; v0 = 205; if (c_) goto L_00B443C8; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffc820U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb4428cU) goto L_00B4428C; if (t_ == 0xb44294U) goto L_00B44294; if (t_ == 0xb4429cU) goto L_00B4429C; if (t_ == 0xb442a4U) goto L_00B442A4; if (t_ == 0xb442acU) goto L_00B442AC; if (t_ == 0xb442b4U) goto L_00B442B4; if (t_ == 0xb442bcU) goto L_00B442BC; if (t_ == 0xb442c4U) goto L_00B442C4; if (t_ == 0xb442ccU) goto L_00B442CC; if (t_ == 0xb442d4U) goto L_00B442D4; if (t_ == 0xb442dcU) goto L_00B442DC; if (t_ == 0xb442e4U) goto L_00B442E4; if (t_ == 0xb442ecU) goto L_00B442EC; if (t_ == 0xb442f4U) goto L_00B442F4; if (t_ == 0xb442fcU) goto L_00B442FC; if (t_ == 0xb44304U) goto L_00B44304; if (t_ == 0xb4430cU) goto L_00B4430C; if (t_ == 0xb44314U) goto L_00B44314; if (t_ == 0xb4431cU) goto L_00B4431C; if (t_ == 0xb44324U) goto L_00B44324; if (t_ == 0xb4432cU) goto L_00B4432C; if (t_ == 0xb44334U) goto L_00B44334; if (t_ == 0xb4433cU) goto L_00B4433C; if (t_ == 0xb44344U) goto L_00B44344; if (t_ == 0xb4434cU) goto L_00B4434C; if (t_ == 0xb44354U) goto L_00B44354; if (t_ == 0xb4435cU) goto L_00B4435C; if (t_ == 0xb44364U) goto L_00B44364; if (t_ == 0xb4436cU) goto L_00B4436C; if (t_ == 0xb44374U) goto L_00B44374; if (t_ == 0xb4437cU) goto L_00B4437C; if (t_ == 0xb44384U) goto L_00B44384; if (t_ == 0xb4438cU) goto L_00B4438C; if (t_ == 0xb44394U) goto L_00B44394; if (t_ == 0xb4439cU) goto L_00B4439C; if (t_ == 0xb443a4U) goto L_00B443A4; if (t_ == 0xb443acU) goto L_00B443AC; if (t_ == 0xb443b4U) goto L_00B443B4; if (t_ == 0xb443bcU) goto L_00B443BC; if (t_ == 0xb443c4U) goto L_00B443C4; if (t_ == 0xb443c8U) goto L_00B443C8; }
L_00B4428C:;
    v0 = 131; goto L_00B443C8;
L_00B44294:;
    v0 = 132; goto L_00B443C8;
L_00B4429C:;
    v0 = 133; goto L_00B443C8;
L_00B442A4:;
    v0 = 134; goto L_00B443C8;
L_00B442AC:;
    v0 = 135; goto L_00B443C8;
L_00B442B4:;
    v0 = 136; goto L_00B443C8;
L_00B442BC:;
    v0 = 137; goto L_00B443C8;
L_00B442C4:;
    v0 = 138; goto L_00B443C8;
L_00B442CC:;
    v0 = 139; goto L_00B443C8;
L_00B442D4:;
    v0 = 140; goto L_00B443C8;
L_00B442DC:;
    v0 = 141; goto L_00B443C8;
L_00B442E4:;
    v0 = 142; goto L_00B443C8;
L_00B442EC:;
    v0 = 143; goto L_00B443C8;
L_00B442F4:;
    v0 = 144; goto L_00B443C8;
L_00B442FC:;
    v0 = 145; goto L_00B443C8;
L_00B44304:;
    v0 = 146; goto L_00B443C8;
L_00B4430C:;
    v0 = 147; goto L_00B443C8;
L_00B44314:;
    v0 = 148; goto L_00B443C8;
L_00B4431C:;
    v0 = 149; goto L_00B443C8;
L_00B44324:;
    v0 = 151; goto L_00B443C8;
L_00B4432C:;
    v0 = 152; goto L_00B443C8;
L_00B44334:;
    v0 = 153; goto L_00B443C8;
L_00B4433C:;
    v0 = 154; goto L_00B443C8;
L_00B44344:;
    v0 = 155; goto L_00B443C8;
L_00B4434C:;
    v0 = 156; goto L_00B443C8;
L_00B44354:;
    v0 = 157; goto L_00B443C8;
L_00B4435C:;
    v0 = 158; goto L_00B443C8;
L_00B44364:;
    v0 = 159; goto L_00B443C8;
L_00B4436C:;
    v0 = 160; goto L_00B443C8;
L_00B44374:;
    v0 = 161; goto L_00B443C8;
L_00B4437C:;
    v0 = 162; goto L_00B443C8;
L_00B44384:;
    v0 = 163; goto L_00B443C8;
L_00B4438C:;
    v0 = 164; goto L_00B443C8;
L_00B44394:;
    v0 = 165; goto L_00B443C8;
L_00B4439C:;
    v0 = 167; goto L_00B443C8;
L_00B443A4:;
    v0 = 168; goto L_00B443C8;
L_00B443AC:;
    v0 = 169; goto L_00B443C8;
L_00B443B4:;
    v0 = 170; goto L_00B443C8;
L_00B443BC:;
    v0 = 171; goto L_00B443C8;
L_00B443C4:;
    v0 = 172;
L_00B443C8:;
    return v0;
}
