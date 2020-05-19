/*
 * Copyright (C) 2019-2020 BiiLabs Co., Ltd. and Contributors
 * All Rights Reserved.
 * This is free software; you can redistribute it and/or modify it under the
 * terms of the MIT license. A copy of the license can be found in the file
 * "LICENSE" at the root of this distribution.
 */

#ifndef TESTS_TEST_DEFINE_H_
#define TESTS_TEST_DEFINE_H_

#include <unity/unity.h>
#include "accelerator/config.h"

#ifdef __cplusplus
extern "C" {
#endif

#define STR_HELPER(num) #num
#define STR(num) STR_HELPER(num)

#define TRYTES_81_1                                                            \
  "TFKQZVPZVWLXBJGNEPPVZNZYJFFPDMEQGGDPGSRMNXAURIELGLUCSSPGDGEQQFANGOWVXPUHNI" \
  "DOZ9999"
#define TRYTES_81_2                                                            \
  "PQNAYDPZYRMEZMOKSDFYRKRHQCHKZ9HIKDPV99TTWNZSHXYAHUVEUJDXX9BUDRDJEEKTPCV9WT" \
  "BV99999"
#define TRYTES_81_3                                                            \
  "LI9UAGLVZITPIDZCXNRKLSOEFRPUSRHYEYMWNOSIYEBKYZVGIJTJDF9RSBRKK9WPGVGPIHLMQJ" \
  "ITZ9999"
#define BUNDLE_HASH                                                            \
  "LVXEVZABVCIFEDSCONKEVEYBSIRMXGHLJDKSKQHTKZC9ULEAPSLKOOWCCZJGWSIISDDSEVUQHV" \
  "GPFOSIW"
#define TEST_ADDRESS                                                           \
  "THIS9IS9AN9ADDRESS9USED9BY9TAGNLEACCELERATOR999999999999999999999999999999" \
  "9999999"
#define TEST_TAG "TANGLEACCELERATOR9999999999"
#define TEST_TRANSFER_MESSAGE_LEN 2186
#define TEST_TRANSFER_MESSAGE_RAW_MESSAGE_LEN 1093
#define TEST_TRANSFER_MESSAGE_OVERRUN_RAW_MESSAGE_LEN 1095
#define TEST_TAG_LEN 27
#define TEST_NON_TRYTE_ADDR                                                    \
  "tfkqzvpzvwlxbjgneppvznzyjffpdmeqggdpgsrmnxaurielglucsspgdgeqqfangowvxpuhni" \
  "doz9999"
#define TEST_NON_TRYTE_TAG "tangleaccelerator9999999999"
#define VALUE 100
#define TIMESTAMP 1546436542
#define CURRENT_INDEX 1
#define LAST_INDEX 2
#define NONCE "THISTANGLEACCELERATORNONCES"
#define THRESHOLD 100

#define HASH_OF_TRYTES_1 "9IEANQPULEV9KXPRP9VHX9FDSYPZJDXAXPLXKUYECDFHRJNCCFNGKBDGMMQZRZAMIINYGHEIFTV9A9999"
#define TRYTES_2673_LEN 2673
#define TRYTES_2673_1                                                        \
  "XCRBOBVBVBYB999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999BXEOYAONFPBGKEUQZDUZZZODHWJDWHEOYY9AENYF9VNLX" \
  "ZHXBOODCOTYXW9MGGINTEJPLK9AGOPTPODVX9999999999999999999999999999ZTHONTES" \
  "T99999999999999999B9AWBZD99999999999999999999ORMJWRXVFYYFDFCKJBZAXHYFZHJ" \
  "LWYULGXLXUIAJSDLWXEUSPWRUTKPCNG9AZLCTJQFAC9XJKXDLWCFYD999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "PYTHONTEST99999999999999999999999999999999999999999999NC99999999XRVYE999" \
  "999999999"

#define HASH_OF_TRYTES_2 "PQNAYDPZYRMEZMOKSDFYRKRHQCHKZ9HIKDPV99TTWNZSHXYAHUVEUJDXX9BUDRDJEEKTPCV9WTBV99999"
#define TRYTES_2673_2                                                        \
  "BYSWEAUTWXHXZ9YBZISEK9LUHWGMHXCGEVNZHRLUWQFCUSDXZHOFHWHL9MQPVJXXZLIXPX"   \
  "PXF9KYEREFSKCPKYIIKPZVLHUTDFQKKVVBBN9ATTLPCNPJDWDEVIYYLGPZGCWXOBDXMLJC9V" \
  "O9QXTTBLAXTTBFUAROYEGQIVB9MJWJKXJMCUPTWAUGFZBTZCSJVRBGMYXTVBDDS9MYUJCPZ9" \
  "YDWWQNIPUAIJXXSNLKUBSCOIJPCLEFPOXFJREXQCUVUMKSDOVQGGHRNILCO9GNCLWFM9APMN" \
  "MWYASHXQAYBEXF9QRIHIBHYEJOYHRQJAOKAQ9AJJFQ9WEIWIJOTZATIBOXQLBMIJU9PCGBLV" \
  "DDVFP9CFFSXTDUXMEGOOFXWRTLFGV9XXMYWEMGQEEEDBTIJ9OJOXFAPFQXCDAXOUDMLVYRMR" \
  "LUDBETOLRJQAEDDLNVIRQJUBZBO9CCFDHIX9MSQCWYAXJVWHCUPTRSXJDESISQPRKZAFKFRU" \
  "LCGVRSBLVFOPEYLEE99JD9SEBALQINPDAZHFAB9RNBH9AZWIJOTLBZVIEJIAYGMC9AZGNFWG" \
  "RSWAXTYSXVROVNKCOQQIWGPNQZKHUNODGYADPYLZZZUQRTJRTODOUKAOITNOMWNGHJBBA99Q" \
  "UMBHRENGBHTH9KHUAOXBVIVDVYYZMSEYSJWIOGGXZVRGN999EEGQMCOYVJQRIRROMPCQBLDY" \
  "IGQO9AMORPYFSSUGACOJXGAQSPDY9YWRRPESNXXBDQ9OZOXVIOMLGTSWAMKMTDRSPGJKGBXQ" \
  "IVNRJRFRYEZ9VJDLHIKPSKMYC9YEGHFDS9SGVDHRIXBEMLFIINOHVPXIFAZCJKBHVMQZEVWC" \
  "OSNWQRDYWVAIBLSCBGESJUIBWZECPUCAYAWMTQKRMCHONIPKJYYTEGZCJYCT9ABRWTJLRQXK" \
  "MWY9GWZMHYZNWPXULNZAPVQLPMYQZCYNEPOCGOHBJUZLZDPIXVHLDMQYJUUBEDXXPXFLNRGI" \
  "PWBRNQQZJSGSJTTYHIGGFAWJVXWL9THTPWOOHTNQWCNYOYZXALHAZXVMIZE9WMQUDCHDJMIB" \
  "WKTYH9AC9AFOT9DPCADCV9ZWUTE9QNOMSZPTZDJLJZCJGHXUNBJFUBJWQUEZDMHXGBPTNSPZ" \
  "BR9TGSKVOHMOQSWPGFLSWNESFKSAZY9HHERAXALZCABFYPOVLAHMIHVDBGKUMDXC9WHHTIRY" \
  "HZVWNXSVQUWCR9M9RAGMFEZZKZ9XEOQGOSLFQCHHOKLDSA9QCMDGCGMRYJZLBVIFOLBIJPRO" \
  "KMHOYTBTJIWUZWJMCTKCJKKTR9LCVYPVJI9AHGI9JOWMIWZAGMLDFJA9WU9QAMEFGABIBEZN" \
  "NAL9OXSBFLOEHKDGHWFQSHMPLYFCNXAAZYJLMQDEYRGL9QKCEUEJ9LLVUOINVSZZQHCIKPAG" \
  "MT9CAYIIMTTBCPKWTYHOJIIY9GYNPAJNUJ9BKYYXSV9JSPEXYMCFAIKTGNRSQGUNIYZCRT9F" \
  "OWENSZQPD9ALUPYYAVICHVYELYFPUYDTWUSWNIYFXPX9MICCCOOZIWRNJIDALWGWRATGLJXN" \
  "AYTNIZWQ9YTVDBOFZRKO9CFWRPAQQRXTPACOWCPRLYRYSJARRKSQPR9TCFXDVIXLP9XVL99E" \
  "RRDSOHBFJDJQQGGGCZNDQ9NYCTQJWVZIAELCRBJJFDMCNZU9FIZRPGNURTXOCDSQGXTQHKHU" \
  "ECGWFUUYS9J9NYQ9U9P9UUP9YMZHWWWCIASCFLCMSKTELZWUGCDE9YOKVOVKTAYPHDF9ZCCQ" \
  "AYPJIJNGSHUIHHCOSSOOBUDOKE9CJZGYSSGNCQJVBEFTZFJ9SQUHOASKRRGBSHWKBCBWBTJH" \
  "OGQ9WOMQFHWJVEG9NYX9KWBTCAIXNXHEBDIOFO9ALYMFGRICLCKKLG9FOBOX9PDWNQRGHBKH" \
  "GKKRLWTBEQMCWQRLHAVYYZDIIPKVQTHYTWQMTOACXZOQCDTJTBAAUWXSGJF9PNQIJ9AJRUMU" \
  "VCPWYVYVARKR9RKGOUHHNKNVGGPDDLGKPQNOYHNKAVVKCXWXOQPZNSLATUJT9AUWRMPPSWHS" \
  "TTYDFAQDXOCYTZHOYYGAIM9CELMZ9AZPWB9MJXGHOKDNNSZVUDAGXTJJSSZCPZVPZBYNNTUQ" \
  "ABSXQWZCHDQSLGK9UOHCFKBIBNETK9999999999999999999999999999999999999999999" \
  "99999999999999999999999999999999999999NOXDXXKUDWLOFJLIPQIBRBMGDYCPGDNLQO" \
  "LQS99EQYKBIU9VHCJVIPFUYCQDNY9APGEVYLCENJIOBLWNB999999999XKBRHUD99C999999" \
  "99NKZKEKWLDKMJCI9N9XQOLWEPAYWSH9999999999999999999999999KDDTGZLIPBNZKMLT" \
  "OLOXQVNGLASESDQVPTXALEKRMIOHQLUHD9ELQDBQETS9QFGTYOYWLNTSKKMVJAUXSIROUICD" \
  "OXKSYZTDPEDKOQENTJOWJONDEWROCEJIEWFWLUAACVSJFTMCHHXJBJRKAAPUDXXVXFWP9X99" \
  "99IROUICDOXKSYZTDPEDKOQENTJOWJONDEWROCEJIEWFWLUAACVSJFTMCHHXJBJRKAAPUDXX" \
  "VXFWP9X9999"
#define TRYTES_2673_3                                                                                                  \
  "SBYBCCKBEATBPCADADTCFDEAJDVASAYAEAWCHDHDDDGDDBTATADDPCTCGDGDTCFDJDTCFDSASCTCTAXCCDHDPCRAYCPCADADTCFDSAWCHDAD9D9999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "9999999999999999999999FNJWLMBECSQDKHQAGDHDPXBMZFMQIMAFAUIQTDECJVGKJBKHLEBVU9TWCTPRJGYORFDSYENIQKBVSYKW999999999999" \
  "999999999999999QCUAJAMMER99999999999999999VCCKRCD99999999999999999999UVMOAPEKLRAGEZ9UYLNGKXKIILBWHHRDBIOJXHCRBJKWW" \
  "EB9INFWIGRFNVJTT9ACEEPUSFFI9AJDEGVIBYWNR9VBRFCQMEAOQQSEWEXMDETEQARJAYAEHRRECJOROEAFUOLMZYPBGPXBWHGFPMYIRAQR9Y9EPA9" \
  "999ICONNGGJIGSEPVGFIHBRCTJXXYDAWZWRLSDBJQUQPCRMEHCBRPIQBAUHBYH9FCBERGLNXAEFUUNQA9999IOTAJAMMER99999999999999999YTC" \
  "RYIVQF999999999K99999999SMA9999999UUD99999999999999"

#define TRYTES_2187_1                                                        \
  "XCRBOBVBVBYB999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999"

#define TEST_BUNDLE_HASH                                                       \
  "QBFXQETKSHDYPFUDO9ILVCAVQIXOHXKCECZYFLPBNVIX9JUXQZJE9URQEEUWPWYZOIACTCGZX9" \
  "IDIODCA"
#define TEST_CHID                                                              \
  "WYEVIWJN9DF9SBQHBUWYUECD9KD9BQHQXHOGQDTVKKYBRQUFQYGOFOTHREGVSKSSEVXMFOEHWN" \
  "KHLHDKQ"
#define TEST_EPID                                                              \
  "AAEVIWJN9DF9SBQHBUWYUECD9KD9BQHQXHOGQDTVKKYBRQUFQYGOFOTHREGVSKSSEVXMFOEHWN" \
  "KHLHDKQ"

#define TEST_PAYLOAD                                                           \
  "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer aliquam "  \
  "velit ac placerat dignissim. Suspendisse interdum nisl velit, quis "        \
  "consequat lacus gravida vitae. Mauris in faucibus eros. Phasellus "         \
  "eleifend bibendum magna in iaculis. Nullam quis nibh posuere, efficitur "   \
  "metus nec, cursus justo. Cras in eros velit. Suspendisse tempus a ipsum "   \
  "et vehicula. Nulla sed ipsum porttitor, molestie enim ut, porttitor "       \
  "neque. Aenean rutrum nunc eros, vitae ullamcorper neque pretium ut. Etiam " \
  "tempor libero sit amet fringilla eleifend. Maecenas varius nunc vel porta " \
  "bibendum. Vestibulum ultricies sagittis elit eu rutrum. Duis id orci at "   \
  "eros vehicula suscipit a ac tortor. Morbi nulla nisi, laoreet vel leo "     \
  "vel, dignissim convallis sem. Nunc id lacus consectetur, iaculis metus "    \
  "ac, dictum erat. Curabitur eget erat eu eros hendrerit dapibus quis nec "   \
  "diam. Sed vulputate velit a mi ullamcorper, ut vestibulum felis "           \
  "tincidunt. Fusce et euismod elit. Phasellus augue turpis, efficitur a "     \
  "augue ac, rutrum vehicula nisl. Morbi ullamcorper, dui non ultrices "       \
  "consequat, odio felis aliquam dui, et mattis nibh purus vitae felis. "      \
  "Pellentesque rhoncus diam enim, in porttitor turpis dignissim in. "         \
  "Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere "  \
  "cubilia Curae;"

#define CHID_BUNDLE "DTUIALBAPBDDGKHUOLLESKIEWYJTDCYYLFDVQVASATTRBPGALQEAWVRFLZAQNBKTQRK9TPREMWYCIMYMS"
#define MAM_BUNDLE_HASH "DGKBDLDHP9QCZEGXTOIQDQYUKFUXIICRVIKDFNPAHHRKGCBHRWHDPZHTTGFSVXWDEUTCGDJHFIDQWYHXA"
#define TEST_MAM_TRANSACTION_TRYTES_1                                                                                  \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999DTUIALBAPBDDGKHUOLLESKIEWYJTDCYYLFDVQVASATTRBPGALQEAWVRFLZAQNBKTQRK9TPREMWYCIMYMS999999999999" \
  "999999999999999WB9999999999999999999999999ZHHTXAD99999999999B99999999YEKIITDIJASBS9ULDKNCEFZINSLJM9IHDRDUO9GRKEBG9" \
  "RRAJBSTLBJOIFTO9QRBVGRIGFRAB9UDFGKUBUQKLJRHQWI9AVDHD9DTHNDZBMUNBJAEDHWXJHFXVENQMDHOEVA9LKRXXQLLTTNFGBYANDVSMQEHGZ9" \
  "999FEVKNVHXFQXXZRQHURCMGPXCYA9DRIORO9BFEHLXADJKZXHK9CRYPXILTNHSTX9PQOYLELB9RKTTZ9999IONONZOXVGTNGVEOCXPUI999999TRL" \
  "CSPJNF999999999MMMMMMMMMZX99999999UPBC9999999999999"
#define TEST_MAM_TRANSACTION_TRYTES_2                                                                                  \
  "CLMCBZXUEKFSIVOGGKGYMQXJFTKOQQHHOTRXAYXOV9OHQVFGPIMEGGFSVJBDZOH9JAMLMNJHPNUQM9ZGGOWMOJOTOXEPZAITUWQPAZSPAEFMVYHLES" \
  "TLAZJIOFEGMOSTLLTMDKZILJYGYTXUPS9CBLLOURIMPXXEPEKFVYGJBEXURHXIYHIQWQJROVYWKDYKVECBDIYMPXXRYEDMOXXOSSVRN9IOIUONRAKH" \
  "RVKEAGAPVFTVJLZNKFBK9HQEVVDZLLNTCMJHRFJEMLDBVTDYOBCUSZSXAKXMNMMLFNMGWTNWWUMLTAMWNCHPGSOZNBZTWBGVGRXUX9FEQSTFBCIC9F" \
  "KFDRCYYQUIQBCQZABRWPTKDS9UBIIRSEXNLSZBXVRKSDKLFZKFGYQ9UHSAETSQNFDM9EY9HJI9TOZCNTHIYDXYMLX9BHVSRVJMNKHKGLBQTRQGUSTK" \
  "VCPXYHOYDXXYDTWPSRUMNQGQWPVSHQTYNRFKFSQMZVSVRIFGJCMBOBVPTWWZCAOJXHXNZHVHXZELICZXWACLK9SGCLSNF9QTFBTOSZSUFZQGEPLFKN" \
  "VZFKQETIYXQ9IEVKVBRIDNAZ9KQAU9PZYWJZGBXXOHYONJDW9NWXIGV9MAHBILHMNYLF9FSYNMJRQBXBMWO9R9HASY9DPEQDSEPL9CVPNXIMLFCOUE" \
  "H9X9CUCBYBPRHWMLDFLSHVKBIWAIVVAFSLBKOWKAPYXXSPLIXOOCTSLMWOTLXUT9GOEWEZRDMLYPKPFHFDEZWQCQZCTNXOWLJQFYXSRCZTANR9CJOK" \
  "PSAMJEERUTU99FGVJRSTXEQPKSQRHSXUHNXVDWOTNTSTTXRZVUPITZFFNXHGPVVUWMXINHSNLXUWEWCOTMDGUMIPIL9OVTQKXEFKYUSHIHDQXVVIBK" \
  "SBTTPMLCPCZLH9MLAFGQUUIMYPIBQFDKDVEXVK9ZTGUVUSE9UGDRKZHMZBNCVWQOXQFVGDYHYDEDHZSLBGBNNDZNQJ9INHYTWJFCHHZRRNZQEPTETL" \
  "RRZG99LDAWYJDPPNZETRXNGKPDRUONYBPMUGFHOTIFKB9TRCZKFEH9D9QEVFJLFMSXMWTFLFORMMBCJCKTVTMHSRXQEWOAMJJIXUDILUCVHAKTROLJ" \
  "CUFKLNOZBDWGO9NYRHC9FZEOZBANDAMWJMQUCCEWNCSTZMXIUCQHHVCSA9SHGLZDMJQQRTCROJHDHKSIAKYYUUVAG9QIKITHVYQCAWFEAUXERZKBWS" \
  "XCHHAZ9JTDCNTVDBXLSTOIKNGFIMJHYYONIVLQ9PCWOHMWZGUVICOZS9RTVBRRRFBBYWUBGBPERDQYDYRHVZZPYHLMDLVJOWDISBGVOTMFUWXUHEHH" \
  "INSUGZQL9SUXGAFTHOEISWTTIWHSHHYAIBDBTDWWUQCQOJAWHUFIUVGYHJPYOJOUDQQLPOHXQLRRYTDPC9INTMKTQRYGEMVYWAUYTURUCAGFAYWWW9" \
  "DRBJWSGIGWRRITIYMHIWIPEPJMNKYSXHFRNAYRQWDSBUGFJPYOTYBQHRMTGYSXMCKAQRKVXPNTYKSBO9STFXTFDNIJ9JLXANWXNDZWMYYLWKCBXQKP" \
  "DCWCDQFCGUTWIUSCBYQAWUJCMGVVRRFLJAUREKHATLHBEHFMEWRE9QDPOX9WLNW9BBNHHFNMLKLNGWFLP9UNXNZEQVAWOBYP9FVDNUTSFREBAJSIYP" \
  "PX9BEQ9NZEYAZDJVMJKHISMOADJLIWCMHDSFGXRGMSHNGTV9TMCMNJNFQMQYTOIN9QQ9FFWJLTWZNACIOPMDRFQFWDKLNLIYIUBRIWYXHLZYEJHKNI" \
  "FTZTOHBBKEFYPJS9FXCRQHCPUJOA9LZRWPNXWUAXLMMREXUDJMWWCYVJHTNOBIFDNEDWYZVBPILVNSYRLOVUXAICAZMAJIPCEYX9LURKPQDUOMZXYX" \
  "KR9CWDWUZGZMCECWQNDFTCVOW9LV9ZSUOCRUZIQIYFTNYYRLILLKFPDGRZDQSOKFYMMTHOAPPTEGJAPCCXUFHDKRRCBYFVYGGEYDEDMTFIMOLOQEEY" \
  "JPFSCCYUXQKSPYGWWCZMYYDUQ9VAHYEAHXLIYKOYB9CPENZDKEOYQKWRAWWVVGJYDT9BSYUEQCTGSZRIDMLUEUMBFMKWCDFGADZOJ9MWFTTEQTNFAA" \
  "SKEOO9TDOIFYKWQNPDJ9NDTUIALBAPBDDGKHUOLLESKIEWYJTDCYYLFDVQVASATTRBPGALQEAWVRFLZAQNBKTQRK9TPREMWYCIMYMS999999999999" \
  "999999999999999999999999999999999999999999ZHHTXAD99A99999999B99999999YEKIITDIJASBS9ULDKNCEFZINSLJM9IHDRDUO9GRKEBG9" \
  "RRAJBSTLBJOIFTO9QRBVGRIGFRAB9UDFGKUBBSZ9UXSZLCDVUHKI9KMKLEYTVQEN9QQWGZLRVGOTJUPOGYKOEU9QMMQSQEWKOELTFESTGLJKLK9CZ9" \
  "999FEVKNVHXFQXXZRQHURCMGPXCYA9DRIORO9BFEHLXADJKZXHK9CRYPXILTNHSTX9PQOYLELB9RKTTZ9999IONONZOXVGTNGVEOCXPUIZ99999BOL" \
  "CSPJNF999999999MMMMMMMMMDFA9999999XZB99999999999999"
#define TEST_MAM_TRANSACTION_TRYTES_3                                                                                  \
  "DKMEDAFOMDLNLBKYDHYAOSOOKFEFVZIQVSBBNGRGYFAQ9HDNQFYTWIMB9MVDNJMXC9PGMVEUNBMHJESCSN9DPKTRDODRYXQKPGNTIWUHYKILCW9B9K" \
  "L9XNANCNPLQNRBMTXIQGZ9WMBBKOGJMEFSLSMMFCSEURHQQZIXTDFDWYLWQDDHSHEXKLNEGHWWFYFITHIBPSMLYBUOYKJDSPGJMGWJTRFPLJJXIELO" \
  "EYABGLMOQUYVXGXGDLHFRZZRUNKPSJOOZUCSHNLVVNZXICELJYSKBKZYZIPZPZBMQJRLDLSKIFZAMCRYX9TCHT9UCVYGAXFQUPKXSIBCTXXVFHGKIP" \
  "GJAQRDWFVUK9MEKVIAVSRKAQY99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999" \
  "999999999999999999999DTUIALBAPBDDGKHUOLLESKIEWYJTDCYYLFDVQVASATTRBPGALQEAWVRFLZAQNBKTQRK9TPREMWYCIMYMS999999999999" \
  "999999999999999999999999999999999999999999ZHHTXAD99B99999999B99999999YEKIITDIJASBS9ULDKNCEFZINSLJM9IHDRDUO9GRKEBG9" \
  "RRAJBSTLBJOIFTO9QRBVGRIGFRAB9UDFGKUBRCYADXIISOABXMEXTJADNFMKZFTMXMAYLAHZOMJGHMRXHENP9IJQEZSGZSJJBPYXXKFFUHLVWBFF99" \
  "999FEVKNVHXFQXXZRQHURCMGPXCYA9DRIORO9BFEHLXADJKZXHK9CRYPXILTNHSTX9PQOYLELB9RKTTZ9999IONONZOXVGTNGVEOCXPUIZ99999XJK" \
  "CSPJNF999999999MMMMMMMMMWPB9999999CKD99999999999999"

#define TEST_TOKEN "290f60110c9f0e40628031b16dfefe2eb45a6b0c2237b49ef5109f99f8eb19a8"
#define TEST_MSG_ID "TANGLEACCELERATOR9999"
#define TEST_CHANNEL_ORD 5
#define TEST_CH_DEPTH 2
#define TEST_EP_DEPTH 2
#define TEST_NTRU_PK                                                                                                   \
  "CZSMOUPMAUCKKRZVAYYFGOYDCLBTFKERQHBXLFG9KZVPPWNSXZYUA9WRG9HNXWOJCNBRBOGFZRFYWIHTXWYBPJAB9UNYNK9UJYJHTZNMWOSVQVKSIO" \
  "BQNRVQKNWGUOWKZJNVWUBUXLDDETXRJRLYLVBXAYXDMIKNDPKSBWHIMKJCTCL9UFCHPFTUXBEBWZCMQHGJKEHVZRDQDLJACUVTOKDG9BZTWQ9ZUMQX" \
  "ARRQIXNOPKBBHBAZQCKHSUXEIMQTOVKW9FQNRJL9FH9TVSQURTDWFJRJUEVDGXTUGQD9C9SUSLHNBFCIAQQSUAEBRDTMVMDEVY9ORLGMMCZOLUKXZS" \
  "HMFYTRROKECPOWWDPSBPETUGPFILFSIGGGIBOMAUTWOQHWLXNXFSDMTYXWPUPDTZSQKFGWRBLZMSTGDVOVIUODJBXAKRUYQZKRZVEAKMSIUUUMLQPA" \
  "BIZHFNFWOJWDNSCTNESQOAQHMVNBBGDYQ9APDMRNVQZEBRCWPWMWHAWXEKIPEUXITTOTSHD9HOVSCKTNTRDTUEEHPTJYSSULZWAKCNFNQU9MKRTOIE" \
  "UZJEJCKDEFVEVXCBXU9NNMHIUFIONJAQFJUPSLIBKVNKBYVCXZ9FQL9EPTGOSEJBFMGNC9BXCDJVVGOXOCWSKQNC9JHT9VDMXEMYKRWMTIOVQGWBEZ" \
  "NXPCJVWKTHRWWTNJOAC9EGNZHMRYBLQGGMJBYSRVAEGWSYQBJIUEMUNFZOCLPSYZROHLQPYIERPVTPDFDIAGGEIQNKZYSPTWXVEAZ9BUTPTECROYC9" \
  "IY9YNWCZSDQDBMIPUJLBEWZJKRZQ9HNSUQUSQKLDPAYTYVWHJVBCRYHWCRVILQAEKNRPYWJNKZXUFPMHEUIWXJGIBSTPCIVQJFFXR9OWMZOVWRDFAP" \
  "MBVASRJUNJXFOCXVCJWV9MTWSTEGXMMGGPUGHLHQSWVCCYHKSKOMSTBFCXOFJEKOEPEQWJKFNEPTFKFNYTGNKCNWFAXZQSWCYHVAXTZGBWMOPQHJYV" \
  "VGWBYVXMKJTCNKBYAIFCLGTG9MQCFXNKCLCMHAMTHUGIHENPK9WXFDLWJXUFTQAQALVFEVQJJYANVCMGHFVJGCVAZTC9X9VVE9MJJSADMSMGQYLART" \
  "MDWZITKKYPFDTREJNOGPHSGDPYMPQRCMFBPB9FTFBWSZIALHIMUZRTUPADL9YUZRTNSYGKTTXRDKDJRQPYWJZC9NWFNCCOUJPJVIPNFWKWKXYJOPNM" \
  "UULYOO9IXPOJSGAXCWKWBEWAYCEMWGNJD9LIJTCECBANNWCRMTKTNZBVLIUOWPJQRHSOOBIEGKUNV9PUHJRGSIOAONSFMWROGFKLKGMB9GZDKCBUET" \
  "DNECQHUCHYPPWWMRASQBAAOFVLJTINXDORSIFXPIANYMRVI9TOLOAG9TRLHRBHT9IXVJMELSNSQGCBEGISYSIAXMSILZPSDIYD9PYMWWCDUAHENXTI" \
  "SWYXWAHENQKHHIP9NUTOMISJGPMSYTWEFTQTGAOLNWZYHFSUPBOVBOLONZGGF9DIRNOLJPSVSXQUHBUPSOFAEADCLPDWVBMTBULGJJDI9WKEXNFIBR" \
  "MUPNVOFSCUPIUHLFQSNKBJDG9TXPHEPFENSMTXHUDQCBZI9YBPFVPAZO9QRULZBNNSYNHEEBQSPAYSKW9ZBQQOIUPGMZQNBLNEODDKYNIRVZNDTCO9" \
  "UUNUKAOWJFRYKTLDBSAKSOWXKLTJONXLOIOYCIIXITWP9YDKONLMCXCUJF9WSLQ9P9ZKPYGRMMSISBTVARJWXTE9ETVYDI9FZHPFSANYZ9UQMZOQLG" \
  "HFYAVWFWVBVBTRTJMFJYEEFFRY99WSWFGAPMFQPGLQQ9IYGOYYXTFUEGUTRZVHIAUFERTOCPXQHKXZASMYA9JZGDAFNVXQLWYBNKUOATLKQUWDUATK" \
  "9QOZKFT9LLTZKZYQUSCPIF9NRTJXHLJTRCDIZKQJIARNAFIDGGSBINUQFWMUFJ9QAEGFQYUOAXZYLSOXXMJCLAHGIOESRNUQKZYO9DRHQYIFL9HUDN" \
  "OJZWDDMVJPARWHPDBXSFCDOVYMYCKPJKEZLGVOJZVEJMVJVRKWLOCFWHIQSDUJEUGTYXBEPGRBJY9RFTUQSJGDMLPXMSIZVGMTVDEWHN9NJTGEIPG9" \
  "SYVHDBUAWGLXTBTXAQHEOOWWSAZZXNPJYCIQOKDSBWRDMFOFOYIFFQST9MDIJOLJXKDEJKGRGEBLRGXMKDXHDM9YUVZNFRJV9VJPBTEPFFWJZVCUQU" \
  "FCLCHVPYZHWOSLCRXWTYPQZWLFFRPTWIYHVTFDTG9OVEGXPZXSLBSDXTGDWBEZCHZJOLTFQIOKYZDC9ZRGLCXITHWLEUZFGABKDMWLGXYEREJCXNHO" \
  "GTHENODIPXGJAXXXORILGCBZGISURFZLRJOZNMOORBYOABXLEPVGDSYLKGFCNHYKUTLSIQAM9BHOHUUKWPDSSKUTJIWMMPIJRNCVJHTQVCGDFSKRAO" \
  "SCYXWAZQXSQNZODBCWQQRXVNQKODHXJFFGBZNNHKOJUWPCUMJVFOOCEEQKSAXSJP9ABHNAFYJZENAZOGZRROW9ERLFNVHHWMNPNHBJPEYJW9JPDYGF" \
  "P9XWQO9DIOYH9BGPQAJWCVMVGKZKNVZVDJUCIJEFISKGRALVVMO9DANYQMRW9NNAJVVLBIQIXIRKZICDJWYD9QTHXOQNCB9SSDL9S9BSGWSESLMBCB" \
  "VSLMFLAJNBWXPLECAFVUUEO9XSNNFEHSNCCMXJBTAWHLMAYYBVOCNRYZWSTHQYSAWFZAFRJIQNZFXEHTDHHZCKDYLYWJBJPVVLTDDXOIBFJ9KQDNVJ" \
  "SFBV9LH9KWNBANNGHHBYPAEVHUGZRVTXV9GTAGHUHKZCKRCFQTSOTXYGJMDCKWMYCVQEIHCRY9UKMGMOMURMIEZSIHCRGPHCI9A9YUIXR9LSEM9TVI" \
  "EXKAOTLTLEVBMCCFNJMTVAPUCKHNYIU9Z9ZPFYYYFLZCANXNNZPNDWYTBYSXWYCWHPBXFZGEKBOMBSXIJBWVOKGWIHHYRIUMAQZ9UUHEYPOP"

#define TEST_UUID "123e4567-e89b-12d3-a456-426655440000"
#define TEST_UUID_LIST_NAME "test_uuid_list"
#define CACHE_VALUE                                                                                     \
  "{\"value\": 0,\"message\": \"ZBCDKDTCFDTCSCEAQCMDEAHDPCBDVC9DTCRAPCRCRCTC9DTCFDPCHDCDFD\",\"tag\": " \
  "\"POWEREDBYTANGLEACCELERATOR9\",\"address\": "                                                       \
  "\"POWEREDBYTANGLEACCELERATOR9999999999999999999999999999999999999999999999999999999\"}"

#define DEVICE_ID "cb692268436743c9bbe17c1721741db1"

#define BUNDLE_1                                                               \
  "BUNDLE100000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZTA"
#define BUNDLE_2                                                               \
  "BUNDLE200000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZTA"
#define BUNDLE_3                                                               \
  "BUNDLE300000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZTA"

#define ADDRESS_1                                                               \
  "ADDRESS100000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZT"
#define ADDRESS_2                                                               \
  "ADDRESS200000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZT"
#define ADDRESS_3                                                               \
  "ADDRESS300000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZT"
#define ADDRESS_4                                                               \
  "ADDRESS400000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZT"
#define ADDRESS_5                                                               \
  "ADDRESS500000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZT"
#define ADDRESS_6                                                               \
  "ADDRESS600000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OORVZT"

#define TRANSACTION_1                                                               \
  "TRANSACTION100000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_2                                                               \
  "TRANSACTION200000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_3                                                               \
  "TRANSACTION300000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_4                                                               \
  "TRANSACTION400000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_5                                                               \
  "TRANSACTION500000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_6                                                               \
  "TRANSACTION600000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_7                                                               \
  "TRANSACTION700000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_8                                                               \
  "TRANSACTION800000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"
#define TRANSACTION_9                                                               \
  "TRANSACTION900000LIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZ" \
  "OO"

#define TIMESTAMP_1 1
#define TIMESTAMP_2 2
#define TIMESTAMP_3 3

#define MESSAGE_1 "MESSAGE1"
#define MESSAGE_2 "MESSAGE2"
#define MESSAGE_3 "MESSAGE3"
#define MESSAGE_4 "MESSAGE4"
#define MESSAGE_5 "MESSAGE5"
#define MESSAGE_6 "MESSAGE6"

#define TEST_PROXY_API(cmd) #cmd

#ifdef __cplusplus
}
#endif

#endif  // TESTS_TEST_DEFINE_H_
