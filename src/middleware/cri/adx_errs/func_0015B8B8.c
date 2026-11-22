/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_fs.c (adxf_SetCmdHstry).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef int s32;
typedef s32 intptr_t;
typedef unsigned char Uint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef signed int Sint32;
typedef struct _adxf_cmd_hstry {
    Uint8 cmdid;
    Uint8 fg;
    Uint16 ncall;
    intptr_t prm[3];
} ADXF_CMD_HSTRY;
extern ADXF_CMD_HSTRY D_003789E0[16];
extern Sint16 D_00378AE0[16];
extern Sint32 D_00378B00;

void func_0015B8B8(Sint32 cmdid, Sint32 fg, intptr_t prm_0, intptr_t prm_1, intptr_t prm_2) {
    ADXF_CMD_HSTRY *cmd_hstry;
    D_00378B00 %= 16;
    cmd_hstry = &D_003789E0[D_00378B00];
    if (fg == 0) {
        D_00378AE0[cmdid] += 1;
    }
    D_00378B00 += 1;
    cmd_hstry->cmdid = cmdid;
    cmd_hstry->fg = fg;
    cmd_hstry->ncall = D_00378AE0[cmdid];
    cmd_hstry->prm[0] = prm_0;
    cmd_hstry->prm[1] = prm_1;
    cmd_hstry->prm[2] = prm_2;
}
