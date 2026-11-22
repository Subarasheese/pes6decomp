/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading_motion.h"
extern s32 func_00BAC710(u16);
extern s32 func_00C36F80(HeadingActor *, u16);
extern u8 D_00CBCD8C[];

#define TURN(start, stop, degrees) ((u16)func_00B34000(actor, start, stop, degrees))
#define RELATIVE_TURN(start, stop) ((u16)func_00B340A0(actor, start, stop))

void func_00B2AD40(HeadingActor *actor) {
    s32 frame;
    float scale;
    u16 first, second;
    HeadingDescriptor *desc;
    frame = (s32)actor->motion->frame;
    scale = *D_003E74CC / actor->motion->rate;
    desc = actor->motion->descriptor;
    if (desc->frameDataOffset && (desc->flags & 1)) {
        const HeadingFrame16 *row = (HeadingFrame16 *)((u8 *)desc + desc->frameDataOffset) + frame;
        first = row->a;
        second = row->b;
    } else {
        const HeadingFrame8 *row = func_00208330(actor->motion->clip) + (frame + 1) / 2;
        first = row->a;
        second = row->b;
    }

    switch (func_00BAC710(actor->motion->clip)) {
    case 143:
    case 144:
    case 145:
    case 451:
    case 407:
    case 347:
    case 348:
    case 346:
    case 822:
    case 859:
    case 809:
    case 857:
    case 406:
        break;
    case 19:
        actor->heading += TURN(172, 200, -30);
        break;
    case 20:
        actor->heading += TURN(176, 216, -30);
        break;
    case 341:
    case 342:
        break;
    case 303:
        actor->heading += TURN(496, 532, -40);
        break;
    case 304:
        actor->heading += TURN(556, 600, 138);
        break;
    case 305:
        actor->heading += TURN(136, 176, 125);
        break;
    case 306:
        break;
    case 307:
        actor->heading += TURN(496, 536, 140);
        break;
    case 75:
        actor->heading += RELATIVE_TURN(20, 36);
        break;
    case 244:
        actor->heading += TURN(0, 28, -41);
        actor->heading += RELATIVE_TURN(44, 76);
        break;
    case 246:
        break;
    case 308:
        actor->heading += TURN(708, 728, 120);
        break;
    case 309:
        actor->heading += TURN(728, 740, 36);
        break;
    case 310:
    case 311:
    case 312:
        break;
    case 313:
        actor->heading += TURN(44, 90, 75);
        break;
    case 314:
        actor->heading += TURN(60, 104, 180);
        break;
    case 315:
        actor->heading += TURN(64, 84, -90);
        actor->heading += TURN(536, 564, -105);
        break;
    case 316:
        actor->heading += TURN(380, 408, -190);
        break;
    case 317:
        actor->heading += TURN(68, 88, 90);
        actor->heading += TURN(340, 364, 85);
        break;
    case 243:
        actor->heading += RELATIVE_TURN(32, 52);
        break;
    case 245:
        actor->heading += TURN(0, 28, -71);
        actor->heading += RELATIVE_TURN(36, 48);
        break;
    case 318:
    case 319:
    case 320:
    case 321:
    case 322:
    case 323:
    case 324:
    case 326:
        break;
    case 325:
        actor->heading += TURN(28, 84, 90);
        break;
    case 327:
    case 328:
    case 329:
    case 330:
    case 331:
    case 332:
    case 333:
    case 334:
    case 335:
    case 336:
    case 27:
    case 31:
    case 167:
    case 250:
    case 452:
        break;
    case 76:
        actor->heading += TURN(572, 620, -135);
        break;
    case 77:
        actor->heading += TURN(112, 170, -135);
        break;
    case 78:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(96, 120, -35);
        actor->heading += TURN(420, 488, -135);
        break;
    case 79:
        actor->heading += TURN(104, 148, -135);
        break;
    case 80:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(128, 340, 175);
        break;
    case 389:
        actor->heading += RELATIVE_TURN(324, 396);
        break;
    case 390:
        actor->heading += RELATIVE_TURN(332, 376);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[D_00CBCD8C[0]]))
            return;
        break;
    case 368:
        actor->heading += TURN(108, 148, -180);
        break;
    case 370:
        actor->heading -= RELATIVE_TURN(0, 48);
        break;
    case 369:
        actor->heading += RELATIVE_TURN(0, 40);
        break;
    case 372:
        actor->heading -= RELATIVE_TURN(16, 60);
        break;
    case 371:
        actor->heading += RELATIVE_TURN(32, 52);
        break;
    case 373:
        actor->heading += TURN(128, 144, -50);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[D_00CBCD8C[0]]))
            return;
        break;
    case 375:
        actor->heading += TURN(26, 54, 40);
        break;
    case 374:
        actor->heading += TURN(24, 48, -40);
        break;
    case 377:
        actor->heading += TURN(60, 104, 125);
        break;
    case 376:
        actor->heading += TURN(0, 60, -145);
        break;
    case 358:
        break;
    case 361:
        actor->heading += RELATIVE_TURN(68, 96);
        break;
    case 362:
        actor->heading -= RELATIVE_TURN(72, 108);
        break;
    case 359:
        actor->heading += RELATIVE_TURN(40, 100);
        break;
    case 360:
        actor->heading -= RELATIVE_TURN(20, 72);
        break;
    case 363:
        actor->heading += TURN(24, 44, -50);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[D_00CBCD8C[0]]))
            return;
        break;
    case 366:
        actor->heading += TURN(76, 96, 30);
        break;
    case 367:
        actor->heading += TURN(100, 124, -35);
        break;
    case 364:
        actor->heading += TURN(24, 72, 138);
        break;
    case 365:
        actor->heading += TURN(8, 62, -140);
        break;
    case 378:
        break;
    case 381:
        actor->heading += RELATIVE_TURN(20, 52);
        break;
    case 382:
        actor->heading -= RELATIVE_TURN(16, 40);
        break;
    case 379:
        actor->heading += RELATIVE_TURN(32, 68);
        break;
    case 380:
        actor->heading -= RELATIVE_TURN(2, 54);
        break;
    case 383:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[D_00CBCD8C[0]]))
            return;
        break;
    case 386:
        actor->heading += TURN(20, 72, -135);
        break;
    case 387:
        actor->heading += TURN(20, 72, 120);
        break;
    case 384:
        actor->heading += TURN(40, 76, -57);
        break;
    case 385:
        actor->heading += TURN(2, 54, 12);
        break;
    case 394:
    case 396:
    case 398:
        break;
    case 395:
        actor->heading += TURN(24, 50, 35);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 397:
        actor->heading += TURN(32, 68, 75);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 399:
        actor->heading += TURN(22, 66, 180);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 65:
        actor->heading += TURN(80, 160, 180);
        actor->heading += RELATIVE_TURN(322, 390);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 66:
        break;
    case 67:
        actor->heading += TURN(144, 220, 215);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 0:
        actor->heading += TURN(28, 64, 180);
        actor->heading += TURN(276, 296, -65);
        break;
    case 1:
        actor->heading += TURN(180, 232, 120);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 252:
        actor->heading += TURN(220, 270, -30);
        break;
    case 253:
        actor->heading += TURN(170, 240, 145);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 439:
        actor->heading += RELATIVE_TURN(62, 128);
        break;
    case 350:
        actor->heading += TURN(70, 90, -30);
        break;
    case 47:
        actor->heading += RELATIVE_TURN(178, 282);
        break;
    case 468:
        actor->heading += RELATIVE_TURN(338, 402);
        break;
    case 165:
        break;
    case 166:
        actor->heading += TURN(16, 48, 90);
        actor->heading -= RELATIVE_TURN(164, 242);
        break;
    case 400:
        break;
    case 10:
        actor->heading += TURN(640, 688, 120);
        break;
    case 11:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(64, 92, 135);
        break;
    case 12:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(52, 72, -120);
        actor->heading += TURN(280, 308, -115);
        break;
    case 13:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(246, 282, 120);
        break;
    case 90:
        actor->heading += RELATIVE_TURN(412, 482);
        break;
    case 91:
        actor->heading += TURN(356, 448, 135);
        break;
    case 92:
        actor->heading += TURN(216, 336, 105);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 93:
        actor->heading += TURN(164, 222, 180);
        break;
    case 401:
        actor->heading += RELATIVE_TURN(220, 300);
        break;
    case 402:
        break;
    case 254:
        actor->heading += RELATIVE_TURN(414, 486);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 41:
        actor->heading += TURN(54, 110, 180);
        break;
    case 15:
        actor->heading += TURN(32, 86, 180);
        break;
    case 100:
        actor->heading += TURN(502, 554, 135);
        break;
    case 101:
        actor->heading += TURN(52, 104, 135);
        break;
    case 102:
        actor->heading += TURN(28, 104, 180);
        actor->heading += TURN(280, 360, -30);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 103:
        actor->heading += TURN(36, 58, -90);
        actor->heading += TURN(228, 288, -110);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 104:
        actor->heading += TURN(138, 186, 135);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 261:
        actor->heading += TURN(614, 656, 135);
        break;
    case 262:
        actor->heading += TURN(96, 138, 135);
        break;
    case 263:
        actor->heading += TURN(398, 494, 135);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 264:
        actor->heading += TURN(414, 452, 135);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 265:
        actor->heading += TURN(272, 328, 135);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 21:
        actor->heading += TURN(40, 72, 180);
        actor->heading += TURN(644, 708, -35);
        break;
    case 22:
        actor->heading += TURN(4, 36, -45);
        break;
    case 23:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(412, 512, -243);
        break;
    case 24:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(324, 380, 135);
        break;
    case 25:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(260, 296, 135);
        break;
    case 81:
        actor->heading += TURN(106, 152, 80);
        actor->heading += RELATIVE_TURN(184, 232);
        break;
    case 453:
        actor->heading += RELATIVE_TURN(398, 464);
        break;
    case 72:
        actor->heading += RELATIVE_TURN(156, 216);
        break;
    case 16:
        actor->heading += TURN(36, 72, 180);
        break;
    case 17:
        actor->heading += TURN(42, 82, 180);
        break;
    case 18:
        actor->heading += TURN(32, 76, 180);
        actor->heading += TURN(340, 368, -30);
        break;
    case 89:
        actor->heading += RELATIVE_TURN(278, 326);
        break;
    case 393:
        actor->heading += RELATIVE_TURN(196, 256);
        break;
    case 14:
        actor->heading += TURN(4, 56, 180);
        actor->heading -= RELATIVE_TURN(160, 204);
        break;
    case 450:
        actor->heading += TURN(102, 174, 180);
        break;
    case 29:
        actor->heading += RELATIVE_TURN(180, 232);
        break;
    case 30:
        actor->heading += RELATIVE_TURN(24, 84);
        break;
    case 351:
        actor->heading += RELATIVE_TURN(254, 326);
        break;
    case 147:
        actor->heading += TURN(206, 266, -135);
        break;
    case 148:
        actor->heading += TURN(50, 120, 205);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 164:
        actor->heading += RELATIVE_TURN(56, 100);
        break;
    case 266:
        actor->heading -= RELATIVE_TURN(212, 280);
        break;
    case 454:
        actor->heading -= RELATIVE_TURN(212, 276);
        break;
    case 138:
        actor->heading += RELATIVE_TURN(176, 208);
        break;
    case 139:
        actor->heading += RELATIVE_TURN(158, 204);
        break;
    case 28:
        actor->heading += RELATIVE_TURN(92, 124);
        break;
    case 408:
    case 413:
    case 415:
    case 409:
    case 411:
        break;
    case 417:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        actor->heading += TURN(120, 160, -180);
        break;
    case 414:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        actor->heading += TURN(108, 156, 135);
        break;
    case 416:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        actor->heading += TURN(174, 214, 90);
        break;
    case 410:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        actor->heading += TURN(52, 116, -315);
        break;
    case 412:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[4]))
            return;
        actor->heading += TURN(204, 230, 45);
        break;
    case 35:
    case 36:
        break;
    case 37:
        actor->heading += TURN(20, 72, 180);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 42:
        actor->heading -= TURN(38, 74, 90);
        actor->heading += TURN(120, 160, 45);
        actor->heading -= RELATIVE_TURN(176, 208);
        break;
    case 64:
        actor->heading += TURN(68, 104, 180);
        break;
    case 73:
        actor->heading += RELATIVE_TURN(344, 412);
        break;
    case 74:
        actor->heading += RELATIVE_TURN(196, 252);
        break;
    case 82:
        actor->heading += RELATIVE_TURN(156, 248);
        break;
    case 255:
        actor->heading += TURN(268, 368, 150);
        break;
    case 256:
        actor->heading += TURN(244, 296, 135);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 258:
        actor->heading += RELATIVE_TURN(204, 296);
        break;
    case 260:
        actor->heading += RELATIVE_TURN(290, 346);
        break;
    case 440:
        actor->heading += TURN(148, 184, 180);
        break;
    case 349:
    case 355:
    case 466:
        break;
    case 190:
        actor->heading += TURN(488, 588, 120);
        break;
    case 191:
        actor->heading += TURN(494, 578, -240);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 192:
        actor->heading += TURN(540, 610, 120);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 193:
        actor->heading += TURN(420, 560, 150);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 194:
        actor->heading += TURN(480, 540, 150);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        break;
    case 168:
        actor->heading += TURN(1108, 1160, -225);
        break;
    case 169:
        actor->heading += TURN(264, 308, 155);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 170:
        actor->heading += TURN(256, 324, -240);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 171:
        actor->heading += TURN(616, 684, 160);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 172:
        actor->heading += TURN(512, 584, 150);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        break;
    case 173:
        actor->heading += TURN(160, 224, -195);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[4]))
            return;
        break;
    case 174:
        actor->heading += TURN(240, 312, -180);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[5]))
            return;
        break;
    case 180:
        actor->heading += TURN(360, 432, 127);
        actor->heading += TURN(472, 516, 38);
        break;
    case 181:
        actor->heading += TURN(420, 476, -111);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 182:
        actor->heading += TURN(316, 448, -195);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 183:
        actor->heading += TURN(360, 412, 116);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 184:
        actor->heading += TURN(40, 56, -70);
        actor->heading += TURN(192, 256, -128);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        break;
    case 185:
        actor->heading += TURN(672, 816, -220);
        break;
    case 186:
        actor->heading += TURN(76, 120, -113);
        actor->heading += TURN(720, 764, -96);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 187:
        actor->heading += TURN(76, 108, -100);
        actor->heading += TURN(416, 500, 75);
        actor->heading += TURN(544, 592, -225);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 188:
        actor->heading += TURN(348, 416, 121);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 189:
        actor->heading += TURN(280, 364, -238);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        break;
    case 195:
        actor->heading += TURN(484, 556, -180);
        break;
    case 196:
        actor->heading += TURN(388, 444, -126);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 197:
        actor->heading += TURN(340, 392, 208);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 198:
        actor->heading += TURN(276, 328, 171);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 199:
        actor->heading += TURN(164, 244, 161);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        break;
    case 140:
        actor->heading += TURN(240, 270, 90);
        break;
    case 141:
        actor->heading += TURN(104, 124, 90);
        actor->heading += TURN(280, 300, 15);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 142:
        actor->heading += TURN(60, 80, 55);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 200:
        break;
    case 201:
        actor->heading += TURN(40, 80, 165);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 202:
        actor->heading += TURN(56, 84, -90);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 203:
        actor->heading += TURN(60, 80, 45);
        actor->heading += TURN(176, 200, 20);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        break;
    case 204:
        actor->heading += TURN(116, 164, -150);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        break;
    case 175:
        actor->heading += TURN(584, 660, -200);
        break;
    case 176:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        actor->heading += TURN(428, 488, -200);
        break;
    case 177:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        actor->heading += TURN(484, 524, 130);
        break;
    case 178:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        actor->heading += TURN(336, 364, 155);
        break;
    case 179:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[3]))
            return;
        actor->heading += TURN(308, 344, 140);
        break;
    case 9:
        actor->heading += TURN(116, 172, 180);
        break;
    case 455:
        actor->heading += TURN(236, 308, 135);
        break;
    case 456:
        actor->heading += TURN(408, 476, 135);
        break;
    case 457:
        actor->heading += TURN(308, 400, 132);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 2:
    case 26:
    case 34:
    case 38:
    case 43:
    case 44:
    case 45:
    case 46:
    case 105:
    case 137:
    case 146:
    case 247:
    case 248:
    case 249:
    case 251:
    case 267:
    case 272:
    case 352:
    case 353:
    case 354:
    case 356:
    case 403:
    case 405:
    case 418:
    case 429:
    case 458:
    case 459:
    case 460:
    case 467:
    case 469:
        break;
    case 268:
        actor->heading += TURN(48, 108, 153);
        break;
    case 269:
        actor->heading += TURN(20, 92, 124);
        actor->heading += TURN(252, 312, 45);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 270:
        actor->heading += RELATIVE_TURN(28, 72);
        break;
    case 271:
        actor->heading -= RELATIVE_TURN(68, 164);
        break;
    case 430:
    case 431:
    case 433:
    case 434:
    case 437:
    case 438:
        break;
    case 432:
        actor->heading += TURN(0, 108, 135);
        break;
    case 435:
        actor->heading += TURN(0, 120, 120);
        actor->heading += TURN(260, 368, -120);
        break;
    case 436:
        actor->heading += TURN(52, 124, 115);
        actor->heading += TURN(308, 416, -115);
        break;
    case 608:
        actor->heading += TURN(260, 300, -115);
        break;
    case 609:
        actor->heading += TURN(300, 360, -125);
        break;
    case 610:
        actor->heading += TURN(120, 180, -55);
        break;
    case 611:
        actor->heading += TURN(100, 160, -90);
        actor->heading += TURN(300, 380, -125);
        break;
    case 714:
        break;
    case 715:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(258, 288, 30);
        break;
    case 716:
        break;
    case 717:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(284, 360, 125);
        break;
    case 710:
        break;
    case 711:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(640, 780, -168);
        break;
    case 712:
        actor->heading += TURN(480, 536, -30);
        break;
    case 713:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(474, 510, -25);
        break;
    case 707:
        break;
    case 708:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(466, 546, -25);
        break;
    case 703:
        break;
    case 704:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 700:
        break;
    case 701:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 702:
        break;
    case 699:
        actor->heading += TURN(196, 240, -185);
        break;
    case 705:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 706:
        break;
    case 709:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 682:
        break;
    case 686:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 687:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 683:
        break;
    case 684:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 685:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(420, 452, 155);
        break;
    case 692:
        break;
    case 693:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 694:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 689:
        break;
    case 690:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(280, 320, -150);
        break;
    case 691:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 688:
    case 612:
        break;
    case 613:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(356, 396, 190);
        break;
    case 614:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(240, 260, 45);
        break;
    case 615:
        break;
    case 616:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 617:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 618:
        actor->heading += TURN(360, 380, -180);
        break;
    case 619:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(380, 400, -180);
        break;
    case 620:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(380, 400, 180);
        break;
    case 633:
        break;
    case 634:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(300, 380, 35);
        break;
    case 635:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 640:
        break;
    case 641:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 638:
        break;
    case 642:
        actor->heading += TURN(280, 340, 15);
        break;
    case 643:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 647:
        break;
    case 648:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(320, 400, -180);
        break;
    case 644:
        break;
    case 645:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 646:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 649:
        actor->heading += TURN(276, 410, 102);
        break;
    case 87:
        break;
    case 88:
        if (func_00C36F80(actor, second))
            return;
        break;
    case 83:
        break;
    case 86:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(64, 112, 41);
        break;
    case 84:
        actor->heading += TURN(40, 116, -115);
        break;
    case 85:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(80, 176, 27);
        break;
    case 94:
        actor->heading += TURN(96, 172, -115);
        break;
    case 95:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(156, 200, 45);
        break;
    case 98:
        break;
    case 99:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(132, 220, 120);
        break;
    case 96:
        break;
    case 97:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(66, 166, -225);
        break;
    case 7:
        break;
    case 8:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(84, 180, -251);
        break;
    case 5:
        break;
    case 6:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(76, 120, 135);
        break;
    case 3:
        actor->heading += TURN(68, 244, 240);
        break;
    case 4:
        if (func_00C36F80(actor, second))
            return;
        actor->heading += TURN(132, 172, -11);
        break;
    case 671:
        actor->heading += TURN(88, 156, -180);
        break;
    case 672:
        actor->heading += TURN(112, 232, -180);
        break;
    case 673:
        actor->heading += TURN(416, 530, 180);
        break;
    case 674:
        actor->heading += TURN(330, 410, -90);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 665:
        actor->heading += TURN(20, 40, -135);
        break;
    case 666:
        actor->heading += TURN(30, 80, -110);
        break;
    case 603:
        actor->heading += TURN(90, 160, 140);
        break;
    case 604:
        actor->heading += TURN(82, 164, 135);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 669:
        actor->heading += TURN(270, 360, 155);
        break;
    case 670:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        actor->heading += TURN(370, 390, -45);
        break;
    case 621:
        actor->heading += TURN(330, 370, -25);
        break;
    case 622:
        actor->heading += TURN(172, 190, -18);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 623:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 624:
        break;
    case 625:
        actor->heading += TURN(274, 550, -180);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 626:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 627:
        break;
    case 628:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        actor->heading += TURN(50, 202, -50);
        break;
    case 605:
        actor->heading += TURN(778, 810, 20);
        break;
    case 606:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        actor->heading += TURN(626, 724, 200);
        break;
    case 607:
        actor->heading += TURN(372, 460, 180);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 629:
        actor->heading += TURN(328, 384, -90);
        break;
    case 630:
        actor->heading += TURN(168, 244, 90);
        actor->heading += TURN(364, 404, 30);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 631:
        actor->heading += TURN(310, 404, 185);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        break;
    case 632:
    case 636:
    case 637:
    case 639:
    case 667:
    case 668:
    case 681:
    case 502:
        break;
    case 503:
        actor->heading += TURN(280, 360, 88);
        break;
    case 504:
        actor->heading += TURN(296, 360, 125);
        break;
    case 505:
        actor->heading += TURN(240, 360, -138);
        break;
    case 506:
        break;
    case 507:
        actor->heading += TURN(268, 360, 100);
        break;
    case 508:
        break;
    case 509:
        actor->heading += TURN(288, 360, 140);
        break;
    case 510:
        actor->heading += TURN(236, 360, -143);
        break;
    case 584:
    case 579:
    case 580:
    case 583:
    case 581:
    case 582:
        break;
    case 585:
    case 586:
    case 587:
    case 588:
    case 590:
    case 591:
        actor->heading += TURN(134, 216, 90);
        actor->heading += TURN(728, 840, -180);
        break;
    case 589:
        actor->heading += TURN(134, 216, 90);
        actor->heading += TURN(728, 840, -180);
        break;
    case 595:
    case 596:
    case 597:
    case 598:
    case 599:
    case 600:
    case 601:
    case 592:
        break;
    case 593:
        actor->heading += TURN(830, 912, -25);
        break;
    case 594:
        actor->heading += TURN(140, 184, 25);
        break;
    case 650:
    case 651:
    case 652:
        break;
    case 470:
    case 472:
    case 476:
    case 478:
    case 483:
    case 485:
        actor->heading += TURN(86, 120, -45);
        break;
    case 480:
        break;
    case 471:
    case 475:
    case 477:
    case 479:
    case 484:
    case 486:
        actor->heading += TURN(120, 160, -90);
        break;
    case 473:
        break;
    case 474:
        actor->heading += TURN(420, 460, 18);
        break;
    case 481:
        break;
    case 482:
        actor->heading += TURN(30, 70, -90);
        break;
    case 697:
    case 696:
    case 695:
    case 698:
        break;
    case 602:
        return;
    case 675:
    case 676:
    case 678:
    case 677:
    case 679:
    case 680:
    case 463:
    case 462:
    case 464:
    case 490:
    case 492:
    case 494:
    case 489:
    case 491:
    case 493:
    case 487:
    case 488:
    case 653:
    case 654:
    case 655:
    case 660:
    case 495:
    case 496:
    case 497:
    case 498:
    case 499:
    case 500:
    case 501:
    case 659:
    case 511:
    case 512:
    case 513:
        break;
    case 525:
    case 526:
    case 527:
    case 528:
    case 530:
    case 531:
    case 532:
    case 533:
    case 534:
    case 535:
        actor->heading += TURN(120, 276, -150);
        break;
    case 529:
        actor->heading += TURN(180, 280, -90);
        break;
    case 514:
    case 515:
    case 517:
        break;
    case 518:
        actor->heading += TURN(16, 100, -90);
        break;
    case 536:
    case 539:
    case 540:
    case 541:
    case 542:
    case 543:
    case 544:
    case 546:
    case 547:
    case 554:
    case 555:
    case 556:
    case 537:
    case 538:
    case 656:
    case 657:
    case 658:
    case 557:
    case 558:
    case 559:
    case 560:
    case 561:
    case 562:
    case 563:
    case 564:
    case 565:
    case 566:
    case 567:
    case 568:
    case 569:
    case 662:
    case 661:
    case 664:
    case 663:
    case 570:
    case 571:
    case 573:
    case 574:
    case 575:
    case 576:
    case 577:
    case 106:
    case 107:
        break;
    case 404:
        actor->heading += TURN(534, 620, 180);
        break;
    case 220:
    case 221:
    case 222:
    case 223:
    case 228:
    case 229:
    case 226:
    case 227:
    case 236:
    case 237:
    case 234:
    case 235:
    case 224:
    case 225:
        break;
    case 232:
        actor->heading += TURN(156, 188, 60);
        break;
    case 233:
        actor->heading += TURN(164, 288, -202);
        break;
    case 230:
        actor->heading += TURN(160, 208, 90);
        break;
    case 231:
        actor->heading += TURN(280, 336, -166);
        break;
    case 419:
    case 420:
    case 421:
    case 422:
    case 423:
    case 424:
    case 425:
    case 426:
    case 427:
    case 428:
    case 152:
    case 149:
    case 150:
    case 151:
    case 153:
    case 154:
    case 112:
    case 116:
    case 117:
        break;
    case 133:
        actor->heading += TURN(14, 80, actor->turnAngle / 182);
        break;
    case 135:
        actor->heading += TURN(8, 74, -actor->turnAngle / 182);
        break;
    case 134:
        actor->heading += TURN(14, 86, actor->turnAngle / 182);
        break;
    case 136:
        break;
    case 60:
        actor->heading += TURN(0, 72, -180);
        break;
    case 61:
        actor->heading += TURN(180, 264, 153);
        break;
    case 62:
        actor->heading += TURN(216, 276, 40);
        break;
    case 63:
        actor->heading += TURN(212, 248, 140);
        break;
    case 56:
        actor->heading += TURN(16, 100, 180);
        actor->heading += TURN(252, 288, 32);
        break;
    case 57:
        actor->heading += TURN(40, 120, 38);
        actor->heading += TURN(208, 256, 55);
        break;
    case 58:
        actor->heading += TURN(0, 76, 164);
        actor->heading += TURN(288, 352, -132);
        break;
    case 59:
        actor->heading += TURN(240, 276, 41);
        break;
    case 122:
        actor->heading += TURN(68, 152, 90);
        break;
    case 214:
        actor->heading += TURN(112, 168, -147);
        break;
    case 206:
        actor->heading += RELATIVE_TURN(114, 202);
        break;
    case 212:
        actor->heading += RELATIVE_TURN(56, 124);
        break;
    case 213:
        actor->heading += RELATIVE_TURN(144, 236);
        break;
    case 970:
    case 969:
        break;
    case 111:
        actor->heading += TURN(0, 48, 90);
        actor->heading += TURN(196, 304, 123);
        break;
    case 209:
        actor->heading += TURN(204, 244, 38);
        break;
    case 210:
        actor->heading += TURN(36, 168, 123);
        break;
    case 211:
        actor->heading += TURN(160, 256, -117);
        break;
    case 155:
    case 120:
    case 163:
    case 162:
    case 161:
    case 119:
        break;
    case 158:
        actor->heading += TURN(200, 336, 92);
        actor->heading += TURN(388, 472, 170);
        break;
    case 159:
        actor->heading += TURN(76, 156, -97);
        break;
    case 160:
        break;
    case 118:
        actor->heading += TURN(36, 124, 190);
        break;
    case 121:
    case 156:
    case 157:
        break;
    case 960:
        actor->heading += TURN(360, 400, -40);
        break;
    case 961:
        actor->heading += TURN(104, 160, -75);
        break;
    case 962:
    case 963:
        break;
    case 964:
        actor->heading += TURN(180, 240, 45);
        break;
    case 965:
        actor->heading += TURN(360, 400, -40);
        break;
    case 966:
        break;
    case 967:
        actor->heading += TURN(232, 348, 215);
        break;
    case 968:
        actor->heading += TURN(204, 316, -145);
        break;
    case 115:
        break;
    case 123:
        actor->heading += TURN(52, 116, 90);
        break;
    case 124:
        actor->heading += TURN(176, 224, 150);
        break;
    case 205:
        actor->heading += RELATIVE_TURN(156, 212);
        break;
    case 219:
        actor->heading += RELATIVE_TURN(136, 200);
        break;
    case 218:
        break;
    case 215:
        actor->heading += TURN(48, 212, -235);
        break;
    case 216:
        actor->heading += TURN(80, 144, -60);
        break;
    case 217:
        actor->heading += TURN(88, 192, -83);
        break;
    case 465:
        actor->heading += TURN(140, 200, 135);
        break;
    case 68:
        actor->heading += TURN(148, 192, -90);
        break;
    case 108:
        actor->heading += TURN(168, 208, 122);
        break;
    case 69:
        actor->heading += TURN(52, 108, -90);
        break;
    case 109:
        actor->heading += TURN(84, 156, 135);
        break;
    case 71:
        actor->heading += TURN(108, 164, 39);
        break;
    case 130:
        break;
    case 131:
        actor->heading += TURN(184, 236, -73);
        break;
    case 207:
        actor->heading += TURN(156, 196, 43);
        break;
    case 208:
        break;
    case 110:
        actor->heading += TURN(140, 200, -90);
        break;
    case 132:
        actor->heading += TURN(0, 44, 90);
        break;
    case 70:
        actor->heading += TURN(172, 212, 45);
        break;
    case 129:
        actor->heading += TURN(228, 300, -135);
        break;
    case 126:
        actor->heading += TURN(84, 140, -180);
        break;
    case 343:
        actor->heading += TURN(52, 112, 40);
        break;
    case 344:
        actor->heading += TURN(48, 100, -90);
        break;
    case 345:
        actor->heading += TURN(48, 80, -90);
        break;
    case 127:
        break;
    case 337:
        actor->heading += TURN(32, 80, -80);
        actor->heading += TURN(188, 240, 105);
        actor->heading += TURN(264, 336, -105);
        break;
    case 338:
        break;
    case 339:
        actor->heading += TURN(120, 212, 140);
        break;
    case 340:
        break;
    case 53:
        actor->heading += TURN(136, 172, -60);
        actor->heading += TURN(272, 352, 180);
        break;
    case 48:
        actor->heading += TURN(116, 156, -55);
        actor->heading += TURN(260, 364, 145);
        break;
    case 113:
        actor->heading += TURN(216, 292, 138);
        break;
    case 54:
        actor->heading += TURN(328, 360, 38);
        break;
    case 55:
        actor->heading += TURN(16, 44, -70);
        actor->heading += TURN(264, 356, -152);
        break;
    case 49:
        actor->heading += TURN(360, 428, 238);
        break;
    case 51:
        actor->heading += TURN(320, 376, -118);
        break;
    case 50:
        actor->heading += TURN(88, 128, 145);
        actor->heading += TURN(312, 348, 72);
        break;
    case 52:
        actor->heading += TURN(300, 356, 133);
        break;
    case 114:
        actor->heading += TURN(176, 264, -180);
        break;
    case 238:
        break;
    case 239:
        actor->heading += TURN(224, 252, 29);
        break;
    case 128:
        actor->heading += TURN(108, 148, 56);
        break;
    case 125:
        actor->heading += TURN(96, 148, 90);
        break;
    case 240:
        actor->heading += TURN(24, 56, 75);
        break;
    case 241:
        break;
    case 242:
        actor->heading += TURN(88, 116, 90);
        break;
    case 32:
        actor->heading += TURN(56, 168, -180);
        break;
    case 33:
        actor->heading += TURN(68, 196, 180);
        break;
    default:
        return;
    }
    actor->duration = (s32)((u32)actor->motion->descriptor->duration / scale);
    func_00B341F0(actor, first, second);
}
