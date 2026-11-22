/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    s16 components[3];
} MotionFrameRecord;
typedef struct {
    u8 unused : 1;
    u8 recordCode : 5;
    u8 otherFlags : 2;
    u8 pad01[15];
    u16 firstFrame;
    u16 lastFrame;
} MotionFrameMetadata;
extern MotionFrameMetadata *func_00208310(s32 clip);
extern s32 func_00BC03A0(u32 clip);

extern MotionFrameRecord D_00CA0380[];
extern MotionFrameRecord *D_00CA71E0[];

extern MotionFrameRecord D_00CA0388[];
extern MotionFrameRecord D_00CA5358[];
extern MotionFrameRecord D_00CA42D8[];
extern MotionFrameRecord D_00CA42D0[];
extern MotionFrameRecord D_00CA3D50[];
extern MotionFrameRecord D_00CA3D30[];
extern MotionFrameRecord D_00CA3D48[];
extern MotionFrameRecord D_00CA3D38[];
extern MotionFrameRecord D_00CA3D40[];
extern MotionFrameRecord D_00CA04D0[];
extern MotionFrameRecord D_00CA0780[];
extern MotionFrameRecord D_00CA0778[];
extern MotionFrameRecord D_00CA1A48[];
extern MotionFrameRecord D_00CA0A30[];
extern MotionFrameRecord D_00CA0A36[];
extern MotionFrameRecord D_00CA0A3C[];
extern MotionFrameRecord D_00CA0A28[];
extern MotionFrameRecord D_00CA1978[];
extern MotionFrameRecord D_00CA1970[];
extern MotionFrameRecord D_00CA0ED0[];
extern MotionFrameRecord D_00CA0E30[];
extern MotionFrameRecord D_00CA08A8[];
extern MotionFrameRecord D_00CA08A0[];
extern MotionFrameRecord D_00CA0890[];
extern MotionFrameRecord D_00CA0888[];
extern MotionFrameRecord D_00CA0898[];
extern MotionFrameRecord D_00CA0880[];
extern MotionFrameRecord D_00CA0978[];
extern MotionFrameRecord D_00CA0878[];
extern MotionFrameRecord D_00CA0A20[];
extern MotionFrameRecord D_00CA0A10[];
extern MotionFrameRecord D_00CA0A18[];
extern MotionFrameRecord D_00CA0A50[];
extern MotionFrameRecord D_00CA0AA8[];
extern MotionFrameRecord D_00CA0B08[];
extern MotionFrameRecord D_00CA0B00[];
extern MotionFrameRecord D_00CA1470[];
extern MotionFrameRecord D_00CA1410[];
extern MotionFrameRecord D_00CA14D0[];
extern MotionFrameRecord D_00CA14B0[];
extern MotionFrameRecord D_00CA14F0[];
extern MotionFrameRecord D_00CA1490[];
extern MotionFrameRecord D_00CA1430[];
extern MotionFrameRecord D_00CA1450[];
extern MotionFrameRecord D_00CA2A10[];
extern MotionFrameRecord D_00CA2A30[];
extern MotionFrameRecord D_00CA13F0[];
extern MotionFrameRecord D_00CA13B0[];
extern MotionFrameRecord D_00CA13D0[];
extern MotionFrameRecord D_00CA16E8[];
extern MotionFrameRecord D_00CA1770[];
extern MotionFrameRecord D_00CA1810[];
extern MotionFrameRecord D_00CA3D78[];
extern MotionFrameRecord D_00CA1B80[];
extern MotionFrameRecord D_00CA1B88[];
extern MotionFrameRecord D_00CA1B48[];
extern MotionFrameRecord D_00CA1B50[];
extern MotionFrameRecord D_00CA19E0[];
extern MotionFrameRecord D_00CA3D28[];
extern MotionFrameRecord D_00CA3B80[];
extern MotionFrameRecord D_00CA3840[];
extern MotionFrameRecord D_00CA3310[];
extern MotionFrameRecord D_00CA2C60[];
extern MotionFrameRecord D_00CA2C40[];
extern MotionFrameRecord D_00CA2C20[];
extern MotionFrameRecord D_00CA2C00[];
extern MotionFrameRecord D_00CA2BE0[];
extern MotionFrameRecord D_00CA2BC8[];
extern MotionFrameRecord D_00CA2BB8[];
extern MotionFrameRecord D_00CA2AF0[];
extern MotionFrameRecord D_00CA2AD0[];
extern MotionFrameRecord D_00CA2AB0[];
extern MotionFrameRecord D_00CA2A90[];
extern MotionFrameRecord D_00CA2A50[];
extern MotionFrameRecord D_00CA2A70[];
extern MotionFrameRecord D_00CA29F0[];
extern MotionFrameRecord D_00CA29B0[];
extern MotionFrameRecord D_00CA29D0[];
extern MotionFrameRecord D_00CA2990[];
extern MotionFrameRecord D_00CA2950[];
extern MotionFrameRecord D_00CA2930[];
extern MotionFrameRecord D_00CA2970[];
extern MotionFrameRecord D_00CA2910[];
extern MotionFrameRecord D_00CA2840[];
extern MotionFrameRecord D_00CA2810[];
extern MotionFrameRecord D_00CA09A8[];
extern MotionFrameRecord D_00CA09A0[];
extern MotionFrameRecord D_00CA1CE8[];
extern MotionFrameRecord D_00CA1CF0[];
extern MotionFrameRecord D_00CA1CE0[];
extern MotionFrameRecord D_00CA1CD0[];
extern MotionFrameRecord D_00CA1CC8[];
extern MotionFrameRecord D_00CA1CD8[];
extern MotionFrameRecord D_00CA1CB8[];
extern MotionFrameRecord D_00CA1CB0[];
extern MotionFrameRecord D_00CA1CA8[];
extern MotionFrameRecord D_00CA1CA0[];
extern MotionFrameRecord D_00CA1C90[];
extern MotionFrameRecord D_00CA1C98[];
extern MotionFrameRecord D_00CA0998[];
extern MotionFrameRecord D_00CA0990[];
extern MotionFrameRecord D_00CA0988[];
extern MotionFrameRecord D_00CA0980[];
extern MotionFrameRecord *D_00C9F3C0[];

