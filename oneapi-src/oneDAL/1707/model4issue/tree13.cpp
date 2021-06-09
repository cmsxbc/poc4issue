 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree13(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.2815000000000001);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 25, (DAAL_DATA_TYPE)0.66550000000000009);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)1.5755000000000001);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 3, (DAAL_DATA_TYPE)0.42050000000000004);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 26, (DAAL_DATA_TYPE)0.88850000000000018);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)0.0057767310517805592);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.0080541532309282397);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[4], 1, 21, (DAAL_DATA_TYPE)0.86750000000000005);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 9, (DAAL_DATA_TYPE)1.1375000000000002);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.0086992542104174699);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0055038873638425558);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[8], 1, 13, (DAAL_DATA_TYPE)0.9405);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)-0.0042598726182449158);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.0023722117740987082);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.0069265668058679222);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[2], 1, 25, (DAAL_DATA_TYPE)0.96550000000000014);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 26, (DAAL_DATA_TYPE)0.77650000000000008);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 5, (DAAL_DATA_TYPE)0.80150000000000021);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 14, (DAAL_DATA_TYPE)0.77350000000000019);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)-0.0091028299827815434);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.0057377531084903451);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)0.0052195263056715666);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[17], 1, 3, (DAAL_DATA_TYPE)1.5465000000000002);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 21, (DAAL_DATA_TYPE)1.0715000000000001);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 22, (DAAL_DATA_TYPE)1.0045000000000002);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 0, (DAAL_DATA_TYPE)1.3915000000000002);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)0.0086900699474757783);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0024585175514221192);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)0.012400836860522247);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[24], 1, 5, (DAAL_DATA_TYPE)0.62550000000000006);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.011019835130470557);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.005117617025971413);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[23], 1, 13, (DAAL_DATA_TYPE)0.77750000000000019);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.0071553718956077804);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.0030430018549134747);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[16], 1, 5, (DAAL_DATA_TYPE)0.87650000000000017);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 9, (DAAL_DATA_TYPE)1.0415000000000003);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 14, (DAAL_DATA_TYPE)-0.16549999999999998);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.0024912457076870665);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)-0.011250848079396185);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.0033156400530234631);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[36], 1, 3, (DAAL_DATA_TYPE)1.7675000000000003);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 13, (DAAL_DATA_TYPE)1.3135000000000001);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 15, (DAAL_DATA_TYPE)-1.2794999999999999);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)0.010707191466274909);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)-7.2042862884700296e-05);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.010743338336115299);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.0069549435417946073);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[1], 1, 3, (DAAL_DATA_TYPE)1.8335000000000001);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 22, (DAAL_DATA_TYPE)1.0465000000000002);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[50], 0, 15, (DAAL_DATA_TYPE)-1.5714999999999997);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)0.0067286271452903753);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[51], 1, 22, (DAAL_DATA_TYPE)0.77950000000000019);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-1.6284300320184054e-05);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 26, (DAAL_DATA_TYPE)0.91550000000000009);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.00054668408746902754);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)-0.010736958826552248);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[50], 1, 25, (DAAL_DATA_TYPE)2.1950000000000007);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)4.2970644103156197e-05);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.010796304622240235);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.015514762187376619);

}
