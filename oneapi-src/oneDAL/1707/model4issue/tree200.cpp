 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree200(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 19, (DAAL_DATA_TYPE)-1.0864999999999998);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 17, (DAAL_DATA_TYPE)1.1175000000000004);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 21, (DAAL_DATA_TYPE)1.3545000000000003);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 24, (DAAL_DATA_TYPE)1.7450000000000003);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 1, (DAAL_DATA_TYPE)1.3805000000000003);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 22, (DAAL_DATA_TYPE)1.1005000000000003);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 14, (DAAL_DATA_TYPE)1.4460000000000002);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 10, (DAAL_DATA_TYPE)-0.52949999999999997);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 14, (DAAL_DATA_TYPE)-0.65449999999999997);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 24, (DAAL_DATA_TYPE)0.79350000000000021);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)-0.0021724858870064575);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)0.0077519568781822161);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[9], 1, 15, (DAAL_DATA_TYPE)-0.23249999999999998);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)0.00069287997803517756);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[13], 1, 1, (DAAL_DATA_TYPE)0.12850000000000003);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.010380986193194986);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.00019237296655774119);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[8], 1, 1, (DAAL_DATA_TYPE)0.035500000000000011);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 27, (DAAL_DATA_TYPE)1.0065000000000002);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 4, (DAAL_DATA_TYPE)-1.0000000180025095e-35);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 21, (DAAL_DATA_TYPE)0.80550000000000022);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0040723653917666526);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.005855971626006067);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)0.0086841837809372106);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)-0.00181094484798836);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[18], 1, 5, (DAAL_DATA_TYPE)0.70050000000000001);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0042378125296152654);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[26], 1, 21, (DAAL_DATA_TYPE)0.92450000000000021);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 17, (DAAL_DATA_TYPE)0.59750000000000003);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.0061209894166412678);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)-0.0034497143912167122);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)0.0073816146198156718);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.0071858860924839986);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[6], 1, 1, (DAAL_DATA_TYPE)-0.24249999999999997);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)0.0010289701254805551);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)0.0096381966121650009);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[5], 1, 9, (DAAL_DATA_TYPE)0.92650000000000021);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.0013128793392811092);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.011293943962525754);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0069368411071731575);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[3], 1, 0, (DAAL_DATA_TYPE)1.2285000000000001);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.010752842847257853);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)0.00085986925211424623);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[2], 1, 17, (DAAL_DATA_TYPE)1.2365000000000002);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 9, (DAAL_DATA_TYPE)0.68650000000000022);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)0.003774537044492635);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[45], 1, 2, (DAAL_DATA_TYPE)0.37750000000000006);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.0043943970901609373);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)-0.01395670009031892);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[44], 1, 14, (DAAL_DATA_TYPE)0.14850000000000002);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 25, (DAAL_DATA_TYPE)1.0835000000000001);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 0, (DAAL_DATA_TYPE)1.0465000000000002);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 24, (DAAL_DATA_TYPE)0.87550000000000006);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)0.0039519567242158318);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.0090141560175809373);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.0073194442178916054);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.0062541039364428777);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[50], 1, 1, (DAAL_DATA_TYPE)0.35850000000000004);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)0.0057196653143014725);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.0012665323781497454);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.00029874360761677598);

}