#define CLAMP_FRAMES_SIX_TO_EIGHT(frame)                                                           \
    do {                                                                                           \
        if ((frame) <= 6)                                                                          \
            (frame) = 0;                                                                           \
        else {                                                                                     \
            (frame) -= 6;                                                                          \
            if ((frame) > 2)                                                                       \
                (frame) = 2;                                                                       \
        }                                                                                          \
    } while (0)

#define ONLY_FRAMES_SIX_TO_EIGHT(frame)                                                            \
    do {                                                                                           \
        if ((frame) >= 6 && (frame) <= 8)                                                          \
            (frame) -= 6;                                                                          \
        else                                                                                       \
            (frame) = 0;                                                                           \
    } while (0)

MotionFrameRecord *func_0093CD10(u32 clip, u32 frame, s16 *outRecordCode) {
    MotionFrameMetadata *metadata = func_00208310((u16)clip);
    u32 first, last;
    MotionFrameRecord *records;
    *outRecordCode = metadata->recordCode;
    first = metadata->firstFrame;
    last = metadata->lastFrame;
    if (first || last) {
        if (frame <= first)
            frame = first;
        last = frame >= last ? last : frame;
        frame = last - first;
    }
    if ((u16)clip >= 0x5CA) {
        s32 index = func_00BC03A0(clip);
        records = 0;
        if (index != 0xffff)
            records = D_00CA71E0[index];
        if (records)
            return &records[frame];
        return D_00CA0380;
    }

    /* Most clips use the pointer table. The remaining cases select fixed records or adjust the
     * frame before indexing. */
    switch ((u16)clip) {
        case 4:
        case 5:
        case 6:
        case 543:
        case 545:
        case 546:
        case 7:
        case 544:
        case 8:
        case 547:
        case 40:
        case 46:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 461:
        case 66:
        case 71:
        case 137:
        case 77:
        case 267:
        case 84:
        case 88:
        case 566:
        case 89:
        case 93:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 567:
        case 938:
        case 657:
        case 756:
        case 112:
        case 113:
        case 114:
        case 115:
        case 362:
        case 450:
        case 572:
        case 573:
        case 574:
        case 575:
        case 154:
        case 155:
        case 156:
        case 133:
        case 134:
        case 135:
        case 576:
        case 157:
        case 158:
        case 159:
        case 160:
        case 161:
        case 162:
        case 163:
        case 164:
        case 364:
        case 165:
        case 166:
        case 167:
        case 168:
        case 169:
        case 170:
        case 465:
        case 171:
        case 172:
        case 767:
        case 72:
        case 174:
        case 175:
        case 173:
        case 561:
        case 176:
        case 177:
        case 178:
        case 304:
        case 15:
        case 757:
        case 418:
        case 179:
        case 180:
        case 397:
        case 181:
        case 577:
        case 578:
        case 201:
        case 202:
        case 580:
        case 581:
        case 582:
        case 583:
        case 206:
        case 207:
        case 208:
        case 209:
        case 597:
        case 219:
        case 395:
        case 584:
        case 585:
        case 203:
        case 204:
        case 210:
        case 211:
        case 212:
        case 214:
        case 213:
        case 215:
        case 216:
        case 217:
        case 218:
        case 220:
        case 221:
        case 222:
        case 223:
        case 929:
        case 935:
        case 275:
        case 224:
        case 225:
        case 722:
        case 226:
        case 260:
        case 227:
        case 228:
        case 230:
        case 231:
        case 37:
        case 232:
        case 586:
        case 233:
        case 234:
        case 235:
        case 238:
        case 240:
        case 245:
        case 249:
        case 236:
        case 934:
        case 405:
        case 403:
        case 239:
        case 587:
        case 241:
        case 243:
        case 548:
        case 549:
        case 550:
        case 12:
        case 13:
        case 244:
        case 246:
        case 247:
        case 248:
        case 250:
        case 251:
        case 252:
        case 668:
        case 253:
        case 237:
        case 255:
        case 256:
        case 258:
        case 259:
        case 261:
        case 271:
        case 272:
        case 273:
        case 398:
        case 689:
        case 690:
        case 14:
        case 262:
        case 263:
        case 651:
        case 903:
        case 904:
        case 652:
        case 902:
        case 906:
        case 280:
        case 907:
        case 412:
        case 415:
        case 921:
        case 416:
        case 278:
        case 409:
        case 644:
        case 683:
        case 442:
        case 516:
        case 396:
        case 360:
        case 684:
        case 443:
        case 685:
        case 444:
        case 445:
        case 686:
        case 687:
        case 688:
        case 446:
        case 305:
        case 517:
        case 691:
        case 712:
        case 773:
        case 774:
        case 775:
        case 776:
        case 777:
        case 778:
        case 449:
        case 515:
        case 399:
        case 563:
        case 779:
        case 905:
        case 458:
        case 306:
        case 344:
        case 351:
        case 352:
        case 939:
        case 940:
        case 942:
        case 943:
        case 601:
        case 602:
        case 603:
        case 284:
        case 949:
        case 953:
        case 954:
        case 955:
        case 956:
        case 345:
        case 346:
        case 347:
        case 348:
        case 501:
        case 349:
        case 500:
        case 350:
        case 958:
        case 959:
        case 960:
        case 961:
        case 962:
        case 78:
        case 353:
        case 941:
        case 964:
        case 966:
        case 967:
        case 968:
        case 970:
        case 972:
        case 973:
        case 974:
        case 976:
        case 977:
        case 477:
        case 26:
        case 414:
        case 401:
        case 379:
        case 11:
        case 963:
        case 965:
        case 969:
        case 971:
        case 975:
        case 981:
        case 893:
        case 655:
        case 999:
        case 998:
        case 434:
        case 658:
        case 413:
        case 822:
        case 606:
        case 607:
        case 608:
        case 609:
        case 437:
        case 610:
        case 376:
        case 612:
        case 611:
        case 614:
        case 48:
        case 354:
        case 615:
        case 616:
        case 617:
        case 618:
        case 619:
        case 622:
        case 623:
        case 626:
        case 620:
        case 621:
        case 624:
        case 625:
        case 627:
        case 629:
        case 635:
        case 439:
        case 637:
        case 827:
        case 638:
        case 640:
        case 642:
        case 384:
        case 385:
        case 291:
        case 590:
        case 656:
        case 441:
        case 710:
        case 729:
        case 730:
        case 725:
        case 726:
        case 727:
        case 728:
        case 731:
        case 732:
        case 733:
        case 734:
        case 738:
        case 927:
        case 368:
        case 928:
        case 753:
        case 760:
        case 788:
        case 762:
        case 366:
        case 763:
        case 765:
        case 448:
        case 768:
        case 769:
        case 750:
        case 556:
        case 783:
        case 375:
        case 483:
        case 784:
        case 781:
        case 374:
        case 490:
        case 476:
        case 268:
        case 782:
        case 780:
        case 464:
        case 463:
        case 786:
        case 482:
        case 787:
        case 486:
        case 475:
        case 485:
        case 785:
        case 361:
        case 800:
        case 793:
        case 47:
        case 355:
        case 791:
        case 792:
        case 937:
        case 933:
        case 936:
        case 826:
        case 828:
        case 497:
        case 494:
        case 495:
        case 356:
        case 492:
        case 496:
        case 493:
        case 799:
        case 801:
        case 797:
        case 417:
        case 153:
        case 798:
        case 480:
        case 802:
        case 803:
        case 804:
        case 451:
        case 806:
        case 378:
        case 805:
        case 807:
        case 808:
        case 810:
        case 811:
        case 812:
        case 813:
        case 814:
        case 815:
        case 452:
        case 453:
        case 394:
        case 816:
        case 817:
        case 818:
        case 286:
        case 373:
        case 820:
        case 821:
        case 890:
        case 371:
        case 918:
        case 837:
        case 843:
        case 824:
        case 823:
        case 825:
        case 830:
        case 829:
        case 831:
        case 832:
        case 833:
        case 834:
        case 839:
        case 845:
        case 835:
        case 838:
        case 840:
        case 454:
        case 841:
        case 844:
        case 864:
        case 836:
        case 842:
        case 846:
        case 850:
        case 851:
        case 852:
        case 853:
        case 854:
        case 855:
        case 856:
        case 858:
        case 859:
        case 860:
        case 861:
        case 862:
        case 863:
        case 865:
        case 869:
        case 867:
        case 455:
        case 871:
        case 872:
        case 456:
        case 873:
        case 875:
        case 874:
        case 866:
        case 876:
        case 877:
        case 879:
        case 880:
        case 882:
        case 457:
        case 870:
        case 878:
        case 868:
        case 881:
        case 883:
        case 884:
        case 885:
        case 886:
        case 894:
        case 895:
        case 64:
        case 68:
        case 74:
        case 76:
        case 459:
            records = D_00C9F3C0[(u16)clip];
            return &records[frame];
        case 85:
            return D_00CA0980;
        case 86:
            return D_00CA0988;
        case 87:
            return D_00CA0990;
        case 565:
            return D_00CA0998;
        case 553:
            return D_00CA1C98;
        case 65:
            return D_00CA1C90;
        case 61:
            return D_00CA1CA0;
        case 62:
            return D_00CA1CA8;
        case 69:
            return D_00CA1CB0;
        case 70:
            return D_00CA1CB8;
        case 31:
            return D_00CA1CD8;
        case 75:
            return D_00CA1CC8;
        case 81:
            return D_00CA1CD0;
        case 564:
            return D_00CA1CE0;
        case 82:
            return D_00CA1CF0;
        case 32:
            return D_00CA1CE8;
        case 63:
            return D_00CA09A0;
        case 67:
            return D_00CA09A8;
        case 116:
            if (frame >= 5)
                frame = 5;
            return &D_00CA2810[frame];
        case 117:
            if (frame >= 5)
                frame = 5;
            return &D_00CA2840[frame];
        case 118:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2910[frame];
        case 121:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2970[frame];
        case 143:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2930[frame];
        case 571:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2950[frame];
        case 122:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2990[frame];
        case 152:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA29D0[frame];
        case 144:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA29B0[frame];
        case 123:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA29F0[frame];
        case 141:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2A70[frame];
        case 613:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2A50[frame];
        case 142:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2A90[frame];
        case 129:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2AB0[frame];
        case 130:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2AD0[frame];
        case 151:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2AF0[frame];
        case 10:
            return D_00CA2BB8;
        case 551:
            return D_00CA2BC8;
        case 136:
            ONLY_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2BE0[frame];
        case 138:
            ONLY_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2C00[frame];
        case 139:
            if (frame < 6)
                frame = 0;
            else {
                frame -= 6;
                if (frame > 2)
                    frame = 2;
            }
            return &D_00CA2C20[frame];
        case 119:
            ONLY_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2C40[frame];
        case 131:
            ONLY_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2C60[frame];
        case 952:
            return &D_00CA3310[frame];
        case 641:
            if (frame > 26)
                frame = 26;
            return &D_00CA3840[frame];
        case 639:
            if (frame > 19)
                frame = 19;
            return &D_00CA3B80[frame];
        case 944:
            return D_00CA3D28;
        case 478:
            if (frame >= 7)
                frame = 7;
            return &D_00CA19E0[frame];
        case 552:
            return D_00CA1B50;
        case 28:
            return D_00CA1B48;
        case 507:
            return D_00CA1B88;
        case 746:
            return D_00CA1B80;
        case 311:
            return D_00CA3D78;
        case 950:
            return &D_00CA1810[frame];
        case 948:
            return &D_00CA1770[frame];
        case 59:
            return D_00CA16E8;
        case 150:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA13D0[frame];
        case 570:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA13B0[frame];
        case 149:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA13F0[frame];
        case 140:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2A30[frame];
        case 470:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA2A10[frame];
        case 125:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA1450[frame];
        case 400:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA1430[frame];
        case 146:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA1490[frame];
        case 148:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA14F0[frame];
        case 145:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA14B0[frame];
        case 147:
            CLAMP_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA14D0[frame];
        case 124:
            ONLY_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA1410[frame];
        case 120:
            ONLY_FRAMES_SIX_TO_EIGHT(frame);
            return &D_00CA1470[frame];
        case 73:
            return D_00CA0B00;
        case 79:
            return D_00CA0B08;
        case 809:
            return D_00CA0AA8;
        case 60:
            return D_00CA0A50;
        case 743:
            return D_00CA0A18;
        case 742:
            return D_00CA0A10;
        case 745:
            return D_00CA0A20;
        case 30:
            return D_00CA0878;
        case 29:
            return D_00CA0978;
        case 90:
            return D_00CA0880;
        case 96:
            return D_00CA0898;
        case 94:
            return D_00CA0888;
        case 95:
            return D_00CA0890;
        case 91:
            return D_00CA08A0;
        case 92:
            return D_00CA08A8;
        case 951:
            return &D_00CA0E30[frame];
        case 957:
            return &D_00CA0ED0[frame];
        case 741:
            return D_00CA1970;
        case 737:
            return D_00CA1978;
        case 744:
            return D_00CA0A28;
        case 740:
            if (frame <= 3)
                return D_00CA0A30;
            if (frame == 4)
                return D_00CA0A36;
            return D_00CA0A3C;
        case 372:
            return D_00CA1A48;
        case 979:
            return D_00CA0778;
        case 980:
            return D_00CA0780;
        case 307:
            return &D_00CA04D0[frame];
        case 995:
            return D_00CA3D40;
        case 986:
            return D_00CA3D38;
        case 991:
            return D_00CA3D48;
        case 984:
            return D_00CA3D30;
        case 989:
            return D_00CA3D50;
        case 947:
            return D_00CA42D0;
        case 946:
            return D_00CA42D8;
        case 460:
            return D_00CA5358;
        case 382:
            return D_00CA0388;
    }
    return D_00CA0380;
}
