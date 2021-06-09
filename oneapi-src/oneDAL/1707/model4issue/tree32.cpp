 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree32(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 25, (DAAL_DATA_TYPE)0.6695000000000001);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 13, (DAAL_DATA_TYPE)1.2465000000000004);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 27, (DAAL_DATA_TYPE)0.85250000000000015);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 0, (DAAL_DATA_TYPE)0.90350000000000008);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 22, (DAAL_DATA_TYPE)1.0865000000000002);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)-0.0046574821866963104);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)0.0077228149133069177);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[5], 1, 14, (DAAL_DATA_TYPE)-0.7104999999999998);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)0.0084122656368547013);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 24, (DAAL_DATA_TYPE)0.95050000000000001);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.0017630713537704846);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0083698535648485031);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0047363943867869199);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[3], 1, 27, (DAAL_DATA_TYPE)1.0925000000000002);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 14, (DAAL_DATA_TYPE)-0.79249999999999987);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)-0.0035125063572611134);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0094427219516522182);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.0059328508004546166);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[2], 1, 26, (DAAL_DATA_TYPE)0.77250000000000008);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 25, (DAAL_DATA_TYPE)0.70050000000000001);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)0.0078818334982945371);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 27, (DAAL_DATA_TYPE)0.72450000000000003);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.00057391280477697205);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.009110291223776967);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[20], 1, 3, (DAAL_DATA_TYPE)1.1225000000000003);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 10, (DAAL_DATA_TYPE)-1.4304999999999997);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-0.0011548189889817012);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.0051928890048459145);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[26], 1, 27, (DAAL_DATA_TYPE)1.1895000000000002);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 0, (DAAL_DATA_TYPE)0.36850000000000005);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.010135899462244091);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.0036781053409259187);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.0053818501587267276);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[1], 1, 0, (DAAL_DATA_TYPE)2.4805000000000006);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 22, (DAAL_DATA_TYPE)0.77950000000000019);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 5, (DAAL_DATA_TYPE)0.78650000000000009);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)-0.010679493824902334);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[37], 1, 24, (DAAL_DATA_TYPE)1.3805000000000003);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 26, (DAAL_DATA_TYPE)0.9255000000000001);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.0011100816325499462);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.012903894535426437);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.0019784624023096906);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[36], 1, 24, (DAAL_DATA_TYPE)0.6585000000000002);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 3, (DAAL_DATA_TYPE)0.75350000000000017);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)0.013072393586238226);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)-0.00092322368104502846);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[44], 1, 24, (DAAL_DATA_TYPE)0.97750000000000015);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 21, (DAAL_DATA_TYPE)1.0870000000000004);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.006276366314644297);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 0, (DAAL_DATA_TYPE)0.56650000000000011);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.0074905031037573915);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[51], 1, 26, (DAAL_DATA_TYPE)0.99750000000000016);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)0.014447481285881353);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 10, (DAAL_DATA_TYPE)-0.47449999999999992);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.011674539345715728);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 25, (DAAL_DATA_TYPE)1.3335000000000001);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)0.016220755236489432);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)-0.0038844930548821727);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.00083931093884710576);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)-0.012252272706140172);

}
