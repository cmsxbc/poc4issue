 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree132(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 9, (DAAL_DATA_TYPE)0.29900000000000004);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)0.7835000000000002);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)0.011200321753594009);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.00027632151764852029);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[1], 1, 11, (DAAL_DATA_TYPE)1.6385000000000003);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 11, (DAAL_DATA_TYPE)1.4445000000000003);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 21, (DAAL_DATA_TYPE)0.88250000000000017);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 0, (DAAL_DATA_TYPE)1.3915000000000002);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 10, (DAAL_DATA_TYPE)-2.3834999999999993);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.012162262327037751);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 1, (DAAL_DATA_TYPE)-1.1204999999999998);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 15, (DAAL_DATA_TYPE)-1.3854999999999997);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0058088000383107897);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)-0.00352855187433254);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[11], 1, 9, (DAAL_DATA_TYPE)1.0155000000000001);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 17, (DAAL_DATA_TYPE)0.65250000000000019);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 21, (DAAL_DATA_TYPE)0.58250000000000013);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0021119060068584905);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.0045815547700010818);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0004776039832973737);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0022191741820121107);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[8], 1, 26, (DAAL_DATA_TYPE)0.90750000000000008);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 0, (DAAL_DATA_TYPE)1.8525000000000003);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.008376944919315274);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[23], 1, 4, (DAAL_DATA_TYPE)-0.26349999999999996);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)0.0092626080382615331);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)-0.0077759798915524566);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[22], 1, 5, (DAAL_DATA_TYPE)0.84650000000000014);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 27, (DAAL_DATA_TYPE)0.98450000000000004);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.0098240978047251706);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)-0.0030770135747099467);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[28], 1, 25, (DAAL_DATA_TYPE)0.77150000000000019);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)-0.009607345160717767);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[32], 1, 27, (DAAL_DATA_TYPE)0.89550000000000007);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)0.0041477707161937123);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.0036743006289412248);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.00041435418680521585);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[6], 1, 3, (DAAL_DATA_TYPE)0.60550000000000004);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 6, (DAAL_DATA_TYPE)-0.15049999999999997);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 6, (DAAL_DATA_TYPE)-0.73249999999999982);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.0076575789079070091);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.0055646851565688852);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.011025944975204767);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[38], 1, 21, (DAAL_DATA_TYPE)0.98350000000000015);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 4, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 15, (DAAL_DATA_TYPE)-0.81949999999999978);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0062469772311901164);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.0019016811930228986);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.010234316303394735);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[44], 1, 9, (DAAL_DATA_TYPE)0.88850000000000018);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0022669639524624304);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 14, (DAAL_DATA_TYPE)0.20050000000000004);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.017356612593866887);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.0042855740660646315);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[5], 1, 14, (DAAL_DATA_TYPE)-0.92549999999999988);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.0092832945106971661);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 1, (DAAL_DATA_TYPE)0.37250000000000005);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)0.0041542478043723992);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[57], 1, 25, (DAAL_DATA_TYPE)0.87350000000000005);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.0023063140495320445);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.010537037350237371);

}
