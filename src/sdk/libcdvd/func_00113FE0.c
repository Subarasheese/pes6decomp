/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int _sceCd_ncmd_semid;
extern volatile int D_00372AAC;
extern char D_00374600[], D_003740C0[], D_00373C80[], D_00373C50[], D_00372B80[], D_00372B00[];
int func_00113FE0(int code, int *out) {
    int value;
    if (code != 0x8001) {
        if (code != 0x8003) {
            if (code != 0x8002) {
                if (code != 0x8004) {
                    if (code != 0x8011) {
                        value = code == 0x8013 ? (int)D_00373C80 :
                                code == 0x8012 ? (int)D_003740C0 :
                                code == 0x8014 ? (int)D_00374600 : 0;
                    } else {
                        value = D_00372AAC;
                        *out = value;
                        goto done;
                    }
                } else value = (int)D_00373C50;
            } else value = (int)D_00372B80;
        } else value = (int)D_00372B00;
    } else value = _sceCd_ncmd_semid;
    *out = value;
done:
    return 1;
}
