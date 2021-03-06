 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree106(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 4, (DAAL_DATA_TYPE)1.7245000000000001);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 1, (DAAL_DATA_TYPE)0.93950000000000011);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 0, (DAAL_DATA_TYPE)0.72550000000000014);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 14, (DAAL_DATA_TYPE)0.77350000000000019);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 4, (DAAL_DATA_TYPE)-1.4444999999999999);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0063527081103529788);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 0, (DAAL_DATA_TYPE)0.69450000000000001);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 25, (DAAL_DATA_TYPE)1.9045000000000003);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 27, (DAAL_DATA_TYPE)0.74750000000000016);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.002813960448644745);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0011154313649291217);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.0063076391765991089);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[7], 1, 22, (DAAL_DATA_TYPE)0.76550000000000018);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)0.0053908402938395742);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[13], 1, 13, (DAAL_DATA_TYPE)0.84050000000000014);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.015384828543756158);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[15], 1, 27, (DAAL_DATA_TYPE)0.84050000000000014);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0053347889067871237);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.0082703512428062304);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[4], 1, 13, (DAAL_DATA_TYPE)1.3435000000000004);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 25, (DAAL_DATA_TYPE)0.9275000000000001);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 3, (DAAL_DATA_TYPE)0.44250000000000006);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)-0.0096746902025881265);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.0058583875876161958);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)-0.0033853081969090187);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)0.0090524928712032073);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[3], 1, 2, (DAAL_DATA_TYPE)-1.1724999999999997);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 4, (DAAL_DATA_TYPE)-1.5324999999999998);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)0.013115375332283572);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[28], 1, 9, (DAAL_DATA_TYPE)1.7605000000000002);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 10, (DAAL_DATA_TYPE)-1.4834999999999998);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)0.010924301099251299);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.0024048438041724945);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.0063790096339352183);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[27], 1, 15, (DAAL_DATA_TYPE)-1.7094999999999998);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.010464714696475615);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.0004690982967098496);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[2], 1, 2, (DAAL_DATA_TYPE)-1.2014999999999998);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 13, (DAAL_DATA_TYPE)1.5015000000000003);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)-0.0069376313047495438);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)0.0053632969830047202);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[38], 1, 25, (DAAL_DATA_TYPE)0.50100000000000011);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 0, (DAAL_DATA_TYPE)1.0725000000000002);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.0015689092406043501);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)-0.012463013476301585);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[42], 1, 13, (DAAL_DATA_TYPE)1.1035000000000001);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0019452610340416232);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 5, (DAAL_DATA_TYPE)1.0955000000000001);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 22, (DAAL_DATA_TYPE)1.0235000000000001);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 3, (DAAL_DATA_TYPE)1.0895000000000004);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.012251629388215494);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 24, (DAAL_DATA_TYPE)1.2135000000000002);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.005071175673409649);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.011747918971814215);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[49], 1, 20, (DAAL_DATA_TYPE)2.3265000000000002);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0035886392886327074);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.010028702943869261);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[48], 1, 6, (DAAL_DATA_TYPE)-0.20999999999999996);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)0.012292982889339329);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-9.2284917258299317e-05);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.0076389831340601374);

}
