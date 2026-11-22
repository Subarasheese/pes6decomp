/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading_motion.h"

#define TURN(start, stop, degrees) ((u16)func_00B34000(actor, start, stop, degrees))
#define RELATIVE_TURN(start, stop) ((u16)func_00B340A0(actor, start, stop))

void func_00B31650(HeadingActor *actor) {
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
    switch (actor->motion->clip) {
    case 1023:
        actor->heading += RELATIVE_TURN(0, 40);
        break;
    case 1024:
        actor->heading += RELATIVE_TURN(12, 48);
        break;
    case 1211:
        actor->heading += RELATIVE_TURN(8, 40);
        break;
    case 1212:
        actor->heading += RELATIVE_TURN(32, 56);
        break;
    case 1209:
        actor->heading += RELATIVE_TURN(20, 52);
        break;
    case 1210:
        actor->heading += RELATIVE_TURN(24, 48);
        break;
    case 1026:
        actor->heading += RELATIVE_TURN(4, 44);
        break;
    case 1027:
        actor->heading += RELATIVE_TURN(4, 44);
        break;
    case 1413:
        actor->heading += RELATIVE_TURN(16, 40);
        break;
    case 1414:
        actor->heading += RELATIVE_TURN(12, 36);
        break;
    case 1233:
        actor->heading += RELATIVE_TURN(8, 36);
        break;
    case 1232:
        actor->heading += RELATIVE_TURN(8, 44);
        break;
    case 1356:
        actor->heading += RELATIVE_TURN(12, 44);
        break;
    case 1388:
        actor->heading += RELATIVE_TURN(12, 52);
        break;
    case 1224:
        actor->heading += RELATIVE_TURN(0, 36);
        break;
    case 1225:
        actor->heading += RELATIVE_TURN(20, 60);
        break;
    case 1250:
        actor->heading += RELATIVE_TURN(12, 32);
        break;
    case 1248:
        actor->heading += RELATIVE_TURN(8, 56);
        break;
    case 1251:
        actor->heading += RELATIVE_TURN(68, 96);
        break;
    case 1289:
        actor->heading += RELATIVE_TURN(16, 48);
        break;
    case 1403:
        actor->heading += RELATIVE_TURN(16, 40);
        break;
    case 1222:
        actor->heading += RELATIVE_TURN(0, 36);
        break;
    case 1223:
        actor->heading += RELATIVE_TURN(32, 68);
        break;
    case 1249:
        actor->heading += RELATIVE_TURN(28, 76);
        break;
    case 1291:
        actor->heading += RELATIVE_TURN(16, 64);
        break;
    case 1292:
        actor->heading += RELATIVE_TURN(8, 44);
        break;
    case 1404:
        actor->heading += RELATIVE_TURN(8, 48);
        break;
    case 1256:
        actor->heading -= RELATIVE_TURN(24, 52);
        break;
    case 1228:
        actor->heading += RELATIVE_TURN(36, 76);
        break;
    case 1226:
        actor->heading += RELATIVE_TURN(36, 76);
        break;
    case 1308:
        actor->heading += RELATIVE_TURN(16, 44);
        break;
    case 1309:
        actor->heading += RELATIVE_TURN(16, 44);
        break;
    case 1353:
        actor->heading += RELATIVE_TURN(0, 28);
        break;
    case 1352:
        actor->heading += RELATIVE_TURN(84, 156);
        break;
    case 1239:
        actor->heading += RELATIVE_TURN(36, 104);
        break;
    case 1240:
        actor->heading += RELATIVE_TURN(44, 96);
        break;
    case 1242:
        actor->heading += RELATIVE_TURN(16, 60);
        break;
    case 1243:
        actor->heading += RELATIVE_TURN(20, 56);
        break;
    case 1338:
        actor->heading += RELATIVE_TURN(24, 72);
        break;
    case 1237:
        actor->heading += RELATIVE_TURN(4, 20);
        break;
    case 1238:
        actor->heading += RELATIVE_TURN(8, 20);
        break;
    case 1409:
        actor->heading += RELATIVE_TURN(8, 32);
        break;
    case 1410:
        actor->heading += RELATIVE_TURN(12, 36);
        break;
    case 1246:
        actor->heading += RELATIVE_TURN(128, 184);
        break;
    case 1247:
        actor->heading += RELATIVE_TURN(132, 192);
        break;
    case 1255:
        actor->heading += RELATIVE_TURN(28, 88);
        break;
    case 1258:
        actor->heading += RELATIVE_TURN(40, 92);
        break;
    case 1259:
        actor->heading += RELATIVE_TURN(32, 68);
        break;
    case 1347:
        actor->heading += RELATIVE_TURN(28, 80);
        break;
    case 1361:
        actor->heading += RELATIVE_TURN(24, 112);
        break;
    case 1290:
        actor->heading += RELATIVE_TURN(44, 100);
        break;
    case 1363:
        actor->heading += RELATIVE_TURN(12, 76);
        break;
    case 1364:
        actor->heading += RELATIVE_TURN(72, 112);
        break;
    case 1204:
        actor->heading += RELATIVE_TURN(4, 60);
        break;
    case 1203:
        actor->heading += RELATIVE_TURN(0, 44);
        break;
    case 1201:
        actor->heading += RELATIVE_TURN(12, 44);
        break;
    case 1068:
        actor->heading += RELATIVE_TURN(12, 24);
        break;
    case 1200:
        actor->heading += RELATIVE_TURN(12, 32);
        break;
    case 1274:
        actor->heading += RELATIVE_TURN(100, 152);
        break;
    case 1285:
        actor->heading += RELATIVE_TURN(4, 64);
        break;
    case 1297:
        actor->heading += RELATIVE_TURN(20, 40);
        break;
    case 1298:
        actor->heading += RELATIVE_TURN(8, 32);
        break;
    case 1299:
        actor->heading += RELATIVE_TURN(0, 20);
        break;
    case 1300:
        actor->heading += RELATIVE_TURN(8, 32);
        break;
    case 1287:
        actor->heading += RELATIVE_TURN(36, 52);
        break;
    case 1286:
        actor->heading += RELATIVE_TURN(48, 88);
        break;
    case 1195:
        actor->heading += RELATIVE_TURN(92, 136);
        break;
    case 1082:
        actor->heading += RELATIVE_TURN(20, 48);
        break;
    case 1118:
        actor->heading += RELATIVE_TURN(0, 36);
        break;
    case 1119:
        actor->heading += RELATIVE_TURN(8, 68);
        break;
    case 1120:
        actor->heading += RELATIVE_TURN(4, 48);
        break;
    case 1121:
        actor->heading += RELATIVE_TURN(4, 64);
        break;
    case 1254:
        actor->heading += RELATIVE_TURN(20, 40);
        break;
    case 1399:
        actor->heading += RELATIVE_TURN(4, 48);
        break;
    case 1398:
        actor->heading += TURN(0, 28, 30);
        actor->heading += TURN(28, 56, -45);
        break;
    case 1252:
        actor->heading += TURN(36, 80, 45);
        actor->heading += TURN(80, 124, 45);
        break;
    case 1270:
        actor->heading += TURN(72, 104, 180);
        break;
    case 1389:
        actor->heading += TURN(88, 112, -45);
        break;
    case 1374:
        actor->heading += RELATIVE_TURN(4, 60);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 1373:
        actor->heading += RELATIVE_TURN(24, 60);
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        break;
    case 1276:
        actor->heading += RELATIVE_TURN(144, 180);
        break;
    case 1281:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        actor->heading += TURN(120, 156, 230);
        break;
    case 1277:
        actor->heading += RELATIVE_TURN(156, 200);
        break;
    case 1278:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        actor->heading += TURN(52, 92, 155);
        break;
    case 1279:
        actor->heading += RELATIVE_TURN(188, 240);
        break;
    case 1280:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        actor->heading += TURN(160, 188, 125);
        break;
    case 1368:
        actor->heading += TURN(136, 164, 45);
        break;
    case 1366:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        actor->heading += TURN(172, 204, -130);
        break;
    case 1369:
        actor->heading += TURN(220, 268, 110);
        break;
    case 1367:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        actor->heading += TURN(156, 200, 155);
        break;
    case 1375:
        actor->heading += TURN(300, 348, 145);
        break;
    case 1376:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        actor->heading += TURN(268, 312, 165);
        break;
    case 1303:
        actor->heading += RELATIVE_TURN(68, 100);
        break;
    case 1282:
        actor->heading += TURN(44, 108, -180);
        break;
    case 1319:
        actor->heading += RELATIVE_TURN(112, 160);
        break;
    case 1320:
        actor->heading += RELATIVE_TURN(172, 196);
        break;
    case 1151:
        actor->heading += TURN(12, 28, 25);
        break;
    case 1378:
        actor->heading += TURN(20, 72, 175);
        break;
    case 1241:
        actor->heading += TURN(40, 68, 90);
        break;
    case 1380:
        actor->heading += TURN(48, 76, 45);
        break;
    case 1339:
        actor->heading += TURN(24, 44, 45);
        break;
    case 1397:
        actor->heading += TURN(100, 148, 45);
        break;
    case 1340:
        actor->heading += TURN(32, 56, 90);
        break;
    case 1341:
        actor->heading += TURN(24, 52, 90);
        break;
    case 1372:
        actor->heading += TURN(12, 52, 90);
        break;
    case 1342:
        actor->heading += TURN(32, 88, 135);
        break;
    case 1343:
        actor->heading += TURN(12, 56, 135);
        break;
    case 1344:
        actor->heading += TURN(20, 60, 185);
        break;
    case 1345:
        actor->heading += TURN(28, 52, 180);
        break;
    case 1268:
        actor->heading += RELATIVE_TURN(44, 76);
        break;
    case 1261:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[2]))
            return;
        actor->heading += TURN(36, 76, 152);
        break;
    case 1265:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[1]))
            return;
        actor->heading += TURN(56, 92, 77);
        break;
    case 1263:
        if (func_00B33F40(actor, second, frame, D_00CBCD70[0]))
            return;
        actor->heading += TURN(28, 60, 35);
        break;
    case 1245:
        actor->heading += TURN(108, 180, 90);
        break;
    case 1244:
        actor->heading += TURN(168, 216, 135);
        break;
    case 1296:
        actor->heading += TURN(68, 92, -45);
        break;
    case 1304:
        actor->heading += TURN(48, 72, 45);
        break;
    case 1305:
        actor->heading += TURN(104, 124, 45);
        break;
    case 1220:
        actor->heading += TURN(224, 252, 35);
        break;
    case 1221:
        actor->heading += TURN(172, 208, 60);
        break;
    case 1322:
        actor->heading += TURN(132, 152, 90);
        break;
    case 1385:
        actor->heading += TURN(144, 168, 90);
        break;
    case 1386:
        actor->heading += TURN(112, 136, 90);
        break;
    case 1387:
        actor->heading += TURN(176, 204, 90);
        break;
    case 1217:
        actor->heading += TURN(144, 184, 180);
        break;
    case 1323:
        actor->heading += TURN(204, 228, -180);
        break;
    case 1381:
        actor->heading += TURN(144, 168, 180);
        break;
    case 1382:
        actor->heading += TURN(148, 184, 180);
        break;
    case 1383:
        actor->heading += TURN(144, 200, 180);
        break;
    case 1218:
        actor->heading += TURN(124, 144, -135);
        break;
    case 1219:
        actor->heading += TURN(260, 288, -65);
        break;
    case 1324:
        actor->heading += TURN(180, 200, -35);
        break;
    case 1213:
        actor->heading += RELATIVE_TURN(112, 160);
        break;
    case 1214:
        actor->heading += RELATIVE_TURN(132, 184);
        break;
    case 1284:
        actor->heading += TURN(64, 116, 135);
        break;
    case 1138:
        actor->heading += RELATIVE_TURN(84, 124);
        break;
    case 1112:
        actor->heading += TURN(20, 76, 180);
        break;
    case 1015:
        actor->heading += RELATIVE_TURN(28, 92);
        break;
    case 1019:
        actor->heading += RELATIVE_TURN(36, 92);
        break;
    case 1113:
        actor->heading += RELATIVE_TURN(0, 68);
        break;
    case 1067:
        actor->heading += TURN(0, 132, 35);
        break;
    case 1104:
        actor->heading += TURN(0, 40, 180);
        break;
    case 1127:
        actor->heading += TURN(0, 40, 45);
        break;
    case 1020:
        actor->heading += RELATIVE_TURN(4, 56);
        break;
    case 1021:
        actor->heading += RELATIVE_TURN(20, 68);
        break;
    case 1132:
        actor->heading += RELATIVE_TURN(12, 116);
        break;
    case 1133:
        actor->heading += RELATIVE_TURN(44, 88);
        break;
    case 1029:
        actor->heading += RELATIVE_TURN(12, 48);
        break;
    case 1064:
        actor->heading += RELATIVE_TURN(20, 110);
        break;
    case 1031:
        actor->heading += RELATIVE_TURN(16, 96);
        break;
    case 1134:
        actor->heading += TURN(36, 84, 135);
        actor->heading += TURN(120, 164, -135);
        break;
    case 1140:
        actor->heading += RELATIVE_TURN(12, 48);
        break;
    case 1125:
        actor->heading += TURN(40, 88, 145);
        break;
    case 1094:
        actor->heading += TURN(40, 76, 140);
        actor->heading += TURN(120, 164, 180);
        break;
    case 1041:
        actor->heading += RELATIVE_TURN(12, 84);
        break;
    case 1040:
        actor->heading += RELATIVE_TURN(4, 68);
        break;
    case 1142:
        actor->heading += RELATIVE_TURN(8, 72);
        break;
    case 1146:
        actor->heading += RELATIVE_TURN(12, 72);
        break;
    case 1147:
        actor->heading += RELATIVE_TURN(4, 72);
        break;
    case 1416:
        actor->heading += RELATIVE_TURN(12, 56);
        break;
    case 1417:
        actor->heading += RELATIVE_TURN(16, 68);
        actor->heading -= RELATIVE_TURN(92, 146);
        break;
    case 1415:
        actor->heading += RELATIVE_TURN(28, 64);
        break;
    case 1418:
        actor->heading += RELATIVE_TURN(28, 72);
        actor->heading -= RELATIVE_TURN(96, 152);
        break;
    case 1143:
        actor->heading += RELATIVE_TURN(36, 56);
        break;
    case 1136:
        actor->heading += RELATIVE_TURN(0, 36);
        break;
    case 1173:
        actor->heading += TURN(136, 192, 180);
        break;
    case 1192:
        actor->heading += RELATIVE_TURN(12, 48);
        break;
    case 1193:
        actor->heading += RELATIVE_TURN(24, 76);
        break;
    case 1010:
        actor->heading += RELATIVE_TURN(28, 100);
        break;
    case 1008:
        actor->heading += RELATIVE_TURN(44, 108);
        break;
    case 1012:
        actor->heading += TURN(72, 124, 90);
        break;
    case 1037:
        actor->heading += RELATIVE_TURN(24, 80);
        break;
    case 1038:
        actor->heading += RELATIVE_TURN(12, 44);
        actor->heading += TURN(136, 220, 180);
        break;
    case 1052:
        actor->heading += RELATIVE_TURN(212, 276);
        break;
    case 1045:
        actor->heading += RELATIVE_TURN(0, 40);
        break;
    case 1046:
        actor->heading += RELATIVE_TURN(80, 120);
        break;
    case 1115:
        actor->heading += RELATIVE_TURN(0, 40);
        break;
    case 1051:
        actor->heading += RELATIVE_TURN(108, 188);
        break;
    case 1050:
        actor->heading += RELATIVE_TURN(0, 64);
        break;
    case 1130:
        actor->heading += RELATIVE_TURN(0, 52);
        break;
    case 1049:
        actor->heading += RELATIVE_TURN(0, 80);
        break;
    case 1131:
        actor->heading += RELATIVE_TURN(0, 76);
        break;
    case 1053:
        actor->heading += RELATIVE_TURN(0, 56);
        break;
    case 1058:
        actor->heading += RELATIVE_TURN(0, 48);
        break;
    case 1057:
        actor->heading += RELATIVE_TURN(24, 80);
        break;
    case 1056:
        actor->heading += RELATIVE_TURN(32, 92);
        break;
    case 1055:
        actor->heading += RELATIVE_TURN(36, 108);
        break;
    case 1059:
        actor->heading += RELATIVE_TURN(16, 76);
        break;
    case 1144:
        actor->heading += RELATIVE_TURN(4, 68);
        break;
    case 1069:
        actor->heading += RELATIVE_TURN(36, 96);
        break;
    case 1070:
        if (func_00207D80(actor->motion, actor->motion->descriptor->phase1 * 2))
            actor->motion->rate = *D_003E74CC / 3.0f;
        else if (func_00207D80(actor->motion, actor->motion->descriptor->phase2 * 2))
            actor->motion->rate = *D_003E74CC;
        break;
    case 1073:
        actor->heading += RELATIVE_TURN(4, 84);
        break;
    case 1072:
        actor->heading += RELATIVE_TURN(4, 76);
        break;
    case 1084:
        actor->heading += RELATIVE_TURN(12, 96);
        break;
    case 1083:
        actor->heading += RELATIVE_TURN(28, 112);
        break;
    case 1087:
        if (func_00207D80(actor->motion, actor->motion->descriptor->phase1 * 2))
            actor->motion->rate = *D_003E74CC / 3.0f;
        else if (func_00207D80(actor->motion, actor->motion->descriptor->phase2 * 2))
            actor->motion->rate = *D_003E74CC;
        actor->heading += RELATIVE_TURN(128, 276);
        break;
    case 1089:
        actor->heading += RELATIVE_TURN(80, 168);
        break;
    case 1092:
        actor->heading += RELATIVE_TURN(12, 64);
        break;
    case 1091:
        actor->heading += RELATIVE_TURN(0, 72);
        break;
    case 1093:
        actor->heading += RELATIVE_TURN(272, 340);
        break;
    case 1139:
        actor->heading += RELATIVE_TURN(92, 152);
        break;
    case 1097:
        actor->heading += RELATIVE_TURN(0, 76);
        break;
    case 1096:
        actor->heading += RELATIVE_TURN(0, 92);
        break;
    case 1075:
        actor->heading += RELATIVE_TURN(28, 96);
        actor->heading -= RELATIVE_TURN(108, 192);
        break;
    case 1079:
        actor->heading += RELATIVE_TURN(4, 80);
        actor->heading -= RELATIVE_TURN(136, 180);
        break;
    case 1137:
        actor->heading += RELATIVE_TURN(116, 192);
        break;
    case 1078:
        actor->heading += TURN(0, 40, -90);
        actor->heading += RELATIVE_TURN(144, 216);
        break;
    case 1077:
        actor->heading += RELATIVE_TURN(8, 60);
        break;
    case 1171:
        actor->heading += RELATIVE_TURN(72, 152);
        break;
    case 1170:
        actor->heading += RELATIVE_TURN(16, 56);
        break;
    case 1169:
        actor->heading += RELATIVE_TURN(32, 88);
        break;
    case 1174:
        actor->heading += RELATIVE_TURN(100, 140);
        break;
    case 1175:
        actor->heading += RELATIVE_TURN(80, 136);
        break;
    case 1176:
        actor->heading += TURN(52, 100, 90);
        actor->heading += TURN(160, 216, -123);
        break;
    case 1180:
        actor->heading += TURN(168, 256, 120);
        break;
    case 1181:
        actor->heading += TURN(268, 280, -10);
        break;
    case 1182:
        actor->heading += TURN(172, 224, 100);
        break;
    case 1183:
        actor->heading += TURN(244, 264, -8);
        break;
    case 1184:
        actor->heading += TURN(52, 164, 65);
        break;
    case 1199:
        actor->heading += RELATIVE_TURN(4, 44);
        actor->heading += TURN(88, 152, 360);
        break;
    case 1080:
        actor->heading += TURN(112, 188, 40);
        break;
    case 1102:
        actor->heading += RELATIVE_TURN(0, 48);
        break;
    case 1124:
        actor->motion->rate = *D_003E74CC * 1.2f;
        break;
    case 1065:
        actor->heading += TURN(40, 44, 180);
        break;
    case 1066:
        actor->heading += TURN(32, 36, -90);
        break;
    case 1099:
        actor->heading += RELATIVE_TURN(4, 80);
        break;
    case 1116:
        actor->heading += RELATIVE_TURN(4, 44);
        break;
    case 1141:
        actor->heading += RELATIVE_TURN(52, 136);
        break;
    case 1107:
        actor->heading += RELATIVE_TURN(40, 76);
        break;
    case 1108:
        actor->heading += RELATIVE_TURN(12, 48);
        break;
    case 1114:
        actor->heading += RELATIVE_TURN(16, 60);
        break;
    case 1128:
        actor->heading += RELATIVE_TURN(16, 72);
        break;
    case 1164:
        actor->heading += RELATIVE_TURN(100, 164);
        break;
    case 1109:
        if (!actor->flags4E && func_00207D80(actor->motion, 24))
            func_00209A00(actor->motion, actor->motion->clip, 68);
        break;
    case 1110:
        actor->heading += RELATIVE_TURN(48, 136);
        break;
    case 1335:
        actor->heading -= RELATIVE_TURN(216, 304);
        break;
    case 1349:
        actor->heading += RELATIVE_TURN(52, 116);
        break;
    case 1165:
        actor->heading -= RELATIVE_TURN(0, 60);
        break;
    case 1101:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        actor->heading += TURN(28, 116, -100);
        break;
    case 1155:
        if (func_00B33F40(actor, second, frame, (u32)actor->motion->descriptor->eventFrame * 2))
            return;
        break;
    case 1153:
        actor->heading += RELATIVE_TURN(0, 60);
        break;
    case 1103:
        actor->heading += RELATIVE_TURN(0, 56);
        break;
    case 1007:
    case 1009:
    case 1011:
    case 1013:
    case 1016:
    case 1017:
    case 1018:
    case 1022:
    case 1025:
    case 1039:
    case 1042:
    case 1044:
    case 1047:
    case 1048:
    case 1054:
    case 1060:
    case 1061:
    case 1062:
    case 1063:
    case 1071:
    case 1074:
    case 1076:
    case 1081:
    case 1085:
    case 1086:
    case 1088:
    case 1090:
    case 1095:
    case 1098:
    case 1100:
    case 1105:
    case 1106:
    case 1117:
    case 1122:
    case 1123:
    case 1129:
    case 1145:
    case 1148:
    case 1149:
    case 1150:
    case 1152:
    case 1154:
    case 1156:
    case 1161:
    case 1162:
    case 1163:
    case 1172:
    case 1177:
    case 1178:
    case 1179:
    case 1185:
    case 1186:
    case 1187:
    case 1188:
    case 1189:
    case 1190:
    case 1191:
    case 1194:
    case 1197:
    case 1198:
    case 1202:
    case 1205:
    case 1206:
    case 1208:
    case 1215:
    case 1216:
    case 1230:
    case 1231:
    case 1235:
    case 1236:
    case 1253:
    case 1257:
    case 1260:
    case 1262:
    case 1264:
    case 1266:
    case 1267:
    case 1269:
    case 1271:
    case 1272:
    case 1273:
    case 1275:
    case 1283:
    case 1288:
    case 1293:
    case 1294:
    case 1295:
    case 1301:
    case 1302:
    case 1306:
    case 1307:
    case 1310:
    case 1311:
    case 1312:
    case 1313:
    case 1314:
    case 1315:
    case 1316:
    case 1317:
    case 1318:
    case 1321:
    case 1325:
    case 1326:
    case 1327:
    case 1328:
    case 1329:
    case 1330:
    case 1331:
    case 1332:
    case 1333:
    case 1334:
    case 1336:
    case 1337:
    case 1346:
    case 1348:
    case 1350:
    case 1351:
    case 1354:
    case 1355:
    case 1357:
    case 1358:
    case 1359:
    case 1360:
    case 1362:
    case 1365:
    case 1371:
    case 1390:
    case 1391:
    case 1395:
    case 1405:
    case 1406:
    case 1407:
    case 1408:
    case 1411:
    case 1412:
    case 1419:
    case 1421:
    case 1422:
    case 1423:
    case 1424:
    case 1425:
        break;
    default:
        return;
    }
    actor->duration = (s32)((u32)actor->motion->descriptor->duration / scale);
    func_00B341F0(actor, first, second);
}
