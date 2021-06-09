 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree169(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 21, (DAAL_DATA_TYPE)0.58250000000000013);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 27, (DAAL_DATA_TYPE)0.74150000000000016);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 26, (DAAL_DATA_TYPE)0.83350000000000002);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 26, (DAAL_DATA_TYPE)0.69350000000000012);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)-0.0038736737097679001);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[4], 1, 11, (DAAL_DATA_TYPE)0.25550000000000006);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)0.01133205880937369);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.0040499739348888401);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)-0.0076526696677319712);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[2], 1, 1, (DAAL_DATA_TYPE)0.15250000000000002);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 9, (DAAL_DATA_TYPE)0.5375000000000002);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.001490941722295247);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[11], 1, 0, (DAAL_DATA_TYPE)1.0315000000000001);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)0.0032523956400557206);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.0093086459982970899);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[10], 1, 4, (DAAL_DATA_TYPE)1.0045000000000002);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 4, (DAAL_DATA_TYPE)-0.14449999999999996);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 10, (DAAL_DATA_TYPE)-0.10949999999999999);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)0.0071490251493674731);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)-0.0038805838253709577);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[17], 1, 17, (DAAL_DATA_TYPE)0.63950000000000007);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0013461226411163808);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)-0.012457730052992702);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0073266904102638371);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[1], 1, 21, (DAAL_DATA_TYPE)0.60350000000000004);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 2, (DAAL_DATA_TYPE)-0.34549999999999992);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.011603941038871806);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0023838564210260909);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[25], 1, 21, (DAAL_DATA_TYPE)0.61150000000000004);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.0090511271730065353);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[29], 1, 9, (DAAL_DATA_TYPE)0.65550000000000008);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 25, (DAAL_DATA_TYPE)1.2185000000000004);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 9, (DAAL_DATA_TYPE)0.61850000000000016);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 23, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 15, (DAAL_DATA_TYPE)1.3255000000000001);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 10, (DAAL_DATA_TYPE)0.77950000000000019);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 3, (DAAL_DATA_TYPE)1.3425000000000002);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 21, (DAAL_DATA_TYPE)0.7965000000000001);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.0029625475599334159);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[38], 1, 7, (DAAL_DATA_TYPE)0.83500000000000008);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.0037886568635069535);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.016119978475299748);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.014715528582605802);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)-0.0039664057508667213);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)-0.00510345448856242);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[34], 1, 25, (DAAL_DATA_TYPE)0.45250000000000007);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0038698163328637538);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.00056898122672243291);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[33], 1, 27, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 27, (DAAL_DATA_TYPE)0.91350000000000009);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 27, (DAAL_DATA_TYPE)0.80650000000000011);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 4, (DAAL_DATA_TYPE)-0.10449999999999998);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.013138362322228425);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[52], 1, 23, (DAAL_DATA_TYPE)0.98850000000000005);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)0.0096226383000612269);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)-0.0033936379253864286);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.0021993781051026996);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)0.012667733269433183);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.0029075923444772211);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.0042282521376037037);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)-0.00036618443282081134);

}
