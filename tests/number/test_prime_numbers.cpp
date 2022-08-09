//
// Created by oneshepherdssheep on 06/08/2022.
//

#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include "mathlaw.h"

/**
 * @brief TEST_CASE : List of prime numbers from [1-7919]
 *        https://en.wikipedia.org/wiki/List_of_prime_numbers
 */
TEST_CASE("Count of 1000 first prime numbers","[prime_numbers]") {
    mathlaw::number::EratosthenesTable<uint16_t, 7919> eratosthenesTable7919;
    // Prime count test
    REQUIRE(eratosthenesTable7919.GetPrimeCount() == 1000);
}

TEST_CASE("Value of 1000 first prime numbers","[prime_numbers]"){
    mathlaw::number::EratosthenesTable<uint16_t, 7919> eratosthenesTable7919;
    // 1-20
    //      2      3      5      7     11     13     17     19     23     29
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(0) == 2);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(1) == 3);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(2) == 5);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(3) == 7);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(4) == 11);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(5) == 13);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(6) == 17);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(7) == 19);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(8) == 23);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(9) == 29);
    //     31     37     41     43     47     53     59     61     67     71
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(10) == 31);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(11) == 37);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(12) == 41);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(13) == 43);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(14) == 47);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(15) == 53);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(16) == 59);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(17) == 61);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(18) == 67);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(19) == 71);

    // 21-40
    //     73     79     83     89     97    101    103    107    109    113
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(20) == 73);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(21) == 79);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(22) == 83);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(23) == 89);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(24) == 97);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(25) == 101);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(26) == 103);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(27) == 107);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(28) == 109);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(29) == 113);
    //    127    131    137    139    149    151    157    163    167    173
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(30) == 127);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(31) == 131);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(32) == 137);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(33) == 139);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(34) == 149);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(35) == 151);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(36) == 157);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(37) == 163);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(38) == 167);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(39) == 173);

    // 41-60
    //    179    181    191    193    197    199    211    223    227    229
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(40) == 179);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(41) == 181);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(42) == 191);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(43) == 193);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(44) == 197);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(45) == 199);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(46) == 211);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(47) == 223);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(48) == 227);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(49) == 229);
    //    233    239    241    251    257    263    269    271    277    281
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(50) == 233);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(51) == 239);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(52) == 241);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(53) == 251);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(54) == 257);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(55) == 263);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(56) == 269);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(57) == 271);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(58) == 277);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(59) == 281);

    // 61-80
    //    283    293    307    311    313    317    331    337    347    349
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(60) == 283);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(61) == 293);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(62) == 307);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(63) == 311);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(64) == 313);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(65) == 317);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(66) == 331);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(67) == 337);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(68) == 347);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(69) == 349);
    //    353    359    367    373    379    383    389    397    401    409
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(70) == 353);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(71) == 359);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(72) == 367);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(73) == 373);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(74) == 379);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(75) == 383);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(76) == 389);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(77) == 397);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(78) == 401);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(79) == 409);

    // 81-100
    //    419    421    431    433    439    443    449    457    461    463
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(80) == 419);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(81) == 421);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(82) == 431);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(83) == 433);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(84) == 439);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(85) == 443);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(86) == 449);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(87) == 457);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(88) == 461);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(89) == 463);
    //    467    479    487    491    499    503    509    521    523    541
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(90) == 467);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(91) == 479);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(92) == 487);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(93) == 491);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(94) == 499);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(95) == 503);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(96) == 509);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(97) == 521);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(98) == 523);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(99) == 541);

    // 101-120
    //    547    557    563    569    571    577    587    593    599    601
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(100) == 547);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(101) == 557);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(102) == 563);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(103) == 569);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(104) == 571);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(105) == 577);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(106) == 587);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(107) == 593);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(108) == 599);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(109) == 601);
    //    607    613    617    619    631    641    643    647    653    659
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(110) == 607);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(111) == 613);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(112) == 617);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(113) == 619);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(114) == 631);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(115) == 641);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(116) == 643);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(117) == 647);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(118) == 653);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(119) == 659);

    // 121-140
    //    661    673    677    683    691    701    709    719    727    733
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(120) == 661);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(121) == 673);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(122) == 677);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(123) == 683);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(124) == 691);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(125) == 701);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(126) == 709);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(127) == 719);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(128) == 727);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(129) == 733);
    //    739    743    751    757    761    769    773    787    797    809
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(130) == 739);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(131) == 743);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(132) == 751);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(133) == 757);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(134) == 761);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(135) == 769);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(136) == 773);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(137) == 787);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(138) == 797);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(139) == 809);

    // 141-160
    //    811    821    823    827    829    839    853    857    859    863
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(140) == 811);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(141) == 821);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(142) == 823);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(143) == 827);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(144) == 829);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(145) == 839);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(146) == 853);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(147) == 857);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(148) == 859);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(149) == 863);
    //    877    881    883    887    907    911    919    929    937    941
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(150) == 877);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(151) == 881);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(152) == 883);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(153) == 887);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(154) == 907);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(155) == 911);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(156) == 919);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(157) == 929);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(158) == 937);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(159) == 941);

    // 161-180
    //    947    953    967    971    977    983    991    997   1009   1013
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(160) == 947);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(161) == 953);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(162) == 967);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(163) == 971);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(164) == 977);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(165) == 983);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(166) == 991);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(167) == 997);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(168) == 1009);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(169) == 1013);
    //   1019   1021   1031   1033   1039   1049   1051   1061   1063   1069
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(170) == 1019);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(171) == 1021);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(172) == 1031);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(173) == 1033);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(174) == 1039);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(175) == 1049);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(176) == 1051);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(177) == 1061);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(178) == 1063);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(179) == 1069);

    // 181-200
    //   1087   1091   1093   1097   1103   1109   1117   1123   1129   1151
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(180) == 1087);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(181) == 1091);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(182) == 1093);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(183) == 1097);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(184) == 1103);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(185) == 1109);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(186) == 1117);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(187) == 1123);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(188) == 1129);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(189) == 1151);
    //   1153   1163   1171   1181   1187   1193   1201   1213   1217   1223
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(190) == 1153);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(191) == 1163);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(192) == 1171);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(193) == 1181);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(194) == 1187);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(195) == 1193);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(196) == 1201);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(197) == 1213);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(198) == 1217);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(199) == 1223);

    // 201-220
    //   1229   1231   1237   1249   1259   1277   1279   1283   1289   1291
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(200) == 1229);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(201) == 1231);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(202) == 1237);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(203) == 1249);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(204) == 1259);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(205) == 1277);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(206) == 1279);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(207) == 1283);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(208) == 1289);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(209) == 1291);
    //   1297   1301   1303   1307   1319   1321   1327   1361   1367   1373
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(210) == 1297);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(211) == 1301);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(212) == 1303);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(213) == 1307);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(214) == 1319);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(215) == 1321);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(216) == 1327);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(217) == 1361);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(218) == 1367);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(219) == 1373);

    // 221-240
    //   1381   1399   1409   1423   1427   1429   1433   1439   1447   1451
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(220) == 1381);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(221) == 1399);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(222) == 1409);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(223) == 1423);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(224) == 1427);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(225) == 1429);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(226) == 1433);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(227) == 1439);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(228) == 1447);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(229) == 1451);
    //   1453   1459   1471   1481   1483   1487   1489   1493   1499   1511
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(230) == 1453);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(231) == 1459);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(232) == 1471);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(233) == 1481);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(234) == 1483);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(235) == 1487);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(236) == 1489);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(237) == 1493);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(238) == 1499);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(239) == 1511);

    // 241-260
    //   1523   1531   1543   1549   1553   1559   1567   1571   1579   1583
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(240) == 1523);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(241) == 1531);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(242) == 1543);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(243) == 1549);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(244) == 1553);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(245) == 1559);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(246) == 1567);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(247) == 1571);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(248) == 1579);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(249) == 1583);
    //   1597   1601   1607   1609   1613   1619   1621   1627   1637   1657
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(250) == 1597);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(251) == 1601);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(252) == 1607);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(253) == 1609);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(254) == 1613);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(255) == 1619);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(256) == 1621);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(257) == 1627);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(258) == 1637);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(259) == 1657);

    // 261-280
    //   1663   1667   1669   1693   1697   1699   1709   1721   1723   1733
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(260) == 1663);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(261) == 1667);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(262) == 1669);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(263) == 1693);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(264) == 1697);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(265) == 1699);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(266) == 1709);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(267) == 1721);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(268) == 1723);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(269) == 1733);
    //   1741   1747   1753   1759   1777   1783   1787   1789   1801   1811
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(270) == 1741);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(271) == 1747);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(272) == 1753);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(273) == 1759);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(274) == 1777);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(275) == 1783);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(276) == 1787);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(277) == 1789);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(278) == 1801);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(279) == 1811);

    // 281-300
    //   1823   1831   1847   1861   1867   1871   1873   1877   1879   1889
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(280) == 1823);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(281) == 1831);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(282) == 1847);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(283) == 1861);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(284) == 1867);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(285) == 1871);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(286) == 1873);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(287) == 1877);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(288) == 1879);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(289) == 1889);
    //   1901   1907   1913   1931   1933   1949   1951   1973   1979   1987
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(290) == 1901);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(291) == 1907);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(292) == 1913);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(293) == 1931);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(294) == 1933);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(295) == 1949);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(296) == 1951);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(297) == 1973);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(298) == 1979);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(299) == 1987);

    // 301-320
    //   1993   1997   1999   2003   2011   2017   2027   2029   2039   2053
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(300) == 1993);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(301) == 1997);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(302) == 1999);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(303) == 2003);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(304) == 2011);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(305) == 2017);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(306) == 2027);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(307) == 2029);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(308) == 2039);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(309) == 2053);
    //   2063   2069   2081   2083   2087   2089   2099   2111   2113   2129
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(310) == 2063);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(311) == 2069);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(312) == 2081);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(313) == 2083);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(314) == 2087);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(315) == 2089);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(316) == 2099);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(317) == 2111);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(318) == 2113);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(319) == 2129);

    // 321-340
    //   2131   2137   2141   2143   2153   2161   2179   2203   2207   2213
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(320) == 2131);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(321) == 2137);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(322) == 2141);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(323) == 2143);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(324) == 2153);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(325) == 2161);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(326) == 2179);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(327) == 2203);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(328) == 2207);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(329) == 2213);
    //   2221   2237   2239   2243   2251   2267   2269   2273   2281   2287
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(330) == 2221);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(331) == 2237);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(332) == 2239);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(333) == 2243);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(334) == 2251);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(335) == 2267);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(336) == 2269);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(337) == 2273);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(338) == 2281);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(339) == 2287);

    // 341-360
    //   2293   2297   2309   2311   2333   2339   2341   2347   2351   2357
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(340) == 2293);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(341) == 2297);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(342) == 2309);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(343) == 2311);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(344) == 2333);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(345) == 2339);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(346) == 2341);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(347) == 2347);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(348) == 2351);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(349) == 2357);
    //   2371   2377   2381   2383   2389   2393   2399   2411   2417   2423
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(350) == 2371);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(351) == 2377);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(352) == 2381);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(353) == 2383);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(354) == 2389);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(355) == 2393);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(356) == 2399);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(357) == 2411);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(358) == 2417);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(359) == 2423);

    // 361-380
    //   2437   2441   2447   2459   2467   2473   2477   2503   2521   2531
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(360) == 2437);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(361) == 2441);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(362) == 2447);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(363) == 2459);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(364) == 2467);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(365) == 2473);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(366) == 2477);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(367) == 2503);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(368) == 2521);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(369) == 2531);
    //   2539   2543   2549   2551   2557   2579   2591   2593   2609   2617
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(370) == 2539);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(371) == 2543);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(372) == 2549);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(373) == 2551);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(374) == 2557);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(375) == 2579);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(376) == 2591);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(377) == 2593);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(378) == 2609);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(379) == 2617);

    // 381-400
    //   2621   2633   2647   2657   2659   2663   2671   2677   2683   2687
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(380) == 2621);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(381) == 2633);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(382) == 2647);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(383) == 2657);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(384) == 2659);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(385) == 2663);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(386) == 2671);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(387) == 2677);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(388) == 2683);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(389) == 2687);
    //   2689   2693   2699   2707   2711   2713   2719   2729   2731   2741
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(390) == 2689);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(391) == 2693);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(392) == 2699);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(393) == 2707);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(394) == 2711);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(395) == 2713);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(396) == 2719);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(397) == 2729);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(398) == 2731);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(399) == 2741);

    // 401-420
    //   2749   2753   2767   2777   2789   2791   2797   2801   2803   2819
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(400) == 2749);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(401) == 2753);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(402) == 2767);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(403) == 2777);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(404) == 2789);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(405) == 2791);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(406) == 2797);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(407) == 2801);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(408) == 2803);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(409) == 2819);
    //   2833   2837   2843   2851   2857   2861   2879   2887   2897   2903
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(410) == 2833);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(411) == 2837);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(412) == 2843);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(413) == 2851);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(414) == 2857);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(415) == 2861);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(416) == 2879);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(417) == 2887);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(418) == 2897);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(419) == 2903);

    // 421-440
    //   2909   2917   2927   2939   2953   2957   2963   2969   2971   2999
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(420) == 2909);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(421) == 2917);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(422) == 2927);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(423) == 2939);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(424) == 2953);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(425) == 2957);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(426) == 2963);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(427) == 2969);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(428) == 2971);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(429) == 2999);
    //   3001   3011   3019   3023   3037   3041   3049   3061   3067   3079
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(430) == 3001);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(431) == 3011);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(432) == 3019);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(433) == 3023);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(434) == 3037);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(435) == 3041);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(436) == 3049);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(437) == 3061);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(438) == 3067);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(439) == 3079);

    // 441-460
    //   3083   3089   3109   3119   3121   3137   3163   3167   3169   3181
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(440) == 3083);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(441) == 3089);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(442) == 3109);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(443) == 3119);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(444) == 3121);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(445) == 3137);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(446) == 3163);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(447) == 3167);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(448) == 3169);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(449) == 3181);
    //   3187   3191   3203   3209   3217   3221   3229   3251   3253   3257
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(450) == 3187);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(451) == 3191);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(452) == 3203);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(453) == 3209);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(454) == 3217);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(455) == 3221);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(456) == 3229);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(457) == 3251);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(458) == 3253);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(459) == 3257);

    // 461-480
    //   3259   3271   3299   3301   3307   3313   3319   3323   3329   3331
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(460) == 3259);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(461) == 3271);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(462) == 3299);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(463) == 3301);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(464) == 3307);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(465) == 3313);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(466) == 3319);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(467) == 3323);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(468) == 3329);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(469) == 3331);
    //   3343   3347   3359   3361   3371   3373   3389   3391   3407   3413
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(470) == 3343);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(471) == 3347);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(472) == 3359);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(473) == 3361);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(474) == 3371);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(475) == 3373);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(476) == 3389);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(477) == 3391);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(478) == 3407);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(479) == 3413);

    // 481-500
    //   3433   3449   3457   3461   3463   3467   3469   3491   3499   3511
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(480) == 3433);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(481) == 3449);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(482) == 3457);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(483) == 3461);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(484) == 3463);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(485) == 3467);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(486) == 3469);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(487) == 3491);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(488) == 3499);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(489) == 3511);
    //   3517   3527   3529   3533   3539   3541   3547   3557   3559   3571
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(490) == 3517);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(491) == 3527);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(492) == 3529);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(493) == 3533);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(494) == 3539);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(495) == 3541);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(496) == 3547);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(497) == 3557);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(498) == 3559);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(499) == 3571);

    // 501-520
    //   3581   3583   3593   3607   3613   3617   3623   3631   3637   3643
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(500) == 3581);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(501) == 3583);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(502) == 3593);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(503) == 3607);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(504) == 3613);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(505) == 3617);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(506) == 3623);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(507) == 3631);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(508) == 3637);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(509) == 3643);
    //   3659   3671   3673   3677   3691   3697   3701   3709   3719   3727
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(510) == 3659);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(511) == 3671);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(512) == 3673);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(513) == 3677);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(514) == 3691);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(515) == 3697);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(516) == 3701);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(517) == 3709);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(518) == 3719);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(519) == 3727);

    // 521-540
    //   3733   3739   3761   3767   3769   3779   3793   3797   3803   3821
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(520) == 3733);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(521) == 3739);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(522) == 3761);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(523) == 3767);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(524) == 3769);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(525) == 3779);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(526) == 3793);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(527) == 3797);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(528) == 3803);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(529) == 3821);
    //   3823   3833   3847   3851   3853   3863   3877   3881   3889   3907
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(530) == 3823);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(531) == 3833);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(532) == 3847);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(533) == 3851);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(534) == 3853);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(535) == 3863);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(536) == 3877);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(537) == 3881);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(538) == 3889);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(539) == 3907);

    // 541-560
    //   3911   3917   3919   3923   3929   3931   3943   3947   3967   3989
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(540) == 3911);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(541) == 3917);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(542) == 3919);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(543) == 3923);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(544) == 3929);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(545) == 3931);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(546) == 3943);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(547) == 3947);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(548) == 3967);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(549) == 3989);
    //   4001   4003   4007   4013   4019   4021   4027   4049   4051   4057
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(550) == 4001);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(551) == 4003);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(552) == 4007);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(553) == 4013);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(554) == 4019);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(555) == 4021);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(556) == 4027);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(557) == 4049);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(558) == 4051);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(559) == 4057);

    // 561-580
    //   4073   4079   4091   4093   4099   4111   4127   4129   4133   4139
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(560) == 4073);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(561) == 4079);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(562) == 4091);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(563) == 4093);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(564) == 4099);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(565) == 4111);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(566) == 4127);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(567) == 4129);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(568) == 4133);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(569) == 4139);
    //   4153   4157   4159   4177   4201   4211   4217   4219   4229   4231
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(570) == 4153);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(571) == 4157);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(572) == 4159);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(573) == 4177);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(574) == 4201);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(575) == 4211);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(576) == 4217);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(577) == 4219);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(578) == 4229);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(579) == 4231);

    // 581-600
    //   4241   4243   4253   4259   4261   4271   4273   4283   4289   4297
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(580) == 4241);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(581) == 4243);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(582) == 4253);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(583) == 4259);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(584) == 4261);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(585) == 4271);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(586) == 4273);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(587) == 4283);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(588) == 4289);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(589) == 4297);
    //   4327   4337   4339   4349   4357   4363   4373   4391   4397   4409
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(590) == 4327);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(591) == 4337);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(592) == 4339);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(593) == 4349);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(594) == 4357);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(595) == 4363);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(596) == 4373);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(597) == 4391);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(598) == 4397);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(599) == 4409);

    // 601-620
    //   4421   4423   4441   4447   4451   4457   4463   4481   4483   4493
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(600) == 4421);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(601) == 4423);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(602) == 4441);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(603) == 4447);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(604) == 4451);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(605) == 4457);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(606) == 4463);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(607) == 4481);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(608) == 4483);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(609) == 4493);
    //   4507   4513   4517   4519   4523   4547   4549   4561   4567   4583
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(610) == 4507);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(611) == 4513);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(612) == 4517);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(613) == 4519);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(614) == 4523);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(615) == 4547);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(616) == 4549);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(617) == 4561);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(618) == 4567);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(619) == 4583);

    // 621-640
    //   4591   4597   4603   4621   4637   4639   4643   4649   4651   4657
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(620) == 4591);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(621) == 4597);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(622) == 4603);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(623) == 4621);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(624) == 4637);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(625) == 4639);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(626) == 4643);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(627) == 4649);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(628) == 4651);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(629) == 4657);
    //   4663   4673   4679   4691   4703   4721   4723   4729   4733   4751
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(630) == 4663);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(631) == 4673);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(632) == 4679);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(633) == 4691);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(634) == 4703);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(635) == 4721);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(636) == 4723);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(637) == 4729);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(638) == 4733);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(639) == 4751);

    // 641-660
    //   4759   4783   4787   4789   4793   4799   4801   4813   4817   4831
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(640) == 4759);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(641) == 4783);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(642) == 4787);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(643) == 4789);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(644) == 4793);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(645) == 4799);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(646) == 4801);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(647) == 4813);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(648) == 4817);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(649) == 4831);
    //   4861   4871   4877   4889   4903   4909   4919   4931   4933   4937
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(650) == 4861);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(651) == 4871);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(652) == 4877);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(653) == 4889);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(654) == 4903);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(655) == 4909);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(656) == 4919);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(657) == 4931);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(658) == 4933);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(659) == 4937);

    // 661-680
    //   4943   4951   4957   4967   4969   4973   4987   4993   4999   5003
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(660) == 4943);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(661) == 4951);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(662) == 4957);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(663) == 4967);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(664) == 4969);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(665) == 4973);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(666) == 4987);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(667) == 4993);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(668) == 4999);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(669) == 5003);
    //   5009   5011   5021   5023   5039   5051   5059   5077   5081   5087
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(670) == 5009);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(671) == 5011);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(672) == 5021);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(673) == 5023);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(674) == 5039);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(675) == 5051);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(676) == 5059);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(677) == 5077);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(678) == 5081);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(679) == 5087);

    // 681-700
    //   5099   5101   5107   5113   5119   5147   5153   5167   5171   5179
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(680) == 5099);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(681) == 5101);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(682) == 5107);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(683) == 5113);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(684) == 5119);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(685) == 5147);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(686) == 5153);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(687) == 5167);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(688) == 5171);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(689) == 5179);
    //   5189   5197   5209   5227   5231   5233   5237   5261   5273   5279
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(690) == 5189);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(691) == 5197);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(692) == 5209);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(693) == 5227);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(694) == 5231);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(695) == 5233);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(696) == 5237);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(697) == 5261);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(698) == 5273);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(699) == 5279);

    // 701-720
    //   5281   5297   5303   5309   5323   5333   5347   5351   5381   5387
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(700) == 5281);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(701) == 5297);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(702) == 5303);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(703) == 5309);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(704) == 5323);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(705) == 5333);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(706) == 5347);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(707) == 5351);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(708) == 5381);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(709) == 5387);
    //   5393   5399   5407   5413   5417   5419   5431   5437   5441   5443
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(710) == 5393);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(711) == 5399);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(712) == 5407);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(713) == 5413);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(714) == 5417);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(715) == 5419);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(716) == 5431);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(717) == 5437);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(718) == 5441);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(719) == 5443);

    // 721-740
    //   5449   5471   5477   5479   5483   5501   5503   5507   5519   5521
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(720) == 5449);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(721) == 5471);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(722) == 5477);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(723) == 5479);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(724) == 5483);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(725) == 5501);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(726) == 5503);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(727) == 5507);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(728) == 5519);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(729) == 5521);
    //   5527   5531   5557   5563   5569   5573   5581   5591   5623   5639
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(730) == 5527);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(731) == 5531);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(732) == 5557);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(733) == 5563);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(734) == 5569);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(735) == 5573);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(736) == 5581);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(737) == 5591);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(738) == 5623);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(739) == 5639);

    // 741-760
    //   5641   5647   5651   5653   5657   5659   5669   5683   5689   5693
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(740) == 5641);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(741) == 5647);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(742) == 5651);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(743) == 5653);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(744) == 5657);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(745) == 5659);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(746) == 5669);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(747) == 5683);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(748) == 5689);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(749) == 5693);
    //   5701   5711   5717   5737   5741   5743   5749   5779   5783   5791
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(750) == 5701);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(751) == 5711);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(752) == 5717);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(753) == 5737);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(754) == 5741);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(755) == 5743);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(756) == 5749);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(757) == 5779);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(758) == 5783);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(759) == 5791);

    // 761-780
    //   5801   5807   5813   5821   5827   5839   5843   5849   5851   5857
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(760) == 5801);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(761) == 5807);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(762) == 5813);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(763) == 5821);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(764) == 5827);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(765) == 5839);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(766) == 5843);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(767) == 5849);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(768) == 5851);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(769) == 5857);
    //   5861   5867   5869   5879   5881   5897   5903   5923   5927   5939
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(770) == 5861);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(771) == 5867);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(772) == 5869);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(773) == 5879);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(774) == 5881);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(775) == 5897);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(776) == 5903);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(777) == 5923);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(778) == 5927);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(779) == 5939);

    // 781-800
    //   5953   5981   5987   6007   6011   6029   6037   6043   6047   6053
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(780) == 5953);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(781) == 5981);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(782) == 5987);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(783) == 6007);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(784) == 6011);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(785) == 6029);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(786) == 6037);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(787) == 6043);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(788) == 6047);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(789) == 6053);
    //   6067   6073   6079   6089   6091   6101   6113   6121   6131   6133
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(790) == 6067);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(791) == 6073);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(792) == 6079);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(793) == 6089);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(794) == 6091);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(795) == 6101);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(796) == 6113);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(797) == 6121);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(798) == 6131);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(799) == 6133);

    // 801-820
    //   6143   6151   6163   6173   6197   6199   6203   6211   6217   6221
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(800) == 6143);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(801) == 6151);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(802) == 6163);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(803) == 6173);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(804) == 6197);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(805) == 6199);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(806) == 6203);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(807) == 6211);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(808) == 6217);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(809) == 6221);
    //   6229   6247   6257   6263   6269   6271   6277   6287   6299   6301
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(810) == 6229);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(811) == 6247);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(812) == 6257);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(813) == 6263);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(814) == 6269);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(815) == 6271);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(816) == 6277);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(817) == 6287);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(818) == 6299);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(819) == 6301);

    // 821-840
    //   6311   6317   6323   6329   6337   6343   6353   6359   6361   6367
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(820) == 6311);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(821) == 6317);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(822) == 6323);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(823) == 6329);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(824) == 6337);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(825) == 6343);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(826) == 6353);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(827) == 6359);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(828) == 6361);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(829) == 6367);
    //   6373   6379   6389   6397   6421   6427   6449   6451   6469   6473
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(830) == 6373);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(831) == 6379);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(832) == 6389);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(833) == 6397);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(834) == 6421);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(835) == 6427);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(836) == 6449);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(837) == 6451);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(838) == 6469);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(839) == 6473);

    // 841-860
    //   6481   6491   6521   6529   6547   6551   6553   6563   6569   6571
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(840) == 6481);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(841) == 6491);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(842) == 6521);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(843) == 6529);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(844) == 6547);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(845) == 6551);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(846) == 6553);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(847) == 6563);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(848) == 6569);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(849) == 6571);
    //   6577   6581   6599   6607   6619   6637   6653   6659   6661   6673
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(850) == 6577);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(851) == 6581);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(852) == 6599);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(853) == 6607);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(854) == 6619);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(855) == 6637);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(856) == 6653);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(857) == 6659);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(858) == 6661);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(859) == 6673);

    // 861-880
    //   6679   6689   6691   6701   6703   6709   6719   6733   6737   6761
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(860) == 6679);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(861) == 6689);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(862) == 6691);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(863) == 6701);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(864) == 6703);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(865) == 6709);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(866) == 6719);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(867) == 6733);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(868) == 6737);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(869) == 6761);
    //   6763   6779   6781   6791   6793   6803   6823   6827   6829   6833
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(870) == 6763);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(871) == 6779);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(872) == 6781);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(873) == 6791);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(874) == 6793);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(875) == 6803);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(876) == 6823);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(877) == 6827);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(878) == 6829);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(879) == 6833);

    // 881-900
    //   6841   6857   6863   6869   6871   6883   6899   6907   6911   6917
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(880) == 6841);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(881) == 6857);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(882) == 6863);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(883) == 6869);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(884) == 6871);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(885) == 6883);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(886) == 6899);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(887) == 6907);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(888) == 6911);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(889) == 6917);
    //   6947   6949   6959   6961   6967   6971   6977   6983   6991   6997
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(890) == 6947);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(891) == 6949);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(892) == 6959);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(893) == 6961);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(894) == 6967);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(895) == 6971);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(896) == 6977);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(897) == 6983);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(898) == 6991);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(899) == 6997);

    // 901-920
    //   7001   7013   7019   7027   7039   7043   7057   7069   7079   7103
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(900) == 7001);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(901) == 7013);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(902) == 7019);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(903) == 7027);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(904) == 7039);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(905) == 7043);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(906) == 7057);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(907) == 7069);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(908) == 7079);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(909) == 7103);
    //   7109   7121   7127   7129   7151   7159   7177   7187   7193   7207
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(910) == 7109);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(911) == 7121);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(912) == 7127);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(913) == 7129);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(914) == 7151);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(915) == 7159);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(916) == 7177);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(917) == 7187);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(918) == 7193);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(919) == 7207);

    // 921-940
    //   7211   7213   7219   7229   7237   7243   7247   7253   7283   7297
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(920) == 7211);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(921) == 7213);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(922) == 7219);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(923) == 7229);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(924) == 7237);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(925) == 7243);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(926) == 7247);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(927) == 7253);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(928) == 7283);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(929) == 7297);
    //   7307   7309   7321   7331   7333   7349   7351   7369   7393   7411
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(930) == 7307);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(931) == 7309);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(932) == 7321);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(933) == 7331);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(934) == 7333);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(935) == 7349);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(936) == 7351);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(937) == 7369);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(938) == 7393);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(939) == 7411);

    // 941-960
    //   7417   7433   7451   7457   7459   7477   7481   7487   7489   7499
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(940) == 7417);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(941) == 7433);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(942) == 7451);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(943) == 7457);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(944) == 7459);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(945) == 7477);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(946) == 7481);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(947) == 7487);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(948) == 7489);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(949) == 7499);
    //   7507   7517   7523   7529   7537   7541   7547   7549   7559   7561
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(950) == 7507);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(951) == 7517);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(952) == 7523);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(953) == 7529);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(954) == 7537);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(955) == 7541);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(956) == 7547);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(957) == 7549);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(958) == 7559);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(959) == 7561);

    // 961-980
    //   7573   7577   7583   7589   7591   7603   7607   7621   7639   7643
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(960) == 7573);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(961) == 7577);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(962) == 7583);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(963) == 7589);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(964) == 7591);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(965) == 7603);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(966) == 7607);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(967) == 7621);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(968) == 7639);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(969) == 7643);
    //   7649   7669   7673   7681   7687   7691   7699   7703   7717   7723
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(970) == 7649);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(971) == 7669);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(972) == 7673);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(973) == 7681);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(974) == 7687);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(975) == 7691);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(976) == 7699);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(977) == 7703);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(978) == 7717);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(979) == 7723);

    // 981-1000
    // 7727   7741   7753   7757   7759   7789   7793   7817   7823   7829
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(980) == 7727);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(981) == 7741);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(982) == 7753);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(983) == 7757);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(984) == 7759);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(985) == 7789);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(986) == 7793);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(987) == 7817);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(988) == 7823);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(989) == 7829);
    // 7841   7853   7867   7873   7877   7879   7883   7901   7907   7919
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(990) == 7841);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(991) == 7853);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(992) == 7867);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(993) == 7873);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(994) == 7877);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(995) == 7879);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(996) == 7883);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(997) == 7901);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(998) == 7907);
    REQUIRE(eratosthenesTable7919.GetPrimeNumber(999) == 7919);
}