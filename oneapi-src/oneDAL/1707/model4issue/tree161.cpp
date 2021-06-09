 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree161(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 21, (DAAL_DATA_TYPE)0.42850000000000005);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 26, (DAAL_DATA_TYPE)0.84050000000000014);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)0.0028707906402446128);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[2], 1, 26, (DAAL_DATA_TYPE)0.92450000000000021);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)-0.017040875261383398);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[4], 1, 1, (DAAL_DATA_TYPE)0.80150000000000021);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)-0.00072766619830809788);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.012492773220652627);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[1], 1, 1, (DAAL_DATA_TYPE)-1.9319999999999997);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 18, (DAAL_DATA_TYPE)0.16250000000000003);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)0.005771860199049115);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.0040596838648381981);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[9], 1, 18, (DAAL_DATA_TYPE)0.21850000000000003);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 10, (DAAL_DATA_TYPE)-2.3834999999999993);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0092299139296466663);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.00036622360291196031);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[13], 1, 3, (DAAL_DATA_TYPE)0.48450000000000004);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 22, (DAAL_DATA_TYPE)1.0675000000000001);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 18, (DAAL_DATA_TYPE)0.44850000000000007);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)0.0035238601673128348);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[19], 1, 26, (DAAL_DATA_TYPE)0.82250000000000012);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0078588491161353888);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 27, (DAAL_DATA_TYPE)0.82250000000000012);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.0026019842579085945);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.006456665680791761);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[18], 1, 1, (DAAL_DATA_TYPE)-0.24249999999999997);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0033285364974290133);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0069425923850512999);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[17], 1, 19, (DAAL_DATA_TYPE)1.639);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 18, (DAAL_DATA_TYPE)1.2545000000000002);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 5, (DAAL_DATA_TYPE)0.5655);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 10, (DAAL_DATA_TYPE)-0.16149999999999998);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 17, (DAAL_DATA_TYPE)1.0255000000000003);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.0040436494355209369);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.0060366849382889678);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)0.0080395552744379362);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.0011275068724410028);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[30], 1, 5, (DAAL_DATA_TYPE)0.88650000000000018);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 13, (DAAL_DATA_TYPE)0.9165000000000002);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 13, (DAAL_DATA_TYPE)0.74050000000000005);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 3, (DAAL_DATA_TYPE)1.0965000000000003);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.0017583573593738231);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.0091116329499830798);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.0047522874921560286);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[39], 1, 10, (DAAL_DATA_TYPE)0.48650000000000004);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)-0.012793248310321715);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[45], 1, 25, (DAAL_DATA_TYPE)0.86750000000000005);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)0.0021712256711907685);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)-0.011347267630044372);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[38], 1, 23, (DAAL_DATA_TYPE)0.98950000000000016);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 24, (DAAL_DATA_TYPE)1.3685000000000003);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.00068243681050745057);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.010633053457025778);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[50], 1, 3, (DAAL_DATA_TYPE)1.2785000000000002);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[54], 0, 25, (DAAL_DATA_TYPE)1.0255000000000003);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.0045844915437307709);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.01413845066582003);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)-0.0021844543331233715);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[29], 1, 26, (DAAL_DATA_TYPE)0.90150000000000008);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.00089449964463710801);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.013030574599710796);

}