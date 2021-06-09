 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree155(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 11, (DAAL_DATA_TYPE)1.7055000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 1, (DAAL_DATA_TYPE)1.6995000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 22, (DAAL_DATA_TYPE)0.71350000000000013);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 5, (DAAL_DATA_TYPE)0.59850000000000014);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 2, (DAAL_DATA_TYPE)0.73650000000000004);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 7, (DAAL_DATA_TYPE)0.42350000000000004);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)0.00053303165733814236);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.011494050354563766);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)0.0064458057550447331);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[4], 1, 25, (DAAL_DATA_TYPE)0.44450000000000006);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)-0.0036292842456272672);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)0.0034749079581210076);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[3], 1, 20, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 22, (DAAL_DATA_TYPE)0.9405);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 16, (DAAL_DATA_TYPE)1.9110000000000003);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 23, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 5, (DAAL_DATA_TYPE)0.98850000000000005);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 12, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 23, (DAAL_DATA_TYPE)0.98750000000000016);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 25, (DAAL_DATA_TYPE)0.67450000000000021);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)-0.0075198954716324809);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)0.0096769824956676794);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.01536539268933914);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[18], 1, 22, (DAAL_DATA_TYPE)0.89150000000000007);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 19, (DAAL_DATA_TYPE)0.16400000000000003);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)0.0004285355839370327);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)0.0085351254802810243);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[24], 1, 3, (DAAL_DATA_TYPE)0.61950000000000005);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)-0.012455036311314026);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)0.0015928914099931719);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[17], 1, 6, (DAAL_DATA_TYPE)-0.12449999999999999);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)0.0023073553434458743);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)-0.0038597827830368229);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[16], 1, 5, (DAAL_DATA_TYPE)1.0075000000000001);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.0046253223903477197);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[34], 1, 10, (DAAL_DATA_TYPE)-0.21649999999999997);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.0051845220463543106);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)0.0078264271660538568);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[15], 1, 0, (DAAL_DATA_TYPE)0.8045000000000001);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 25, (DAAL_DATA_TYPE)0.82050000000000012);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.0079144966872057559);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.0021380211730376358);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.0002598028951001521);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.0012088427119157175);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[13], 1, 0, (DAAL_DATA_TYPE)0.82150000000000001);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)0.00060353683120036635);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[45], 1, 23, (DAAL_DATA_TYPE)1.3180000000000003);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.0023089724920221902);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)0.003900309168447805);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[2], 1, 25, (DAAL_DATA_TYPE)1.0215000000000003);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 15, (DAAL_DATA_TYPE)1.0315000000000001);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 23, (DAAL_DATA_TYPE)0.98250000000000004);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.005522752954469373);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.0054062115567960851);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[51], 1, 11, (DAAL_DATA_TYPE)-0.51849999999999985);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0019165406336209606);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.010475499361105589);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.0057770511454769552);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[1], 1, 27, (DAAL_DATA_TYPE)0.9085000000000002);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.0097285608927320175);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.0012227261159569024);

}