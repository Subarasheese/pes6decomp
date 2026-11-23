/* compiler: ee-gcc-2.9-G0 */
/* scePadInfoMode adapted from LucasPicoli/god-hand-decomp, src/cod/00397f38.c. See THIRD_PARTY.md.
 */
typedef struct PadData {
    unsigned char data[0x50];
    unsigned short modeTable[4];
    int frame;
    int unk5C;
    int length;
    unsigned char modeConfig;
    unsigned char modeCurId;
    unsigned char model;
    unsigned char unk67;
    unsigned char nrOfModes;
    unsigned char modeCurOffs;
    unsigned char unk6A[6];
    unsigned char state;
    unsigned char reqState;
    unsigned char ok;
    unsigned char unk73[0xD];
} PadData;
typedef struct PadCmd {
    int count;
    int unk04;
    int len;
    unsigned char data[0x14];
} PadCmd;
typedef struct {
    PadData *buf;
    PadCmd *cmd;
    unsigned int iopCmd;
    int dmaid;
    int open;
    int unk14;
    int unk18;
} PadInfoT;
extern PadInfoT D_003F3250[2][4];
extern PadData *func_00111D48(int port, int slot, PadData *buf);
int func_00112398(int port, int slot, int term, int offs) {
    PadData fr;
    if (D_003F3250[port][slot].open == 0)
        return 0;
    func_00111D48(port, slot, &fr);
    if (fr.ok != 1)
        return 0;
    if (fr.reqState == 2)
        return 0;
    switch (term) {
    case 1:
        if (fr.modeCurId == 0xF3)
            return 0;
        return fr.modeCurId >> 4;

    case 2:
        if (fr.modeConfig == 1)
            return 0;
        return fr.modeTable[fr.modeCurOffs];

    case 3:
        if (fr.modeConfig == 1)
            return 0;
        return fr.modeCurOffs;

    case 4:
        if (fr.modeConfig == 1)
            return 0;
        if (offs == (-1))
            return fr.nrOfModes;
        if (offs >= fr.nrOfModes)
            return 0;
        return fr.modeTable[offs];
    }

    return 0;
}
